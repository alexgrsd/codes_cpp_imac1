#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <iostream>
#include <cctype>

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

float npi_evaluate(std::vector<std::string> const& tokens){
    float result = 0.0f;
    std::stack<float> stack;
    for (std::string const& token : tokens)
    {
        if (is_floating(token))
        {
            stack.push(std::stof(token));
        }
        else
        {
            float f1 = stack.top(); stack.pop();
            float f2 = stack.top(); stack.pop();
            char op = token[0];
            switch (op)            {
                case '+': result = f2 + f1; break;
                case '-': result = f2 - f1; break;
                case '*': result = f2 * f1; break;
                case '/': result = f2 / f1; break;
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
    std::cout << "Result: " << npi_evaluate(words) << std::endl;
}
