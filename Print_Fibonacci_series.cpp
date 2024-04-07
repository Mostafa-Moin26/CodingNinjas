vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> a;
    a.push_back(0);
    if (n == 1) {
        return a;
    }
    a.push_back(1);
    if (n == 2) {
        return a;
    }

    for (int i = 2; i < n; ++i) {
        int val = a[i - 2] + a[i - 1];
        a.push_back(val);
    }

    return a;
}

// https://www.naukri.com/code360/problems/print-fibonacci-series_7410103?topList=ninjas-sde-sheet&problemListRedirection=true&leftPanelTabValue=PROBLEM