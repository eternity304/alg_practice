#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct CustomCompare {
    bool operator()(const int& a, const int& b) {
        // a should come  after b if a is greater than b, min heap
        // if a < b, a should come after b if a smaller than b, max heap
        return a < b;
    }
};

int findKthLargest(vector<int>& nums, int k) {
    bool soln = false;
    int out;
    int ct = 0;
    int prev;
    priority_queue<int, vector<int>, CustomCompare> pq;

    for (int i = 0; i < nums.size(); i++) {
        pq.push(nums[i]);
    }

    while (!soln) {
        int temp  = pq.top();
        pq.pop();

        ct += 1;
        cout << temp << " " << ct << endl;
        prev = temp;
        
        if (k == ct) {
            out = temp;
            return temp;
        }
    
    }
    return out; 
}

int main() {
    vector<int> a = {3,2,3,1,2,4,5,5,6};
    
    
    cout << findKthLargest(a, 4) << endl;

    return 0;
}