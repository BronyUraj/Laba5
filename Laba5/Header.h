struct Node {
	int value;
	Node* ptr;
	Node(int value);
};

class Queue {
	Node* front;
	Node* rear;
	int size = 0;
public:
	Node* GetFront();
	Node* GetRear();
	Queue();
	~Queue();
	int GetSize();
	Queue(int value);
	Queue(const Queue& other);
	void push(int value);
	int pop();
};

