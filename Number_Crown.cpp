void numberCrown(int n) {
    // Write your code here.

    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= i; ++j) cout << j << " ";

        for (int j = 0; j < 2 * n - 2 * i; ++j) cout << " ";

        for (int j = i; j >= 1; --j) cout << j << " ";

        cout << endl;
    }
}
// https://www.naukri.com/code360/problems/number-crown_6581894?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM