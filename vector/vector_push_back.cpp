#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<unsigned int> A = {5, 4, 3, 2, 1};
    vector<unsigned int> B = []unsigned int{};
    // 打印结果
    for (const auto& b : B) {
        cout << b << " " << endl;
    }
}
