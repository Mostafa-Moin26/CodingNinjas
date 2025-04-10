// Problem link --->
https://www.naukri.com/code360/problems/second-largest-number_13762781?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

// solution ---->
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {

        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }

        if (a[i] < smallest) {
            secondSmallest = smallest;
            smallest = a[i];
        } else if (a[i] < secondSmallest && a[i] != smallest) {
            secondSmallest = a[i];
        }
    }

    // Suppose if duplicate elements exist and second largest or second smallest elements does not exist 
    // here this is the safety check
    if (secondLargest == INT_MIN) secondLargest = -1;
    if (secondSmallest == INT_MAX) secondSmallest = -1;
    
    return {secondLargest, secondSmallest};


}
