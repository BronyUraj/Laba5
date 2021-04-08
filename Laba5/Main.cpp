#include "Header.h"
#include <iostream>
using namespace std;

int main() {
	Queue Q1 = 5;
	cout << Q1.GetTail()->value << " First" << endl;
	Q1.push(13);
	cout << Q1.GetTail()->value << " Second" << endl;
	Q1.push(14);
	cout << Q1.GetTail()->value << " Third" << endl;
	cout << Q1.GetHead()->value << " Head Before Pop" << endl;
	cout << Q1.pop() << " Poped" << endl;
	cout << Q1.GetHead()->value << " Head After Pop" << endl;
	Queue Q2(Q1);
	cout << Q2.GetHead()->value << endl;
	cout << Q2.GetTail()->value << endl;
	return 0;
}