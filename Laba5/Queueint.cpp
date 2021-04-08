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
	this->push(temp->value);
	temp = temp->ptr;
	for (int i = 1; i < other.size; i++) {
		this->push(temp->value);
		temp = temp->ptr;
	}
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
Node* Queue::GetFront() {
	return this->front;
}
Node* Queue::GetRear() {
	return this->rear;
}

int Queue::GetSize() {
	return this->size;
}