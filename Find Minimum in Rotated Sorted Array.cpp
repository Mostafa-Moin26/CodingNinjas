// Problem link --->
https://www.naukri.com/code360/problems/rotated-array_1093219?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM

// Solution
int findMin(vector<int>& arr)
{
    // Write your code here.
    int low = 0, high = arr.size() - 1;
    int minEl = INT_MAX;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (arr[low] <= arr[mid]) {
            minEl = min(minEl, arr[low]);
            low = mid + 1;
        } else {
            minEl = min(minEl, arr[mid]);
            high = mid - 1;
        }
    }

    return minEl;
}