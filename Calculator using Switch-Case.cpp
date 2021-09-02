#include <iostream>
using namespace std;

int main() {
    char n;
    int x;
    int y;
    std::cin >> x >> y;
    std::cout << "Enter two numbers: " << x << " , " << y << std::endl;
    std::cin >> n;
    std::cout << "Enter an operand: " << n << std::endl;
   
   switch (n) {
       case '+':
       std::cout << "Addition of the numbers = " << x+y << std::endl;
       break;
   
       case '-':
       std::cout << "Subtraction of x and y = " << x-y << std::endl;
       break;
   
       case '*':
       std::cout << "Multiplication of x and y = " << x*y << std::endl;
       break;
   
       case '/':
       std::cout << "Division of x and y = " << x/y << std::endl;
       break;
       
     default:
       std::cout << "Not valid" << std::endl;
   }

	return 0;
}


        
