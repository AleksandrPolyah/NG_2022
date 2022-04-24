#include <iostream>

using namespace std;

int main()
{
    float motherboard;
    float videocard;
    float cpu;
    float sum;
    float discount;
    cout << "Motherboard price:" << endl;
    cin >> motherboard;
    cout << "Videocard price: " << endl;
    cin >> videocard;
    cout << "CPU price: " << endl;
    cin >> cpu;
    cout << "Discount: " << endl;
    cin >> discount;
    sum =  (motherboard + videocard + cpu) - ((discount / 100) * (motherboard + videocard + cpu));
    cout << "Your PC price: $" << sum;
    return 0;
}
