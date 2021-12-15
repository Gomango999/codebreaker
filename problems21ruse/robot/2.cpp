#include <bits/stdc++.h>
using namespace std;

int main () {
    int N = 420;
    scanf("%d", &N);

    char s[N];

    int i = 420, j = 420;
    for (int i = N; i >= 1; i--) { // doing things backwards is cool :)
        scanf("%c", s[i]);
    }
    int posx = 0;
    int posy = 0;
    for (long long i = 1; i <= N; i++) {
        if (s[i] == 'N') posy++;
        if (s[i] == 'S') posy--;
        if (s[i] == 'W') posx++;
        if (s[i] == 'E') posx--;
    }

    printf("%d\n", abs(posy) + abs(posx));
}