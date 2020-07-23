#include <iostream>
using namespace std;

void printScore(int score) {
	std::cout << "Box score is " << score << endl;
}

  // Box is red
int getBoxScore(char box) {
	if (box == 'r') {
		printScore(10);
		return 10;
	  }
	// Box is blue
	else if (box == 'b') {
			printScore(20);
			return 20;
	  }
	else {
			printScore(0);
			return 0;
		}
	}

	void calculatePlayerScore(char boxes[]) {
		int totalScore = 0;
		for (int i = 0; i < 4; i++) {
			int score = getBoxScore(boxes[i]);
			totalScore = totalScore + score;
		}
		std::cout << "Total score: " << totalScore << "\n";
	}

	int main() {
		char boxes1[4];
		cout << "Write sequence for boxes1 :" << endl;
		for (int i = 0; i < 4; i++) {
			cin >> boxes1[i];
		}
		calculatePlayerScore(boxes1);

		char boxes2[4];
		cout << "Write sequence for boxes2:" << endl;
		for (int i = 0; i < 4; i++) {
			cin >> boxes2[i];
		}
		calculatePlayerScore(boxes2);

		return 0;
	}