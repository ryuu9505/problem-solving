#include <algorithm>
#include <iostream>
using namespace std;
#define MX 16 + 5

int N, T[MX], P[MX], D[MX]; // maximum pay since i_th day

int main() {

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> T[i] >> P[i];
	}
	
	for (int i = N; i > 0; i--) {
		if (i + T[i] <= N + 1)
			D[i] = max(D[i + 1], D[i + T[i]] + P[i]);
		else
			D[i] = D[i + 1];
	}

	cout << D[1];
}