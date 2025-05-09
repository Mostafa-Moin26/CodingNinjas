// Problem link ---->
https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM

// Solution
int search(vector<int>& arr, int n, int k)
{
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == k) {
            return mid;
        }

        if (arr[low] <= arr[mid]) {

            if (arr[low] <= k && k <= arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            
            if (arr[mid] <= k && k <= arr[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    return -1;
}
