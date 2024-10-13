#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> hashMap;

    for (int i: nums) {
        if (hashMap.find(i) == hashMap.end()) {
            hashMap[i];
        } else {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1,2,3,4};

    cout << containsDuplicate(nums) << endl;

    return 0;
}