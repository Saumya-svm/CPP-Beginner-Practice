#include <iostream>
using namespace std;

int main() {
	
	int div=0;
	
	for ( int i=1; i<=23; i++)
	{
	    if ( 23 % i == 0)
	    {
	        div = div + 1;
	    }
	}
	
	if ( div == 2) 
        std::cout << " The number 23 is a prime number " << std::endl;
	return 0;
}
