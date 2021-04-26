using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList) {
	LinkedList *curr = linkedList;
	while (curr != nullptr) {
		LinkedList *nextDistNode = curr->next;
		while (nextDistNode != nullptr && nextDistNode->value == curr->value) {
			nextDistNode = nextDistNode->next;
		}
		curr->next = nextDistNode;
		curr = nextDistNode;
	}
	return linkedList;
}
