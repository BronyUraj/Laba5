#include "Header.h"
#include <iostream>
using namespace std;

int main() {
	Queue Q1 = 5;
	cout << Q1.GetRear()->value << " First" << endl;
	Q1.push(13);
	cout << Q1.GetRear()->value << " Second" << endl;
	Q1.push(14);
	cout << Q1.GetRear()->value << " Third" << endl;
	cout << Q1.GetFront()->value << " Head Before Pop" << endl;
	cout << Q1.pop() << " Poped" << endl;
	//Queue Q2(Q1);
	//cout << Q2.GetHead()->value << endl;
	//cout << Q2.GetTail()->value << endl;
	return 0;
}