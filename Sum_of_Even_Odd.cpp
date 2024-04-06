#include<iostream>
using namespace std;

// https://www.naukri.com/code360/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int main() {
    // Write your code here
    int n; cin >> n;

    int even, odd; even = odd = 0;

    while (n != 0) {

        int lastDigit = n % 10;
        if (lastDigit % 2 == 0) {
            even += lastDigit;
        } else {
            odd += lastDigit;
        }

        n /= 10;
    }

    cout << even << " " << odd << endl;

    return 0;

}
