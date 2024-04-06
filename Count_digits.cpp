#include<bits/stdc++.h>

using namespace std;

int countDigits(int n) {
    // Write your code here.
    int ans = 0;

    int tmp = n, rem;
    while (tmp > 0) {
        rem = tmp % 10;

        if (rem != 0 && n % rem == 0) ans++;

        tmp /= 10;
    }

    return ans;
}

// https://www.naukri.com/code360/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
int main() {

    int n; cin >> n;

    cout << countDigits(n) << endl;

    return 0;
}