// Problem link ---->
https://www.naukri.com/code360/problems/sum-or-product_920478

// Solution ---->
#include <bits/stdc++.h> 
#define MOD 1000000007
long long int sumOrProduct(long long int n, long long int q)
{
    // Write your code here.

    if (q == 1) {
        return (1LL * n * (n + 1) / 2) % MOD;
    } else {

        long long prod = 1;
        for (int i = 1; i <= n; i++) {
            prod = (prod * i) % MOD;
        }

        return prod;
    }
}