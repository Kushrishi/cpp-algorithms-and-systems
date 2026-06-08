#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

void preorderTraversal(TreeNode* node) {
    if (node == nullptr) {
        return;
    }

    cout << node->data << " ";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

void inorderTraversal(TreeNode* node) {
    if (node == nullptr) {
        return;
    }

    inorderTraversal(node->left);
    cout << node->data << " ";
    inorderTraversal(node->right);
}

void postorderTraversal(TreeNode* node) {
    if (node == nullptr) {
        return;
    }

    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << " ";
}

int main() {
    TreeNode root;
    TreeNode node2;
    TreeNode node3;
    TreeNode node4;
    TreeNode node5;

    root.data = 1;
    node2.data = 2;
    node3.data = 3;
    node4.data = 4;
    node5.data = 5;

    root.left = &node2;
    root.right = &node3;

    node2.left = &node4;
    node2.right = &node5;

    node3.left = nullptr;
    node3.right = nullptr;

    node4.left = nullptr;
    node4.right = nullptr;

    node5.left = nullptr;
    node5.right = nullptr;

    cout << "Tree structure:" << endl;
    cout << "        1" << endl;
    cout << "       / \\" << endl;
    cout << "      2   3" << endl;
    cout << "     / \\" << endl;
    cout << "    4   5" << endl;

    cout << endl;

    cout << "Preorder traversal: ";
    preorderTraversal(&root);
    cout << endl;

    cout << "Inorder traversal: ";
    inorderTraversal(&root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorderTraversal(&root);
    cout << endl;

    return 0;
}