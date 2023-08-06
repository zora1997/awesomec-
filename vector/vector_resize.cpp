#include <iostream>
using namespace std;

int main() {
    vector<int> vct;
    vct.push_back(1);
    vct.push_back(2);
    vct.push_back(3);
    vct.push_back(4);
    vct.resize(2);

    for (int i = 0; i < vct.size(); i++) {
        cout << i << " vct: " << vct[i] << endl;
    }
    
    return 0;
}