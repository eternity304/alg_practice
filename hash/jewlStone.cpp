#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    int count = 0;
    unordered_map<char, int> hashMap;

    for (char c: jewels) {
        hashMap[c];
    }       

    for (char c: stones) {
        if (hashMap.find(c) != hashMap.end()) {
            count += 1;
        }
    }
    return count;
}

int main() {
    string jewel = "a";
    string stones = "aAABBBBB";

    cout << numJewelsInStones(jewel, stones) << endl;

    return 0;
}