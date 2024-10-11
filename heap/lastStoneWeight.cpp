#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int lastStoneWeight(vector<int>& stones) {
    // Build queue, O(log n)
    priority_queue<int> pq;

    for (int i = 0; i < stones.size(); i++) {
        pq.push(stones[i]);        
    }

    while (pq.size() > 1) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();

        if (a > b) {
            pq.push(a - b);
        }
    }

    return pq.top();
}

int main() {
    vector<int> a = {2,7,4,1,8,1};

    cout << lastStoneWeight(a) << endl;

    return 0;
}