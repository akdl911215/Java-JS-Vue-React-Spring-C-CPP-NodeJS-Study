#include<iostream>
using namespace std;

int main() {

	int M = 10; // 배낭의 무게
	int n = 4; // 물건의 갯수
	int p[4] = {14, 15, 20, 9}; // 물체 i의 이익
	int w[4] = {4, 3, 5, 3}; // 물체 i의 무게
	double result[4];
	int rangking[4];

	for (int i = 0; i < n; ++i) {
		result[i] = (double) p[i] / (double) w[i];
		cout << result[i] << endl;
	}

	int min = 9999;
	for (int i = 0; i < n; ++i) {
		int score = 1;
		for (int j = 0; j < n; ++j) {
			if (result[j] < min) {
				min = result[i];
				rangking[i] = score++;
			}
			else {
				rangking[i] = score++;
			}
		}

	}

	return 0;
}