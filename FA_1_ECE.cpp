#include<iostream>
using namespace std;


int Maximum(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

void Swap(int &num1, int &num2) {
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
}

// https://www.naukri.com/code360/problems/fa-1-ece_4606261?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
int main() {
    int test; cin >> test;
    int num1, num2; cin >> num1 >> num2;

    switch (test) {
    case 1:
        cout << Maximum(num1, num2);
        break;
    case 2:
        Swap(num1, num2);
        cout << num1 << " " << num2;
        break;
    default:
        cout << "Invalid test option";

    }

    return 0;
}