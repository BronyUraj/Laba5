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
	Node* Peek();
	Node* GetRear();
	Queue();
	~Queue();
	int GetSize();
	Queue(int value);
	Queue(const Queue& other);
	Queue(Queue&& other);
	Queue& operator=(Queue&& other);
	void push(int value);
	int pop();
};

