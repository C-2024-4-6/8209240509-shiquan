#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 > len2) return -1;  

    
    for (int i = 0; i <= len2 - len1; ++i) {
        bool match = true;

        
        for (int j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }

        
        if (match) return i+1;
    }

    return -1;  
}

int main() {
    char s1[100], s2[100];

    
    cout << "请输入第一个字符串s1: ";
    cin >> s1;
    cout << "请输入第二个字符串s2: ";
    cin >> s2;

    
    int index = indexOf(s1, s2);

    
    if (index != -1) {
        cout << "子串 " << s1 << " 在 " << s2 << " 中的起始位置为: " << index << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}
