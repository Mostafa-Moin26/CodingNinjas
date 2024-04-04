#include<iostream>
using namespace std;

string compareIfElse(int a, int b) {
    // Write your code here
    if (a < b) {
        return "smaller";
    } else if (a > b) {
        return "greater";
    } else {
        return "equal";
    }
}

// https://www.naukri.com/code360/problems/if-else-decision-making_8357235?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
int main() {
    int a, b; cin >> a >> b;

    cout << compareIfElse(a, b) << endl;

    return 0;
}