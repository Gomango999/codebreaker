#include <bits/stdc++.h>
using namespace std;

int main () {
    int K;
    cin >> K;
    string directions;
    cin >> s;

    // well to work out the number of moves, let's just make the robot go backwards!
    string reverse_directions;
    for (int i = 0; i < K; i++) {
        if (directions[i] == 'E') reverse_directions[i] = 'W';
        if (directions[i] == 'W') reverse_directions[i] = 'E';
        if (directions[i] == 'N') reverse_directions[i] = 'S';
        if (directions[i] == 'S') reverse_directions[i] = 'N';
    }
    reverse(reverse_directions.begin(), reverse_directions.end());

    // now we count up the number of moves
    int num_moves = 0;
    for (int i = 0; i < reverse_directions.size(); i++) {
        num_moves += 1;
    }

    printf("%d\n", num_moves);
}