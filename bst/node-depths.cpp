using namespace std;

class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

int dfs(BinaryTree *curr, int depth) {
	if(curr == nullptr) {
		return 0;
	}
	int nodeDepths = depth + dfs(curr->left, depth + 1) + dfs(curr->right, depth + 1);
	return nodeDepths;
}

int nodeDepths(BinaryTree *root) {
	int nodeDepths = dfs(root, 0);	
  return nodeDepths;
}
