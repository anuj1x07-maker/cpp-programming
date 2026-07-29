#include <iostream>
using namespace std;
int main()
{
    int n, rev;
    rev = 0;
    cout << "enter a no";
    cin >> n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    cout << "reverse=" << rev;
    return 0;
}