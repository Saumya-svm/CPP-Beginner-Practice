#include <iostream>

using namespace std;

int main() {
    
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    const int penny_value {1};
    
    int change_in_cents;
    
    std::cout << "Enter the change in cents = " << change_in_cents << std::endl;
    
    
    int dollars{}, quarters{}, dime{}, nickel{}, balance{};
    int balance_q{}; 
    int balance_n{};
    int balance_d{};
    int penny{};
    
    dollars = change_in_cents / dollar_value;
    balance = change_in_cents % dollar_value;
    quarters = balance / quarter_value;
    balance_q = balance % quarter_value;
    dime = balance_q / dime_value;
    balance_n = balance_q % dime_value;
    nickel = balance_n / nickel_value;
    balance_d = balance_n % nickel_value;
    penny = balance_d / penny_value;
    
    std::cout << dollars << std::endl;
    std::cout << quarters << std::endl;
    std::cout << dime << std::endl;
    std::cout << nickel << std::endl;
    std::cout << penny << std::endl;
    

    cout << endl;
    return 0;
}


