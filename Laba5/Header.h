struct Node {
	int value;
	Node* ptr;
};

class Queue {
	Node* head;
	Node* tail;
public:
	Node* GetHead();
	Node* GetTail();
	Queue(int value);
	Queue(const Queue& other);
	void push(int value);
	int pop();
};

