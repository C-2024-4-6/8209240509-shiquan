#include <iostream>
using namespace std;
float shit(float x)

{
    float z;
    z = x > 0 ? x : -x;
    return z;
}
int main()
{
    float a;
    cin >> a;
    float x = a;

    while (shit((x + a / x) / 2 - x) > 10e-5)
        x = (x + a / x) / 2;
    cout << x << endl;
    return 0;
}

