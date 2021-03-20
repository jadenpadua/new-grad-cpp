#include <vector>
#include <stack>
using namespace std;
class Node {
public:
  string name;
  vector<Node *> children;

  Node(string str) { name = str; }

  vector<string> depthFirstSearch(vector<string> *array) {
		Node *currNode = this;
		array->push_back(currNode->name);
		for (int i = 0; i < currNode->children.size(); i++) {
			children[i]->depthFirstSearch(array);
		}
    return *array;
  }

  Node *addChild(string name) {
    Node *child = new Node(name);
    children.push_back(child);
    return this;
  }
};