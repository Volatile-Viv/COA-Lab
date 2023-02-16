#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << "The entered number is positive.";
    }
    else if (n < 0)
    {
        cout << "The entered number is negative.";
    }
    else
    {
        cout << "The number is zero.";
    }
}
