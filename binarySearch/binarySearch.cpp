#include <iostream>
#include <vector>
#include <string>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size() - 1;
    int m;
    auto calcM = [](int l, int r) -> int {
        return (l + r) / 2;
    };
    
    while (r >= l) {
        m = calcM(l, r);
        if (nums[m] > target) {
            r = m - 1;
        } else if (nums[m] < target) {
            l = m + 1;
        } else {
            return m;
        }
    }
    return -1;
}

int main() {

    vector<int> nums = {1,2,3,4,5};

    cout << binarySearch(nums, 5) << endl;

    return 0;
}