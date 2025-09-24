// Name: Divneev Singh
// PRN: 24070123043
// Branch: EnTC A2

#include <iostream>
using namespace std;

int main() {
    float age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 0) { 
            throw age;  // invalid case
        } 
        else if (age < 18) {
            throw age;  // below 18 case
        } 
        else {
            cout << "Accepted" << endl;
        }
    }
    catch (float age) {
        if (age < 0) {
            cout << "\nInvalid age" << endl;
        } 
        else {
            cout << "\nYou are below 18" << endl; 
        }
    }

    return 0;
}

/*
SAMPLE OUTPUT ::

Enter your age:
19
Accepted

Enter your age:
-5
Invalid age

Enter your age:
15
You are below 18
*/
