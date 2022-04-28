#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Enter your number: " << endl;
    cin >> n;
    int sum = 0;
    int help_me = n;
    for(int i = 0; help_me > 1;i++)
    {
        if(help_me % 10 % 2 == 0)
            sum += help_me % 10;
        help_me /= 10;

    }
    cout << "Sum of even numbers are: " << sum;

}
