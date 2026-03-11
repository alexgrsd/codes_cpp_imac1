#include <iostream>
using namespace std;

void invertCase(string& str) {
    for (char& ch : str) {
        if (islower(ch)) {
            ch = toupper(ch);
        } else if (isupper(ch)) {
            ch = tolower(ch);
        }
    }
}

int countVowels(const string& str) {
    int count {0};
    for (char ch : str) {
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u' || lowerCh == 'y') {
            count++;
        }
    }
    return count;
}

int countConsonants(const string& str) {
    size_t length {str.length()};
    int count {static_cast<int>(length) - countVowels(str)}; // on part du principe que tout est une consonne
    for (char ch : str) {
        if (!isalpha(ch)) { // si ce n'est pas une lettre, on décrémente
            count--;
        }
    }
    return count; // on a tout :D
}

int countWords(const string& str) {
    int count {0};
    bool inWord {false};
    for (char ch : str) {
        if (isspace(ch)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

string reverseString(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; --i) {
        reversed += str[i];
    }
    return reversed;
}

bool isNumber(const string& str) {
    for (char ch : str) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}



int main() {
    string text = "HelLo, World!";
    invertCase(text);
    cout << text << endl;

    string text2 = "Hello World! This is a test.";
    cout << "Vowels: " << countVowels(text2) << endl;
    cout << "Consonants: " << countConsonants(text2) << endl;
    cout << "Words: " << countWords(text2) << endl;

    string text3 = "Hello";
    cout << "Reversed: " << reverseString(text3) << endl;
    cout << "Is number: " << (isNumber(text3) ? "Yes" : "No") << endl;

    string text4 = "12345";
    cout << "Is number: " << (isNumber(text4) ? "Yes" : "No") << endl;  

    return 0;
}