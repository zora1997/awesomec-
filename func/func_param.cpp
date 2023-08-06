#include <string>
#include <iostream>
using namespace std;

void abc1(const string &strName, unsigned int uName) {
    if (strName == "abc") {
        uName = 1;
    }
    uName = 999;
}

void abc2(const string &strName, unsigned int &uName) {
    if (strName == "abc") {
        uName = 1;
    }
    uName = 999;
}

void abc3(const string &strName) {
    cout << "strName: " << strName << endl;
}

int main() {
    string strName = "111";
    abc3(strName);
    /*
    string strName = "abc";
    unsigned int uName = 0;
    abc1(strName, uName);
    cout << uName << endl;
    abc1(strName, uName);
    cout << uName << endl;
    */
}
