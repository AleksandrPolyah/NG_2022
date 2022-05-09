#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Enter your number: " << endl;
    cin >> n;
    int sum = 0;
    for(int i = n; i != 0;)
    {
        if(i % 10 % 2 == 0)
            sum += i % 10;
        i /= 10;

    }
    cout << "Sum of even numbers are: " << sum;

}
