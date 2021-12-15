#include <bits/stdc++.h>
using namespace std;

int main () {
    int K;
    cin >> K;
    string s;
    cin >> s;

    // initialise starting position
    int x = 0;
    int y = 0;

    // simulate robot movement
    for (int i = 0; i < K; i++) {
        if (s[i] == 'N') y++;
        if (s[i] == 'S') y--;
        if (s[i] == 'E') x++;
        if (s[i] == 'W') x--;
    }

    // find the manhattan distance back to the start
    int dist = abs(y) + abs(x);
    printf("%d\n", dist);
}