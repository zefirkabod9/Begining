#include <iostream>
//cout - вивід у консоль
//cin - зчитування даних з консолі
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    cin >> a;
    cin >> b;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    string name;
    int age;
    cin >> name;
    cin >> age;
    cout << "My name is " << name << " , im " << age << " years old." << endl;
    
    if (a > b)
    {
        cout << "A biggest than B" << endl;
    }
    else 
    {
        cout << "B biggest than A" << endl;
    }
}