class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int findClosestValueInBst(BST *tree, int target) {
	int globalDiff = numeric_limits<int>::max();
	int closestVal = -1;
	BST * curr = tree;
	
	while(curr != nullptr) {
		int currDiff = abs(target - curr->value);
		
		if (currDiff < globalDiff) {
			globalDiff = currDiff;
			closestVal = curr->value;
		}
		
		if(curr->value > target) {
			curr = curr->left;
		}
		else{
			curr = curr->right;
		}
	}
  return closestVal;
}
