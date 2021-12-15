// So if I treat each cell as a node and have edges that connect each cell to each other cell, this forms a graph!
// Since the edges are unweighted, I will use a BFS to calculate the optimal path home
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
#define x first
#define y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

struct Node {
    pii pos;
    int dist;
};

// used to calculate the shortest possible distance from a point back to the robots final position.
// this is used to make sure we don't revisit a seen node in our BFS
int manhattan_distance(pii a, pii b) {
    return abs(a.y - b.y) + abs(a.x - b.x);
}

int main () {
    int K;
    cin >> K;
    string s;
    cin >> s;

    // calculate the robots finishing position
    pii endpoint;
    for (int i = 0; i < K; i++) {
        if (s[i] == 'N') endpoint.y++;
        else if (s[i] == 'S') endpoint.y--;
        else if (s[i] == 'W') endpoint.x--;
        else if (s[i] == 'E') endpoint.x++;
    }

    // printf("%d\n", manhattan_distance({x, y}, {0, 0}));
    // test code to check that manhattan distance is working correctly

    int t = 0;
    queue<Node> q;
    q.push((Node){endpoint, 0}); // start search at the robots end point
    while (!q.empty()) {
        Node curr = q.front();
        q.pop();
        if (curr.pos.x == 0 && curr.pos.y == 0) {
            // we've found the origin again!
            printf("%d\n", curr.dist);
            return 0;
        }
        // otherwise, loop through all neighbours.
        // make sure we only go to nodes that are further away from the robots starting point,
        // to ensure that we don't go backwards in our BFS.
        for (int i = 0; i < 4; i++) {
            pii next;
            next.x = curr.pos.x + dx[i];
            next.y = curr.pos.y + dy[i];
            if (manhattan_distance(next, endpoint) > manhattan_distance(curr.pos, endpoint)) {
                q.push((Node){next, curr.dist+1});
            }
        }

        t++;
        if (t >= 500000) {
            // fail safe, in case we take too long to find the end
            // should never hit this, since we're always within 100,000 from the start
            printf("we failed!\n");
            return 0;
        }
    }
}