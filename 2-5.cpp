#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "请输入一行字符: ";
    getline(cin, input);

    int letters = 0, spaces = 0, digits = 0, others = 0;

    for (char c : input) {
        if (isalpha(c)) {
            letters++;
        }
        else if (isspace(c)) {
            spaces++;
        }
        else if (isdigit(c)) {
            digits++;
        }
        else {
            others++;
        }
    }

    cout << "英文字母个数: " << letters << endl;
    cout << "空格个数: " << spaces << endl;
    cout << "数字字符个数: " << digits << endl;
    cout << "其它字符个数: " << others << endl;

    return 0;
}
