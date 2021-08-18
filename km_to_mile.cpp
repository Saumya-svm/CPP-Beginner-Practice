#include <iostream>
using namespace std;

int main() {
	
	const double mile_per_km{0.62};
	
	cout << "Welcome to Kilometer to Mile convertor" << endl;
	cout << "Enter the value in Kilometer:" ;
	
	double km{0.0};
	double miles{0.0};
	
	std::cin >> km;
	miles= km * mile_per_km;
    
    cout << km << " is equivalent to " << miles << "Mile" << endl;
	
	cout << endl;
	return 0;
}