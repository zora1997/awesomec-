#include <iostream>
#include <vector>
using namespace std;

void zeroOnePackage() {
    vector<int> vctWeight = {1, 3, 4};
    vector<int> vctValue = {15, 20, 30};
    int iBagWeight = 4;

    // 初始化 dp[i][j] 为 0 的二维数组
    vector<vector<int> > dp(vctWeight.size()+1, vector<int>(iBagWeight+1, 0));

    for (int i = 1; i <= vctWeight.size(); i++) {
        // cout << i << " weight: " << vctWeight[i] << endl;
        // cout << i << " value: " << vctValue[i] << endl;
        for (int j = 0; j <= iBagWeight; j++) {
            // cout << j << " bag weight" << endl;
            // 放不进去的情况
            if (vctWeight[i-1] > j) {
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j - vctWeight[i-1]] + vctValue[i-1]);
            }
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "max: " << dp[vctWeight.size()][iBagWeight]<< endl;
}

int main() {
    zeroOnePackage();
}

