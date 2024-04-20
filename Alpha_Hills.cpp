void alphaHill(int n) {
    // Write your code here.

    for (int i = 0; i < n; ++i) {

        char ch = 'A';
        for (int j = 1; j < n - i; ++j) cout << " ";

        for (int j = 1; j <= 2 * i + 1; ++j) {

            cout << ch << " ";
            if (j <= i) ch++;
            else ch--;
        }

        cout << endl;
    }
}
// https://www.naukri.com/code360/problems/alpha-hill_6581921?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM