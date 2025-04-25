// Problem link --->
https://www.naukri.com/code360/problems/smallest-divisor-with-the-given-limit_1755882?interviewProblemRedirection=true&search=smallest%20divisor&leftPanelTabValue=PROBLEM

// Solution ---->

int sum(vector<int> &a, int x) {

  int res = 0;

  for (int i = 0; i < a.size(); i++) {

    res += (a[i] + x - 1) / x;
  }

  return res;
}
int smallestDivisor(vector<int>& arr, int limit)
{
  // Write your code here.

  int low = 1;
  int high = *max_element(arr.begin(), arr.end());

  while (low <= high) {

    int mid = low + (high - low) / 2;

    if (sum(arr, mid) > limit) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return low;
}