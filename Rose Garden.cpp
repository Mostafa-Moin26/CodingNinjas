// Problem link ---->
https://www.naukri.com/code360/problems/rose-garden_2248080?interviewProblemRedirection=true&search=Rose%20Garden&leftPanelTabValue=PROBLEM

// Solution ---->
bool isPossible(vector<int> &a, int x, int m, int k) {

  int bouquets = 0;
  int cnt = 0;

  for (int i = 0; i < a.size(); i++) {

    if (a[i] <= x) {
      cnt++;
    } else {
      bouquets += cnt / k;
      cnt = 0;
    }
  }
  bouquets += cnt / k;

  return bouquets >= m;
}
int roseGarden(vector<int> arr, int k, int m)
{
  // Write your code here 
  int n = arr.size();

  if ((long long)m * k > n) {
    return -1;
  }

  int low = *min_element(arr.begin(), arr.end());
  int high = *max_element(arr.begin(), arr.end());

  while (low <= high) {

    int mid = low + (high - low) / 2;

    if (isPossible(arr, mid, m, k)) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return low;
}