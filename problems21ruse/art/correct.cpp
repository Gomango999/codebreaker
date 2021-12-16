#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;
    int l = 10005, r = -1, d = 10005, u = -1;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        l = min(l, x);
        r = max(r, x);
        d = min(d, y);
        u = max(u, y);
    }

    printf("%d\n", (r-l) * (u-d));
}