#include <iostream>
using namespace std;
void palidrome(int y)
{
    int digit;
    int rev = 0;
    int temp;
    temp = y;
    do
    {
        digit = y % 10;
        rev = (rev * 10) + digit;
        y = y / 10;
    } while (y != 0);
    if (temp == rev)
    {
        cout << rev << " ";
    }
}
int main()
{
    int num;

    // A palindromic number is a number that remains the same when its digits are reversed.
    for (int i = 0; i <= 100; i++)
    {
        num = i;
        palidrome(num);
    }

    return 0;
}

