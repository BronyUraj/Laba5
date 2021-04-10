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
	cout << Q1.Peek()->value << " Head Before Pop" << endl;
	cout << Q1.pop() << " Poped" << endl;
	Q1.push(15);
	Q1.push(16);
	Q1.push(17);
	Queue Q2 = 16;
	Q2.push(100);
	Q2.push(600);
	Queue Q3 = 11;
	cout << Q2 << endl;
	cout << Q2 << endl;
	return 0;
}