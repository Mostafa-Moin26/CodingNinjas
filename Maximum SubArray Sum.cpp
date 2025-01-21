// Problem link ---->
https://www.naukri.com/code360/problems/maximum-subarray-sum_628288?interviewProblemRedirection=true&search=Maximum%20sub&leftPanelTabValue=PROBLEM

// Solution ---->
#include<bits/stdc++.h>
using namespace std;
int main() {

    // Write your code here
    int n; cin >> n;
    long long arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long maxSum = arr[0];
    long long sum = arr[0];

    for (int i = 0; i < n; i++) {
        sum = max(arr[i], sum + arr[i]);
        maxSum = max(maxSum, sum);

    }

    cout << maxSum << endl;

    return 0;
}