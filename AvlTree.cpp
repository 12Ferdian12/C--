#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
// 1->2->3->4->5->6->7->8->9->10

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//      5
//     / \
//    2   8
//   / \ / \
//  1  3 6  9
//     / \   \
//    4   7   10
// 1+1 = 2
// 2+1x3+(1+1) = 4

// TreeNode* insert(*TreeNode root, int val) {
//     if (root == NULL) {
//         return new TreeNode(val);
//     }
//     if (val < root->val) {
//         root->left = insert(root->left, val);
//     } else {
//         root->right = insert(root->right, val);
//     }
//     return root;
// }

TreeNode* sortedListToBST(ListNode* head) {

    TreeNode *root = NULL;  

    while (head != NULL) {
        if(root == NULL) {
            root = new TreeNode(head->val);
        } else {
            
        }
    }

    return root;
}

void printInOrder(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printInOrder(root->left);
    std::cout << root->val << " ";
    printInOrder(root->right);
}

int main() {
    // Example usage:
    ListNode* head = new ListNode(-10);
    head->next = new ListNode(-3);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(5);
    head->next->next->next->next = new ListNode(9);

    std::cout << "Given linked list: ";
    ListNode* current = head;
    while (current != NULL) {
        std::cout << current->val << " ";
        current = current->next;
    }

    TreeNode* root = sortedListToBST(head);

    // std::cout << "In-order traversal of the constructed BST: ";
    // printInOrder(root);
    // std::cout << std::endl;

    return 0;
}