#include "Header.h"
#include "iostream"
using namespace std;


Node::Node(int value) {
	this->value = value;
	this->ptr = nullptr;
}

Queue::Queue() {
	this->front = nullptr;
	this->rear = nullptr;
}

Queue::Queue(int value) {
	this->push(value);
	this->size = 1;
}

Queue::~Queue(){
	while (this->size > 1) {
		this->pop();
	}
	delete rear;
}

Queue::Queue(const Queue& other) {
	Node* temp = other.front;
	for (int i = 1; i <= other.size; i++) {
		this->push(temp->value);
		temp = temp->ptr;
	}
}

Queue::Queue(Queue&& other) {
	this->front = other.front;
	this->rear = other.rear;
	this->size = other.size;
	other.front = nullptr;
	other.rear = nullptr;
	other.size = 0;
}

void Queue::push(const int value) {
	Node* temp = new Node(value);
	this->size++;
	if (rear == nullptr) {
		front = rear = temp;
		return;
	}
	this->rear->ptr = temp;
	this->rear = temp;
}

int Queue::pop() {
	if (front == nullptr)
		return NULL;
	this->size--;
	Node* temp = front;
	this->front = front->ptr;
	if (front == nullptr)
		rear = nullptr;
	int res = temp->value;
	delete temp;
	return res;
}

Queue& Queue::operator=(Queue&& other) {
	if (this == &other) {
		return *this;
	}
	
	this->rear = other.rear;
	this->front = other.front;
	other.rear = nullptr;
	other.front = nullptr;
	other.size = 0;
	return *this;
}

Queue Queue::operator=(const Queue& other) {
	Node* temp = other.front;
	for (int i = 1; i <= other.size; i++) {
		this->push(temp->value);
		temp = temp->ptr;
	}
	return *this;
}

ostream& operator<<(ostream& out, const Queue& queue) {
	Node* temp = queue.front;
	out << temp->value;
	for (int i = 2; i <= queue.size; i++) {
		temp = temp->ptr;
		out << " " << temp->value;
	}
	return out;
}

Node* Queue::Peek() {
	return this->front;
}

Node* Queue::GetRear() {
	return this->rear;
}

int Queue::GetSize() {
	return this->size;
}