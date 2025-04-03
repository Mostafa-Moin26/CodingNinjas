// Problem link ---->
https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401?leftPanelTab=0&leftPanelTabValue=PROBLEM

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    // Write your code here.

    int f = -1, c = -1;

    // finding floor of x
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] <= x) {
            f = a[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // finding ceil of x

    low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] >= x) {
            c = a[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return {f, c};
}