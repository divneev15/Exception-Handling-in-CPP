// Name: Divneev Singh
// PRN: 24070123043
// Branch: EnTC A2

#include<iostream>
using namespace std;

int main(){
    float a, b, ans;

    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    try {
        if(b == 0) {
            throw b;
        }
        ans = a / b;
        cout << "Division is: " << ans;
    }
    catch(float) {
        cout << "Denominator cannot be zero.";
    }
    return 0;
}

/*
SAMPLE OUTPUT ::

Enter two numbers:
5
0
Denominator cannot be zero.
*/
