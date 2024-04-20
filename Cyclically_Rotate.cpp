#include <bits/stdc++.h> 
void rotate(vector<int>& arr, int n) {
    // Write your code here

    for (int i = 0; i < n - 1; ++i) {
        swap(arr[i], arr[n-1]);
    }
}

// https://www.naukri.com/code360/contests/striver-array-contest/9755146/problems/9977?leftPanelTabValue=PROBLEM