// Problem link ---->
https://www.naukri.com/code360/problems/reverse-the-array_1262298?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

void reverseArray(vector<int> &arr , int m) {
    // Write your code here    

    int n = arr.size();
    int left = m + 1;
    int right = n - 1;

    while (left < right) {
        swap(arr[left], arr[right]);
        left++, right--;
    }       
}