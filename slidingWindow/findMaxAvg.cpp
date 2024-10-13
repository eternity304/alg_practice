#include <iostream>
#include <vector>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    int maxVal = 0;
    int curr = 0;

    for (int i = 0; i < k; i++) {
        curr += nums[i];
    }
    maxVal = curr;

    for (int i = k; i < nums.size(); i++) {
        curr += nums[i] - nums[i-k];
        maxVal = max(curr, maxVal);
    }

    return (double)maxVal / (double)k;
}

int main() {
    vector<int> nums = {1,12,-5,-6,50,3};
    vector<int> nums2 = {3};
    vector<int> nums3 = {0,4,0,3,2};
    cout << findMaxAverage(nums2, 1) << endl;

    return 0;
}