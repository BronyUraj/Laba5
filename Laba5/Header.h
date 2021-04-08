struct Node {
	int value;
	Node* ptr;
};

class Queue {
	Node* head;
	Node* tail;
	int size = 0;
public:
	Node* GetHead();
	Node* GetTail();
	int GetSize();
	Queue(int value);
	Queue(const Queue& other);
	void push(int value);
	int pop();
};

