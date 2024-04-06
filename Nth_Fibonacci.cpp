#include<bits/stdc++.h>
using namespace std;

int Fib(int n) {

    if (n <= 2) return 1;

    int first = 1;
    int second = 1;
    int ans = 0;

    for (int i = 3; i <= n; ++i) {

        ans = first + second;
        first = second;
        second = ans;
    }

    return ans;
}
// https://www.naukri.com/code360/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
int main()
{

    int n; cin >> n;

    cout << Fib(n) << endl;

    return 0;
}