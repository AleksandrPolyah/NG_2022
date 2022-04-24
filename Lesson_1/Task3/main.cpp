
#include <iostream>

using namespace std;

int main()
{
    int age = 0;
    int study = 0;

    cout << "Enter your age: " << endl;
    cin >> age;

    if(age > 10){
        cout << "Do you study(1/0): " << endl;
        cin >> study;
    }
     if(study == 1){
         cout << "You're cool." << endl;
     }
     if(study == 0){
         cout << "Why?" << endl;
     }

     if(age < 10){
         cout << "Wow, you're so big already" << endl;
     }

}
