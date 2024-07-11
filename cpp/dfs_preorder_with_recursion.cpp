#include <iostream>

using namespace std;

struct Node {
  int value;
  Node *left;
  Node *right;

  Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

Node *createNode() {
  Node *root = new Node(1);

  root->left = new Node(2);
  root->right = new Node(3);

  root->left->left = new Node(4);
  root->left->right = new Node(5);

  root->right->left = new Node(6);
  root->right->right = new Node(7);

  return root;
}

void preOrder(Node *node) {
  if (node == nullptr)
    return;
  cout << node->value << " ";
  preOrder(node->left);
  preOrder(node->right);
}

int main() {
  Node *sampleTreeNode = createNode();
  preOrder(sampleTreeNode);
  cout << endl;
  return 0;
}
