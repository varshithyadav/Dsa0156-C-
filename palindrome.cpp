#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n, reversed = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPalindrome(n))
        cout << n << " is a palindrome." << endl;
    else
        cout << n << " is not a palindrome." << endl;
    return 0;
}