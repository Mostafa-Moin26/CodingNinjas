#include<bits/stdc++.h>

using namespace std;

bool palindrome(int n)
{
    // Write your code here

    int ans = 0;
    int num = n;

    while (n > 0) {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n /= 10;
    }

    return ans == num;
}

int main() {
    int n; cin >> n;

    cout << palindrome(n) << endl;

    return 0;
}