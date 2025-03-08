// Problem link ---->
https://www.naukri.com/code360/problems/two-sum_4244495?interviewProblemRedirection=true&search=Two%20sum&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
vector<int> twoSum(vector<int> a, int target) 
{
    // Write your code here.
    int n = a.size();
    int left = 0, right = n -1;

    while (left < right) {
        int sum = a[left] + a[right];

        if (sum == target) {
            return {left, right};
        } else if (sum > target) {
            right--;
        } else {
            left++;
        }
    }

    return {-1, -1};
}