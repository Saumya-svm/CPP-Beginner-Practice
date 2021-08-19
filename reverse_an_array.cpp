// reverse an array
#include <iostream>
using namespace std;

int main() {
	
	int arr[]= {1,2,3,4,5};
	int rarr[4];
	
	/*rarr[]= {4,3,2,1}*/

	
	for (int i=0; i<2; i++){
	    int c=arr[3-i];
	   
	    arr[3-i]=arr[i];
	    arr[i]=c;
	    
	}
	for (int i=0;i<4;i++)
	{
	    cout<<arr[i]<< " ";
	}

	
	return 0;
	
}


