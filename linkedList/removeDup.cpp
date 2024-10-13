#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class listNode {
    public:
        int val;
        listNode* next;
        
        listNode() : val(0), next(nullptr) {};
        listNode(int val) : val(val), next(nullptr) {}; 
        listNode(int val, listNode* next) : val(val), next(next) {};
};

void printLL(listNode* head) {
        while (head) {
            cout << head->val << endl;
            head = head->next;
    }
}

listNode* deleteDuplicate(listNode* head) { 
    listNode* out = head;
    listNode* prev;
    while (head) {
        prev = head;
        if (head->next) {
            head = head->next;
            if (prev->val == head->val) {
                prev->next = head->next;
                head = prev;
            }
        } else {
            break;
        }
    }
    return out;
}

listNode* deleteDup2(listNode* head) {
    listNode* out = head;
    while (head && head->next) {
        if (head->val == head->next->val) {
            head->next = head->next->next;
        } else {
            head = head->next;
        }
    }
    return out;
}

int main() {
    listNode* root = new listNode(1);
    root->next = new listNode(1);
    root->next->next = new listNode(1);
    root->next->next->next = new listNode(2);

    printLL(root);
    printLL(deleteDup2(root));

    return 0;
}