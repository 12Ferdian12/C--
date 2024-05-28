#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to print the linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}


class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // 1->2->3->4->5->NULL
        // tail = 5->NULL
        // head->next->next = NULL
        // head->next = NULL
        // head = 1->2->3->4->NULL AND tail = 5->NULL
        // tail->next = head
        // head = tail

        // 4->5->1->2->3->NULL

        if (head == NULL || head->next == NULL || k == 0)
        {
            return head;
        }

        for (int i = 0; i < k; i++)
        {
            ListNode* tail = head; // tail = 1->NULL
            while(tail->next != NULL){
                tail = tail->next;
            }
            ListNode* newHead = head;
            while(newHead->next->next != NULL){
                newHead = newHead->next;
            }
            newHead->next = NULL;
            
            tail->next = head;
            head = tail;
        }
        
        return head;

        // 1->2->3->4->5->NULL
        // k = 14
        // 14%5 = 4
        // cara penyelesaian versi 2
        // 2->3->4->5->NULL and 1->NULL
        // 2->3->4->5->1->NULL
    }
};


int main() {
    // Example usage
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    int k = 2;
    cout << "Original List: ";
    printList(head);
    ListNode* rotatedHead = sol.rotateRight(head, k);
    cout << "Rotated List: ";
    printList(rotatedHead);

    return 0;
}