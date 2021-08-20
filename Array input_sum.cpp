#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 numbers. " << endl;

    for (int i=0; i<5; ++i) {
        cin >> arr[i];
    }

    cout << "The numbers are: " << endl;

    for (int a=0; a<5; a++) {
        cout << arr[a] << "  " << endl;
    }
    
    int sum= 0;
    
    for (int i=0; i<5; i++) {
            sum = sum + arr[i];
        }
    
    std::cout << "The sum of array is = " << sum << std::endl;
	
	return 0;
}


