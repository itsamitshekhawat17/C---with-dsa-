#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (fast == slow) {
                return true;  // Cycle detected
            }
        }
        return false;  // No cycle
    }
};

int main() {
    // Creating nodes
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    // Uncomment below line to create a cycle (4 -> 2)
    head->next->next->next->next = head->next;

    Solution sol;
    if (sol.hasCycle(head)) {
        cout << "Cycle detected in Linked List!" << endl;
    } else {
        cout << "No cycle in Linked List." << endl;
    }

    return 0;
}
