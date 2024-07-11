#include <iostream>
#include <stack>

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

int main() {
  Node *sampleTreeNode = createNode();
  stack<Node *> nodes;
  nodes.push(sampleTreeNode);

  while (!nodes.empty()) {
    Node *sample = nodes.top();
    cout << sample->value << " ";
    nodes.pop();

    if (sample->right != nullptr) {
      nodes.push(sample->right);
    }
    if (sample->left != nullptr) {
      nodes.push(sample->left);
    }
  }
  cout << endl;
  return 0;
}
