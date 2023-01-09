#include <iostream>
using namespace std;

const string CACHE_KEY_HOT_ROOM = "%dhot_roommmmmmmmmmmmmmm";
/*
string GetRoomKey(int type, int game_type, int country) {
    char buf[256] = {0};

    if (type == 0) {
        snprintf(buf, sizeof(buf), CACHE_KEY_HOT_ROOM.c_str(), country);
    } else if (type == 1) {
        snprintf(buf, sizeof(buf), CACHE_KEY_HOT_LIVE_ROOM.c_str(), country);
    } else if (type == 2) {
        snprintf(buf, sizeof(buf), CACHE_KEY_HOT_KTV_ROOM.c_str(), game_type, country);
    }

    return buf;
}
*/

int main()
{
    char buf[256] = {0};
    snprintf(buf, sizeof(buf), CACHE_KEY_HOT_ROOM.c_str(), 5);
    cout << buf << endl;
    return 0;
}

