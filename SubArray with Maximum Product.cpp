// Problem link ----->
https://www.naukri.com/code360/problems/subarray-with-maximum-product_6890008?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM
// Solutions ----->
// Brute force
#include<vector>
#include<bits/stdc++.h>
int subarrayWithMaxProduct(vector<int> &arr){
    // Write your code here.
    int maxRes = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        int res = 1;
        for (int j = i; j < arr.size(); j++) {
            res *= arr[j];
            maxRes = max(maxRes, res);
        }
    }

    return maxRes;
}

// Optimal
#include<vector>
#include<bits/stdc++.h>
int subarrayWithMaxProduct(vector<int> &arr){
    // Write your code here.
    int n = arr.size();
    int res = INT_MIN;
    int prefix = 1, suffix = 1;

    for (int i = 0; i < n; i++) {

        if (prefix == 0) prefix = 1;
        if (suffix == 0) suffix = 1;

        prefix *= arr[i];
        suffix *= arr[n - i - 1];

        res = max(res, max(prefix, suffix));
    }

    return res;
}