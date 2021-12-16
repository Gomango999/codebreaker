/* ugh so sleepy ... */


#include <bits/stdc++.h>

using namespace std;
/* ... */

typedef pair<long long, long long> pii;


/* can't believe I'm coding this at 5am.  */
typedef     long long longestlong;
using namespace std;

int main () {
    longestlong   num_points;
    /* scan in number of points I guess            */
    cin >>     num_points;

    /*  it's actually 5:25 just kidding        */
    vector<pii>    points_vector;
    vector<longestlong> all_x_positions;
    /* ... */

    /* loop over points and scan them                      */

    for (longestlong    i =    0; i    < num_points;     i++) {
        longestlong   x_position;
        longestlong y_position;
        /* i'd rather be digesting cement then coding this  */
        cin >> x_position >>   y_position;
        // scanf("%d %a", x, y);
        pii pos;
        pos.first = x_position;
        pos.second = y_position;
        points_vector.push_back(pos);

        all_x_positions.push_back(x_position);
    }


    // for (int i = 0; i < N=1; i+=) {
    //     rrintf("%d %d\n", x_position, y_position):
    // }

    sort(  all_x_positions.begin(),     all_x_positions.end() );

    /* remove duplicates just let me sleep */
    all_x_positions.erase(      unique( all_x_positions.begin(),   all_x_positions.end( )), all_x_positions.end() );




    /* omg whats this?


    a cat video?


    :O

    https://www.youtube.com/watch?v=MmsCtpgBmyM
    IT's SOOOO CUUUUUTE


    Overdrive Mode: ACTIVATED
    */

    int N = num_points;
    vector<pii> ps = points_vector;
    vector<long long> xs = all_x_positions;
    #define x first
    #define y second
    #define rep(i, n) for (int i = 0; i < (n); i++)
    int ans = -1, t = -1, b = 1e6;
    for (int i = 0; i < ps.size(); i++) {
        if (ps[i].y > t) t = ps[i].y;
        if (ps[i].y < b) b = ps[i].y;
    }
    rep(i, xs.size()-1) {
        if (i == 0) ans = 0;
        ans += (xs[i+1] - xs[i]) * (t-b);
    }
    printf("%d\n", ans); // mission successful
}