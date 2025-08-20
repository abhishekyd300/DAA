#include <iostream>
using namespace std;

bool check(long long num) {
    int sum = 0;
    bool doubleDigit = false;  

    while (num > 0) {
        int digit = num % 10; 

        if (doubleDigit) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;  
        }

        sum += digit;
        doubleDigit = !doubleDigit; 
        num /= 10;                  
    }

    return (sum % 10 == 0);
}

int main() {
    long long cardNumber;
    cout << "Enter your card number: ";
    cin >> cardNumber;

    if (check(cardNumber))
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}
