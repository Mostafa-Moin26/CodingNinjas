// Problem link ---->
https://www.naukri.com/code360/problems/minimum-rate-to-eat-bananas_7449064?interviewProblemRedirection=true&search=koko&leftPanelTabValue=PROBLEM


bool isPossible(vector<int> &a, int k, int h) {

    int cnt = 0;

    for (int i = 0; i < a.size(); i++) {

        cnt += (a[i] - 1) / k + 1;
        
        if (cnt > h) {
            return false;
        }
    }

    return true;
}
int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here 

    int low = 1;
    int high = *max_element(v.begin(), v.end());

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (isPossible(v, mid, h)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
}