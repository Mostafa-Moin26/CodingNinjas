// Problem link ---->
https://www.naukri.com/code360/problems/count-inversions_615?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM


// Solution
#include <bits/stdc++.h> 

int merge(long long *arr, int low, int mid, int high) {
    int count = 0;
    int left = low;
    int right = mid + 1;
    vector<long long> temp;

    while (left <= mid && right <= high) {
        if (arr[left] > arr[right]) {
            count += (mid - left + 1);
            temp.push_back(arr[right++]);
        } else {
            temp.push_back(arr[left++]);
        }
    }

    while (left <= mid) temp.push_back(arr[left++]);
    while (right <= high) temp.push_back(arr[right++]);

    for (int i = 0; i < temp.size(); i++) {
        arr[low + i] = temp[i];
    }

    return count;
}
long long mergeSort(long long *arr, int low, int high) {

    if (low >= high) {
        return 0;
    }
    long long count = 0;
    int mid = (low + high) / 2;

    count += mergeSort(arr, low, mid);
    count += mergeSort(arr, mid + 1, high);
    count += merge(arr, low, mid, high);

    return count;
}
long long getInversions(long long *arr, int n){
    // Write your code here.

    long long ans = mergeSort(arr, 0, n - 1);
    
    return ans;
}