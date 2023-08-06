#include <iostream>
using namespace std;

int main() {
    vector<unsigned int> vct1{1, 2, 3};
    vector<unsigned int> vct2{4, 5, 6, 7};
    vct1 = vct2;
    vct1[0] = 999;
    
    for (size_t i = 0; i < vct1.size(); i++)
    {
        cout << vct1[i] << endl;
    }

    for (size_t i = 0; i < vct2.size(); i++)
    {
        cout << vct2[i] << endl;
    }
    
    return 0;
}