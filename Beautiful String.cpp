// Problem link --->
https://www.naukri.com/code360/problems/beautiful-string_1115625?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

// Solution ---->
int makeBeautiful(string str) {
    // Write your code here
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < str.size(); i++) {

        if (i & 1) {
            if (str[i] != '1') cnt1++; // pattern: 0101....
            if (str[i] != '0') cnt2++; // pattern: 1010....
        } else {
            if (str[i] != '0') cnt1++; // pattern: 0101...
            if (str[i] != '1') cnt2++; // pattern: 1010....
        }
    }
    return min(cnt1, cnt2);
}