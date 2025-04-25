// Problem link --->
https://www.naukri.com/code360/problems/capacity-to-ship-packages-within-d-days_1229379?interviewProblemRedirection=true&search=capacity%20to%20ship&leftPanelTabValue=PROBLEM

// Solution ---->
bool isPossible(vector<int> &a, int capacity, int days) {

    int load = 0;
    int cnt = 1;

    for (int i = 0; i < a.size(); i++) {

        load += a[i];

        if (load > capacity) {
            load = a[i];
            cnt++;
        }
    }

    return cnt <= days;
}

int leastWeightCapacity(vector<int> &weights, int d)
{
    // Write your code here.

    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (isPossible(weights, mid, d)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}            }
        }

        return low;
    }
};