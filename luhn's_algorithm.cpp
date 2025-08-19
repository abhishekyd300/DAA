#include <iostream>
using namespace std;

bool check(long long num) {
    int sum = 0;
    bool doubleDigit = false;  // flag for every second digit from right

    while (num > 0) {
        int digit = num % 10;  // get last digit

        if (doubleDigit) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;  // same as summing digits
        }

        sum += digit;
        doubleDigit = !doubleDigit; // flip flag each step
        num /= 10;                  // remove last digit
    }

    return (sum % 10 == 0);
}

int main() {
    long long cardNumber;
    cout << "Enter your card number: ";
    cin >> cardNumber;

    if (check(cardNumber))
        cout << "Valid ✅";
    else
        cout << "Invalid ❌";

    return 0;
}
