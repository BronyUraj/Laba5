#include "Header.h"
#include "iostream"

using namespace std;


Queue::Queue(int value) {
	Node* temp = new Node;
	temp->value = value;
	temp->ptr = nullptr;
	head = tail = temp;
}
/*~Queue(){
	delete
}*/
Queue::Queue(const Queue& other) {
	Node* temp = other.tail;
	Queue qtemp = temp->value;
	temp = temp->ptr;
	while (temp != other.head) {
		qtemp.push(temp->value);
		temp = temp->ptr;
	}
	qtemp.push(temp->value);
	temp = qtemp.tail;
	this->push(temp->value);
	this->head = temp;
	temp = temp->ptr;
	while (temp != qtemp.head) {
		this->push(temp->value);
		temp = temp->ptr;
	}
	this->push(temp->value);
	this->tail = temp;
}
void Queue::push(int value) {
	Node* temp = new Node;
	temp->value = value;
	temp->ptr = tail;
	this->tail = temp;

}
int Queue::pop() {
	Node* temp = tail;
	while (temp->ptr != head) {
		temp = temp->ptr;
	}
	int res = head->value;
	delete head;
	head = temp;
	return res;
}
Node* Queue::GetHead() {
	return head;
}
Node* Queue::GetTail() {
	return tail;
}