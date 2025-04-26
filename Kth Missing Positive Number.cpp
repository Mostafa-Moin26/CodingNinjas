// Problem link ---->
https://www.naukri.com/code360/problems/kth-missing-element_893215?interviewProblemRedirection=true&search=Kth&leftPanelTabValue=PROBLEM

// Solution ---->

// brute force O(n)
int missingK(vector < int > vec, int n, int k) {
    // Write your code here.

    for (int i = 0; i < n; i++) {

        if (vec[i] <= k) {
            k++;
        } else {
            break;
        }
    }

    return k;
    
}

// Binary search O(logn)
int missingK(vector < int > vec, int n, int k) {
    // Write your code here.

    int low = 0, high = n - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        int missing = vec[mid] - (mid + 1);

        if (missing < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return low + k;
    
}

