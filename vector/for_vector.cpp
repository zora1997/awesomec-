#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    vector<int> b;
    b.push_back(2);
    b.push_back(5);
    vector<int> c;
    
    for(int i = 0; i < a.size(); i++) {
        bool bFound = false;
        for(size_t j = 0; j < b.size(); j++) {
            if(a[i] == b[j]) {
                bFound = true;
                cout << b[j] << " and user mutual follow"<< endl;
                break;
            }            
        }
        if(!bFound) {
                c.push_back(a[i]);
                cout << "user only follow " << a[i] << endl;
        }
    }

    cout << b.size() << "mutual follow" <<  endl;
    cout << c.size() << "only follow" <<  endl;
}