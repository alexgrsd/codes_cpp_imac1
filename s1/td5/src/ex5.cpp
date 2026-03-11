#include <iostream>
#include <string>
using namespace std;

bool pangram(const string& str) {
    bool alphabet[26] {false};
    for (char ch : str) {
        alphabet[tolower(ch) - 'a'] = true;
    }
    for (int i=0; i<26; i++){
        if (!alphabet[i]) return false;
    }
    return true;
}

int main(){
    string str1 {"the quick brown fox jumps over the lazy dog"}; // un pangram
    string str2 {"the quick brown fox jumps over the lazy cat"}; // un pas pangram

    bool bool1 {pangram(str1)};
    bool bool2 {pangram(str2)};

    cout << "str1 : " << bool1 << endl << "str2 : " << bool2 << endl;

    return 0;
}
