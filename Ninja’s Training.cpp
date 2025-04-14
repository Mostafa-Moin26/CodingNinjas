#include <vector>
#include <algorithm>

using namespace std;

// https://www.naukri.com/code360/problems/ninja-s-training_3621003?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

int ninjaTraining(int n, vector<vector<int>> &points) {
    if (n == 0) return 0;
    
    // Initialize DP table
    vector<vector<int>> dp(n, vector<int>(3, 0));
    
    // Base case: first day
    dp[0][0] = points[0][0];
    dp[0][1] = points[0][1];
    dp[0][2] = points[0][2];
    
    for (int day = 1; day < n; ++day) {
        for (int last = 0; last < 3; ++last) {
            int max_points = 0;
            for (int prev_last = 0; prev_last < 3; ++prev_last) {
                if (prev_last != last) {
                    max_points = max(max_points, dp[day-1][prev_last]);
                }
            }
            dp[day][last] = max_points + points[day][last];
        }
    }
    
    return *max_element(dp[n-1].begin(), dp[n-1].end());
}