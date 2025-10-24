// Problem link ---->
https://www.naukri.com/code360/problems/reverse-string-word-wise_624402?leftPanelTabValue=PROBLEM&count=25&page=1&search=&sort_entity=order&sort_order=ASC&customSource=studio_nav

// Solutions ----->

#include <bits/stdc++.h>
using namespace std;

void reverseStringWordWise(char input[]) {
    vector<string> words;
    string word = "";

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            } 
        } else {
            word += input[i];
        }
    }
    if (!word.empty()) words.push_back(word);

    reverse(words.begin(), words.end());

    string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) result += ' ';
    }

    strcpy(input, result.c_str());
}
