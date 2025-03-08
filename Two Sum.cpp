// Problem link ---->
https://www.naukri.com/code360/problems/two-sum_839653?interviewProblemRedirection=true&search=Two%20Sum&leftPanelTabValue=PROBLEM


#include<bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
    // Write your code here. 
    vector<pair<int, int>> ans;

    int left = 0, right = n - 1;
    sort(arr.begin(), arr.end());

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            ans.push_back({arr[left], arr[right]});
            left++;
            right--;
        } else if (sum > target) {
            right--;
        } else {
            left++;
        }
    }

    if (ans.empty()) {
        ans.push_back({-1, -1});
    }

    return ans;
}
