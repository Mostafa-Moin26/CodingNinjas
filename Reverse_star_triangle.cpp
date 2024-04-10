void nStarTriangle(int n) {
    // Write your code here.

    for (int i = 1; i <= n; ++i) {

        for (int space = 1; space < i;  ++space) {
            cout << "  ";
        }

        for (int j = 2 * (n - i  + 1)  - 1; j >= 1; --j) {
            cout << "*";
        }
        cout << endl;
    }
}

// https://www.naukri.com/code360/problems/reverse-star-triangle_6573685?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM