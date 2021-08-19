//find the sum of array
#include <iostream>
using namespace std;

int main() {
    int sum= 0;
    int arr[]={1,3,38,47,61};
    
    for (int i=0; i<5; i++) {
            sum = sum + arr[i];
        }
    
    
	std::cout << "The sum of array is = " << sum << std::endl;
	
	return 0;
}
