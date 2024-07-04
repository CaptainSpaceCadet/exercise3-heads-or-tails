#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

bool isFlippedCoinHeads() {
	return rand() % 2;
}

string askForUserName() {
	cout << "Who are you?" << endl;
	
	string name;
	cin >> name;
	
	cout << "Hello, " << name << "!" << endl;
	
	return name;
}

void runGame(int rounds) {
	string userName = askForUserName();

	// initialised the pseudorandom sequence with the time
	srand(time(NULL));

	cout << "Tossing a coin..." << endl;
	
	int headCount = 0;
	
	for (int i = 1; i <= rounds; i += 1) {
		cout << "Round " << i << ": ";
		
		if (isFlippedCoinHeads()) {
			headCount += 1;
			cout << "Heads" << endl;
		} else {
			cout << "Tails" << endl;
		}
	}
	
	cout << "Heads: " << headCount << ", Tails: " << rounds - headCount << endl;
}

int main() {
	runGame(3);
}