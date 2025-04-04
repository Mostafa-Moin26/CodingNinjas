// Problem link ---->
https://www.naukri.com/code360/problems/search-in-a-rotated-sorted-array-ii_7449547?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM

// Solution
bool searchInARotatedSortedArrayII(vector<int>&a, int key) {
    // Write your code here.

    int low = 0, high = a.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == key) {
            return true;
        }

        if (a[low] == a[mid] && a[mid] == a[high]) {
            low++, high--;
            continue;
        }

        if (a[low] <= a[mid]) {

            if (a[low] <= key && key <= a[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {

            if (a[mid] <= key && key <= a[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    return false;
}
