#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Function to merge two sorted linked lists
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // code here
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;

    if(list1->val < list2->val){
        current->next = list1;
        list1 = list1->next;
    }
    current = current->next;
}

int main() {
    // Example 1
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode* mergedList1 = mergeTwoLists(list1, list2);
    printList(mergedList1);

    // Example 2
    ListNode* emptyList1 = nullptr;
    ListNode* emptyList2 = nullptr;

    ListNode* mergedList2 = mergeTwoLists(emptyList1, emptyList2);
    printList(mergedList2);

    // Example 3
    ListNode* emptyList3 = nullptr;
    ListNode* list3 = new ListNode(0);

    ListNode* mergedList3 = mergeTwoLists(emptyList3, list3);
    printList(mergedList3);

    // Clean up memory
    delete list1;
    delete list2;
    delete mergedList1;
    delete mergedList2;
    delete mergedList3;

    return 0;
}