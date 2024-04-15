void nBinaryTriangle(int n) {
    // Write your code here.

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (i & 1) {
                if (j & 1) {
                    cout << "1 ";
                } else {
                    cout << "0 ";
                }
            } else {
                if (j & 1) {
                    cout << "0 ";
                } else {
                    cout << "1 ";
                }
            }
        }
        cout << endl;
    }
}
// https://www.naukri.com/code360/problems/binary-number-triangle_6581890?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM