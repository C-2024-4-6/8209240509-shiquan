#include <iostream>
#include <cstring>
#include <cctype>  
using namespace std;

int parseHex(const char* const hexString) {
    int result = 0;  
    int length = strlen(hexString);  

    for (int i = 0; i < length; i++) {
        
        char ch = tolower(hexString[i]);
        int digit;
        if (ch >= '0' && ch <= '9') {
            digit = ch - '0';  
        }
        else if (ch >= 'a' && ch <= 'f') {
            digit = ch - 'a' + 10;  
        }
        else {
           
            return 0;
        }

        
        result = result * 16 + digit;
    }

    return result;
}

int main() {
    char hexString[100];

 
    cout << "Enter a hexadecimal number: ";
    cin >> hexString;

 
    int decimal = parseHex(hexString);

   
    cout << "The decimal value is: " << decimal << endl;

    return 0;
}
