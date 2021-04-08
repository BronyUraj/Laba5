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
}
Queue::~Queue(){
	while (this->size > 1) {
		this->pop();
	}
	delete rear;
}
//Queue::Queue(const Queue& other) {
//	Node* temp = other.tail;
//	Node* tempnext = other.head;
//	this->head->value = other.head->value;
//	this->head->ptr = nullptr;
//	while ()
//	//Queue qtemp = temp->value;
//	//temp = temp->ptr;
//	//while (temp != other.head) {
//	//	qtemp.push(temp->value);
//	//	temp = temp->ptr;
//	//}
//	//qtemp.push(temp->value);
//	//temp = qtemp.tail;
//	//this->push(temp->value);
//	//temp = temp->ptr;
//	//while (temp != qtemp.head) {
//	//	this->push(temp->value);
//	//	temp = temp->ptr;
//	//}
//	//this->push(temp->value);
//}


void Queue::push(int value) {
	Node* temp = new Node(value);
	if (rear == nullptr) {
		front = rear = temp;
		return;
	}
	this->rear->ptr = temp;
	this->rear = temp;
	size++;
}
int Queue::pop() {
	if (front == nullptr)
		return NULL;
	Node* temp = front;
	this->front = front->ptr;
	if (front == nullptr)
		rear = nullptr;
	int res = temp->value;
	delete temp;
	size--;
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