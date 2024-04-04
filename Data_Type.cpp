#include<iostream>
using namespace std;

int dataTypes(string type) {
    // Write your code here

    if (type == "Integer") {
        return 4;
    } else if (type == "Long") {
        return 8;
    } else if (type == "Float") {
        return 4;
    } else if (type == "Double") {
        return 8;
    } else {
        return 1;
    }
}

int main() {
    string s; cin >> s;

    cout << dataTypes(s) << endl;

    return 0;
}