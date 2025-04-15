// Problem link --->
https://www.naukri.com/code360/problems/square-root-integral_893351?interviewProblemRedirection=true&search=Square&leftPanelTabValue=PROBLEM

// Solution
int floorSqrt(int n)
{
    // Write your code here.
    int low = 1, high = n;

    while (low <= high) {

        long long mid = low + (high - low) / 2;

        if (mid * mid == n) {
            return mid;
        }
        if (mid * mid > n) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return high;
}
