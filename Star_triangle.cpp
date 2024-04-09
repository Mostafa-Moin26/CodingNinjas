void nStarTriangle(int n) {
    // Write your code here.

    int s = 1;

    for (int i = 0; i < n; ++i) {
        for (int space = i; space < n - 1; ++space) {
            cout << " ";
        }

        for (int j = 1; j <= s; ++j) {
            cout << "*";
        }
        cout << endl;
        s += 2;
    }
}
// https://www.naukri.com/code360/problems/star-triangle_6573671?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM