#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int calPoints(vector<string>& operations) {
    vector<int> stack;
    int out = 0; 
    
    for (const string& op: operations) {
        if (op == "C") {
            stack.pop_back();
        } else if (op == "D") {
            stack.push_back(2 * stack[stack.size()-1]);
        } else if (op == "+") {
            stack.push_back(stack[stack.size() - 1] + stack[stack.size() - 2]);
        } else {
            stack.push_back(stoi(op));
        }   
    }
    
    for (const int& num: stack) {
        out += num;
    }

    return out;
}

int main() {
    vector<string> ops = {"5", "2", "C", "D", "+"};
    cout << calPoints(ops) << endl;
    return 0;
}