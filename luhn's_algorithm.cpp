#include <iostream>
using namespace std;

bool check(long long num) {
    int sum = 0;
<<<<<<< HEAD
    bool doubleDigit = false;  
=======
    bool doubleDigit = false; 
>>>>>>> 585a2e6c4fb44532aafecd2011ea5d5611bb2a8c

    while (num > 0) {
        int digit = num % 10; 

        if (doubleDigit) {
            digit *= 2;
            if (digit > 9)
<<<<<<< HEAD
                digit -= 9;  
=======
                digit -= 9; 
>>>>>>> 585a2e6c4fb44532aafecd2011ea5d5611bb2a8c
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
