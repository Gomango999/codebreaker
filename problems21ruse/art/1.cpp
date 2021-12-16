// ___  ___         ___                                           _____           _
// |  \/  |        / _ \                                         /  __ \         | |
// | .  . |_   _  / /_\ \_      _____  ___  ___  _ __ ___   ___  | /  \/ ___   __| | ___
// | |\/| | | | | |  _  \ \ /\ / / _ \/ __|/ _ \| '_ ` _ \ / _ \ | |    / _ \ / _` |/ _ \
// | |  | | |_| | | | | |\ V  V /  __/\__ \ (_) | | | | | |  __/ | \__/\ (_) | (_| |  __/
// \_|  |_/\__, | \_| |_/ \_/\_/ \___||___/\___/|_| |_| |_|\___|  \____/\___/ \__,_|\___|
//          __/ |
//         |___/

#include <iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    int x, y;
    int top = 1, bottom = 999, left=1, right =  999;
    for (int i = 0; i < N; i++) {
        cin >> y >> x;
        top = max(top, x);
        bottom = min(bottom, y);
        left = max(left, y);
        right = min(right, x);
    }
    cout << (right - top) * (left - bottom) << '\n';
}