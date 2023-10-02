#include<iostream>
using namespace std;



void monsterGen();

int main() {
	char input;
	while (1) {

		monsterGen();
		cout << "press any key to continue..." << endl;
		cin >> input;

	}


}


void monsterGen() {
	int num = rand() % 100;
	if (num < 15)
		cout << "a witch appared" << endl;
	else if (num < 20)
		cout << "a skeleton appared" << endl;
	else if (num < 50)
		cout << "an alien appared" << endl;
	else if (num < 75)
		cout << "a snail appared" << endl;
	else 
		cout << "a sandwich appared" << endl;




}
