#include <iostream>

using namespace std;

int main(){
    float cpu;
    float videocard;
    float motherboard;
    float discount;
    cout << "Motherboard price: " << endl;
    cin >> motherboard;
    cout << "Videocard price: " << endl;
    cin >> videocard;
    cout << "CPU price: " << endl;
    cin >> cpu;
    cout << "Discount: " << endl;
    cin >> discount;
    cout << "Your PC will cost: " << (motherboard + videocard + cpu) - ((discount / 100) * (motherboard + cpu + videocard));
}
