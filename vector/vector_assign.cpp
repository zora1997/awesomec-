#include <iostream>
using namespace std;

int main() {
    vector<int> v1(10, 1);
    for (size_t i = 0; i < v1.size(); i++)
    {
        cout << i << " ori v1: " << v1[i] << endl;
    }
    vector<int> v2(3, 2);
    v1.assign(v2.begin(), v2.end());
    for (size_t i = 0; i < v1.size(); i++)
    {
        cout << i << " v1: " << v1[i] << endl;
    }

    return 0;
}