// Problem link ---->
https://www.naukri.com/code360/problems/find-duplicate-in-array_1112602?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

// Solution ---->
#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
    // Write your code here.
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    for (auto &it : mp) {
        if (it.second > 1) {
            return it.first;
        }
    }

    return -1;
}
