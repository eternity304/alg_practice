#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


void print_arr(vector<int> &arr) {
    for (int i=0; i < arr.size(); i++) {  cout << arr[i]; }
    cout << endl;
}

int findClosestNumber(vector<int>&  nums) {
    int result = INT_MAX;
    int x;

    for (int i=0; i < nums.size(); i++) {
        x = abs(nums[i]);
        if (x < abs(result) || (x == abs(result) && x > abs(result))) {
            result = nums[i];
        }
    }
    return result;
}

int main() {

    // vector<int> arr = {1,2,3,4,5};
    // print_arr(arr);
    // cout << arr.back() << endl;
    // arr.pop_back();
    // print_arr(arr);
    // arr.push_back(5);
    // print_arr(arr);

}