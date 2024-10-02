#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

string mergeAlternately(string word1, string word2) {
    string out = "";
    int i = 0;
    int n  = word1.length(); int m = word2.length();
    while (i < max(n, m)) {
        if (i < n) out += word1[i]; 
        if (i < m) out +=  word2[i]; 
        i++;
    }
    return out;
}