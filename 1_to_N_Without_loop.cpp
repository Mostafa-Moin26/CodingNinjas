#include<bits/stdc++.h>

using namespace std;

// https://www.naukri.com/code360/problems/1-to-n-without-loop_9065674?topList=ninjas-sde-sheet&problemListRedirection=true&leftPanelTabValue=PROBLEM
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> a;

    if (x == 1) {
        a.push_back(x);
        return a;
    }

    a = printNos(x - 1);
    a.push_back(x);
}
int main() {
    int x; cin >> x;

    vector<int> ans = printNos(x);

    for (auto i : ans) cout << i << " ";

    return 0;
}