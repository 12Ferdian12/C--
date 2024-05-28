#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* list3 = new ListNode();
    ListNode* head = list3;
    
    while (list1 && list2)
    {
        if(list1->val < list2->val){
            list3->next = list1;
            list1 = list1->next;
        } else{
            list3->next = list2;
            list2 = list2->next;
        }
        list3 = list3->next;
    }

    if(list1){
        list3->next = list1;
    } else if(list2){
        list3->next = list2;
    }
    
    return head->next;
}

int main() {
    ListNode* list1 = new ListNode(2);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode* mergedList = mergeTwoLists(list1, list2);

    while (mergedList != nullptr) {
        cout << mergedList->val << " ";
        mergedList = mergedList->next;
    }

    return 0;
}