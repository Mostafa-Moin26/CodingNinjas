void nLetterTriangle(int n) {
    // Write your code here.

    for (int i = 0; i <  n; ++i) {
        char ch = 'A';

        for (int j = 0; j <= i; ++j) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
// https://www.naukri.com/code360/problems/increasing-letter-triangle_6581897?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM