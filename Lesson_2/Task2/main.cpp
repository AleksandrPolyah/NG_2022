#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Enter your number: " << endl;
    cin >> n;
    int sum = 0;
    int help_me = n;
    int s = 0;
    for(int i = 0; help_me > 1;i++)
    {
        s = help_me % 10;
        if(s % 2 == 0)
            sum += s;
        help_me /= 10;

    }
    cout << "Sum of even numbers are: " << sum;

}
