#include <bits/stdc++.h>
using namespace std;

// Definition of Node
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Solution {
public:
    int lengthOfLoop(Node *head) {
        Node* fast = head;
        Node* slow = head;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow) {
                // Loop detected
                int count = 1;
                slow = slow->next;
                while (slow != fast) {
                    count++;
                    slow = slow->next;
                }
                return count;
            }
        }
        return 0; // No loop
    }
};

int main() {
    // Creating linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Creating a loop: 5 -> points back to 3
    head->next->next->next->next->next = head->next->next;

    Solution obj;
    int loopLength = obj.lengthOfLoop(head);

    if (loopLength > 0)
        cout << "Loop detected of length: " << loopLength << endl;
    else
        cout << "No loop detected" << endl;

    return 0;
}
