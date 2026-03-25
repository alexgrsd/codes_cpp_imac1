#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <iostream>
#include <cctype>

enum class Operator { ADD, SUB, MUL, DIV};
enum class TokenType { OPERATOR, OPERAND };
struct Token {
  TokenType type;
  float value;
  Operator op;
};

std::vector<std::string> split_string(std::string const& s)
{
    std::istringstream in(s); // transforme une chaîne en flux de caractères, cela simule un flux comme l'est std::cin
    // l’itérateur va lire chaque element de "in", comme un flux d'entrée, chaque élément est séparé par un espace
    return std::vector<std::string>(std::istream_iterator<std::string>(in), std::istream_iterator<std::string>()); 
}

bool is_floating(std::string const& s)
{
    for (char c : s)
    {
        if (!std::isdigit(c) && c != '.') 
            return false;
    }

    return true;
}


Token make_token(float value) {
  return Token{TokenType::OPERAND, value, Operator::ADD}; 
}

Token make_token(Operator op) {
  return Token{TokenType::OPERATOR, 0.0f, op}; 
}

std::vector<Token> tokenize(std::vector<std::string> const& words){
    std::vector<Token> tokens;
    for (std::string const& word : words)
    {
        if (is_floating(word))
        {
            tokens.push_back(make_token(std::stof(word)));
        }
        else
        {
            char op = word[0];
            switch (op)            {
                case '+': tokens.push_back(make_token(Operator::ADD)); break;
                case '-': tokens.push_back(make_token(Operator::SUB)); break;
                case '*': tokens.push_back(make_token(Operator::MUL)); break;
                case '/': tokens.push_back(make_token(Operator::DIV)); break;
                default: break;
            }
        }
    }
    return tokens;
}

float npi_evaluate(std::vector<Token> const& tokens){
    float result = 0.0f;
    std::stack<float> stack;
    for (Token const& token : tokens)
    {
        if (token.type == TokenType::OPERAND)
        {
            stack.push(token.value);
        }
        else
        {
            float f1 = stack.top(); stack.pop();
            float f2 = stack.top(); stack.pop();
            switch (token.op)            {
                case Operator::ADD: result = f2 + f1; break;
                case Operator::SUB: result = f2 - f1; break;
                case Operator::MUL: result = f2 * f1; break;
                case Operator::DIV: result = f2 / f1; break;
                default: break;
            }
            stack.push(result);
        }
    }

    return stack.top();
}

int main() {
    std::string input; 
    std::getline(std::cin, input); 
    std::vector<std::string> words = split_string(input);
    std::vector<Token> tokens = tokenize(words);
    std::cout << "Result: " << npi_evaluate(tokens) << std::endl;
}