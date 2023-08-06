#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<unsigned int> A = {5, 4, 3, 2, 1};
    vector<unsigned int> B = {4, 2, 6};
    vector<unsigned int> C;

    // 对 A 和 B 进行排序
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // 使用 std::set_difference 计算差集
    set_difference(A.begin(), A.end(), B.begin(), B.end(), std::back_inserter(C));

    // 打印结果
    for (const auto& c : C) {
        cout << c << " " << endl;
    }
}
