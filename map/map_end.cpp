#include <iostream>
#include <map>
using namespace std;

int main() {
    vector<long> vctLong;
    vctLong.push_back(1111111111);

    map<char, vector<long> > mapZora;
    for (char ch = 'a'; ch <='z'; ch++) {
        mapZora[ch] = vctLong;
    }

    map<char, vector<long> > mapReq;
    int count = 0;
    int sizee =  mapZora.size();
    cout << "sizee: " << sizee << endl;
    for (map<char, vector<long> >::iterator it = mapZora.begin(); it != mapZora.end(); it++) {
        count++;
        mapReq[it->first] = it->second;
        cout << it->first << " and " << it->second[0] << endl;
        if (mapReq.size() < 3 && count != sizee) {
            cout << count << " count finish"<< endl;
            continue;
        }
        for (map<char, vector<long> >::iterator itt = mapReq.begin(); itt != mapReq.end(); itt++)
        {
            cout << "key: " << itt->first << ", value: " << itt->second[0] << endl;
        }
        
        mapReq.clear();
    }
    return 0;
}