#include <iostream>
using namespace std;
// Write a Program to Find Largest Number Among Three Numbers entered by users
int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    cout << "Enter three numbers: " << endl;
    cout << num1 << " , " << num2 << " , " << num3 << endl;
    if (num1>num2 && num1>num3){
        cout << "The number " << num1 << " is the largest number." << endl;
    }
    if (num2>num1 && num2>num3){
       cout << "The number " << num2 << " is the largest number." << endl;
    }
    else if (num3>num1 && num3>num2){
        cout << "The number " << num3 << " is the largest number." << endl;
    }
	return 0;
}
