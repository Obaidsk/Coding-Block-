#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long n;
    cin >> n;
    long original = n;   
    int count = 0;
    long sum = 0;

    // count digits
    long temp = n;
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == original) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
