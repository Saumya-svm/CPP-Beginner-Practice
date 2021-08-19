//sum of even number in array
#include <iostream>
using namespace std;

int main() {
    int sum= 0;
    int arr[]={2,4,6,8,10};
    
    for (int i=0; i<=10; i+=2) {
            sum = sum + i;
        }
    }
    
    
	std::cout << "The sum of array is = " << sum << std::endl;
	
	return 0;
}
