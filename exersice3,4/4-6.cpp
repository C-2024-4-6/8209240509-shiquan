#include <iostream>
#include <cstring>
#include <cctype>  
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
       
        char ch = tolower(s[i]);
        
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;  
        }
    }
}

int main() {
    char s[1000]; 
    int counts[26] = { 0 };  

    cout << "Enter a string: ";
    cin.getline(s, 1000);
    count(s, counts);
    cout << "Character frequencies: " << endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            cout << char('a' + i) << ": " << counts[i] << endl;
        }
    }

    return 0;
}
