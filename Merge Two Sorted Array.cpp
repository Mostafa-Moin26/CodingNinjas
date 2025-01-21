// Problem link ----> 
https://www.naukri.com/code360/problems/ninja-and-sorted-arrays_1214628?interviewProblemRedirection=true&search=Merge&leftPanelTabValue=PROBLEM

// Solution ----->
#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    // Write your code here.
    int i = m - 1;
    int j = n - 1;
    int right = m + n - 1;

    while (j >= 0) {
        if (i >= 0 && arr1[i] > arr2[j]) {
            arr1[right] = arr1[i];
            i--;
        } else {
            arr1[right] = arr2[j];
            j--;
        }
        right--;
    }

    return arr1;
}