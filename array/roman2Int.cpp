#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> m;
    int out = 0;

    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    for (int i = 0; i < s.length(); i++) {
        if  (m[s[i]] < m[s[i]]) {
            out -= m[s[i]];
        }  else  {
            out += m[s[i]];
        }
    }

    return out;

        
}
