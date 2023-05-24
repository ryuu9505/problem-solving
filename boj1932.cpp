#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, num;

int main() {
	vector<int> prev(501), curr(501);

	cin >> N >> curr[1];	
	prev[1] = curr[1];

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> num;
			curr[j] = num + max(prev[j - 1], prev[j]);
		}
		prev = curr;
	}
		
	int ans = 0;
	for (int i = 1; i <= N; i++) {
		ans = max(ans, curr[i]);
	}

	cout << ans;
}