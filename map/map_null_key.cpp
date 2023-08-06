#include <iostream>
#include <map>
using namespace std;

int main() {
    map<unsigned int, unsigned int> mapTmp;
    mapTmp[1] = 1;
    mapTmp[2] = 2;
    cout << mapTmp[-1] << endl;
    return 0;
}