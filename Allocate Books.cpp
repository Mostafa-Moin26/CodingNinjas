// Problem link ---->
https://www.naukri.com/code360/problems/allocate-books_1089560?interviewProblemRedirection=true&search=book&leftPanelTabValue=PROBLEM

// Solution ---->
#include <bits/stdc++.h> 

int func(vector<int> &pages, int maxPages) {

    int ninjas = 1, p_sum = 0;

    for (int i = 0; i < pages.size(); i++) {

        if (p_sum + pages[i] <= maxPages) {
            p_sum += pages[i];
        } else {
            ninjas++;
            p_sum = pages[i];
        }
    }

    return ninjas;
}
int allocateBooks(vector<int> &pages, int n, int b)
{
    // Write your code here.
    if (b > n) {
        return -1;
    }
    int low = *max_element(pages.begin(), pages.end());
    int high = accumulate(pages.begin(), pages.end(), 0);

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if (func(pages, mid) <= b) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}