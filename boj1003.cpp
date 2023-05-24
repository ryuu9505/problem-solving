#include <iostream>

using namespace std;

int T, N;
int dp[41][2];

int main() {
    
    dp[0][0] = 1; 
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = 1;
    for (int n = 2; n <= 40; n++) {
        dp[n][0] = dp[n-1][0] + dp[n-2][0];
        dp[n][1] = dp[n-1][1] + dp[n-2][1];
    }
    
    cin >> T;
    while (T--) {
        cin >> N;
        cout << dp[N][0] << ' ' << dp[N][1] << '\n';        
    }
}