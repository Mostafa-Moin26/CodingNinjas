// Problem link ------>
https://www.naukri.com/code360/problems/print-fibonacci-series_7421617?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTabValue=PROBLEM

// Solutions ------>
int fibonacci(int n) {

    if (n <= 1) return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.

    vector<int> ans;

    for (int i = 0; i < n; ++i) {
        ans.push_back(fibonacci(i));
    }

    return ans;
}
