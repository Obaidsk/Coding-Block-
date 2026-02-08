#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long n1, n2;
    cin >> n1 >> n2;

    for (long i = n1; i <= n2; i++) {
        long temp = i;
        int count = 0;
        long sum = 0;

        
        while (temp > 0) {
            temp /= 10;
            count++;
        }

        temp = i;
        
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if (sum == i) {
            cout << i ;  
        }
    }

    return 0;
}
