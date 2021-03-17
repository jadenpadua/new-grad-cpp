using namespace std;

// This is the class of the input root. Do not edit it.
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

void branchSumsHelper(BinaryTree *curr, int currSum, vector<int> &res) {
	if(curr == nullptr) {
		return;
	}
	
	currSum += curr->value;
	if(curr->left == nullptr && curr->right == nullptr) {
		res.push_back(currSum);
		return;
	}
	branchSumsHelper(curr->left, currSum, res);
	branchSumsHelper(curr->right, currSum, res);
}

vector<int> branchSums(BinaryTree *root) {
	if(root == nullptr) {
		return {};
	}
	vector<int> res;
	branchSumsHelper(root,0,res);
  return res;
}
