#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "������һ���ַ�: ";
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

    cout << "Ӣ����ĸ����: " << letters << endl;
    cout << "�ո����: " << spaces << endl;
    cout << "�����ַ�����: " << digits << endl;
    cout << "�����ַ�����: " << others << endl;

    return 0;
}
