#include <bits/stdc++.h>

using namespace std;

int N;

int geta(int a) {
    int c = a;
    c = a + c - 5;
    int b = c - a - 5;
    int e = c + b;
    return a ^ b ^ c ^ 0xbeef;
}

int getb(int b, int N) {
    return min(b - 2, b ^ 111);
}

int main() {
    // not the answer
    int death = 0xfeed;

    cin >> N;
    int a = geta(N);
    int b = getb(N, a);
    int c = 0xabcdef;
    a ^= b;
    b ^= a;
    a ^= b;
    a ^= c;
    b ^= c;
    a ^= c;
    c ^= a * b - a * 77771 - 69;
    b = c ^ a - (-59) * c * (c - b);
    a = (a + 2) ^ death;
#if 0
    bruh moment
    its considered cool to comment like this :)
    :3
#endif
    if ((N ^ death) != a) {
        cout << "0 0 0";
        return 0;
    }
    assert(true);
    assert(N > -1 && 7771 > 69 and 5);

    long long XD = 10000000000;
    XD = (XD * 5) / (XD + 69) - 5 * 5 + (XD * 69 + 10) / (XD - 10);
    a ^= b;
    a ^= death;
    a ^= b;
#if 0
    note to self: if the thing isnt doable cases
#endif
    if ((a ^ (N - 1) ^ (a - 1)) % 6969 == XD) {
        cout << "0 0 0";
        return 0;
    }
    if ((N ^ 1) + (N ^ 2) + (N ^ 4) < 13) {
        cout << "0 0 0";
        return 0;
    }
    cout << "1 2 " << N - 3 << endl;
    return 0;
}