// Problem link ---->
https://www.naukri.com/code360/problems/sum-of-infinite-array_873335?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

const unsigned int MOD = 1000000007;

long long calculateSum(const vector<long long>& prefixSum, long long idx, long long n) {

    long long fullCycle = idx / n;
    long long sum = (fullCycle % MOD * prefixSum[n] % MOD) % MOD;
    long long remainder = idx % n;

    sum = (sum + prefixSum[remainder]) % MOD;

    return sum;
}

vector<int> sumInRanges(vector<int>& arr, int n, vector<vector<long long>>& queries, int q) {
    vector<int> ans; 

    vector<long long> prefixSum(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        prefixSum[i] = (prefixSum[i - 1] + arr[i - 1]) % MOD;
    }

    for (const auto& q : queries) {  

        long long l = q[0], r = q[1];
        long long sumTillR = calculateSum(prefixSum, r, n);
        long long sumTillL = calculateSum(prefixSum, l - 1, n);
        
        ans.push_back((sumTillR - sumTillL + MOD) % MOD);
    }

    return ans;
}
