#include <iostream>

using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
 public:
  void invert(TreeNode* root) {
    if (root == NULL) {
      return;
    }

    TreeNode* temp = root->left;

    root->left = root->right;
    root->right = temp;

    invert(root->left);
    invert(root->right);
  }

  TreeNode* invertTree(TreeNode* root) {
    if (root == NULL) {
      return NULL;
    }

    invert(root);

    return root;
  }
};

int main() {
  Solution solution;

  TreeNode root(0);

  TreeNode l1(1);
  TreeNode r1(2);

  TreeNode l2(3);
  TreeNode r2(4);
  l2.left = NULL;
  l2.right = NULL;
  r2.left = NULL;
  r2.right = NULL;

  TreeNode l3(5);
  TreeNode r3(6);
  l3.left = NULL;
  l3.right = NULL;
  r3.left = NULL;
  r3.right = NULL;

  root.left = &l1;
  root.right = &r1;

  l1.left = &l2;
  l1.right = &r2;

  r1.left = &l3;
  r1.right = &r3;

  TreeNode* result = solution.invertTree(&root);

  return 0;
}
