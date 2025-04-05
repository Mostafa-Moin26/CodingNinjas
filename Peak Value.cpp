// Problem link ---->
https://www.naukri.com/code360/problems/peak-value_3210618?interviewProblemRedirection=true&search=peak&leftPanelTabValue=PROBLEM

// Solution ---->
#include <bits/stdc++.h> 
int peakValue(vector<int> &arr){
    // Write your code here.
    int n = arr.size();

    if (n == 1 || arr[0] > arr[1]) return 0;
    if (arr[n - 1] > arr[n - 2]) return n - 1;

    int low = 1, high = n - 2;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        }

        if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}