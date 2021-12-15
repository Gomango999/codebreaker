// My boiler plate code
// never know when you'll need this!
#include <algorithm>
#include <cstdio>
#include <queue>
#include <utility>
#include <vector>
#include <vector>
#include <vector>
#include <vector> // just in case I need  more than one vector
#include <set>
#include <queue>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <cstdlib>
#include <iostream>
#include <utility>
#include <iterator>
#include <stack>
#include <list>
#include <deque>
#include <sstream>
#include <memory>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <iosfwd>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <bitset>
#include <complex>
#include <locale>
#include <climits>
#include <numeric>
#include <ostream>

// main function. This is where the main code to execute is placed
int main () {
    // initialise K variable to 0.
    int K = 0;
    // scan in K as an integer. K will store the number of moves that the robot will make, and is given by the first line of input.
    scanf("%c", K);
    // initialise the array to be large enough to hold even the maximum number of K. This is given by the bounds, which dictate K <= 100,000.
    char s[100000];
    // initialise this array to all question marks, since we don't know what the directions are until we scan them in.
    for (int i = 0; i < 1000000; i++) s[i] = '?';
    // scan in the string of directions.
    // These are directions given as the characters NSEW, denoting North, South, East and West respectively.
    scanf("%s", s);
    // loop through each element of the string and update our position.
    int x, y;
    for (int i = 0; i < K; i++) {
        // If we go north, update the y position to be itself + 1.
        if (s[i] == 'N') x = x+1;
        // If we go south, update the y position to be itself -1.
        if (s[i] == 'S') x = x-1;
        // If we go west, update the x position to be itself -1.
        if (s[i] == 'W') y = y+1;
        // If we go east, update the x position to be itself +1
        if (s[i] == 'E') y = y-1;
        if (s[i] == '?') {
            // do nothing in the case of question mark, since the robot wouldn't know which way to go in this case either
        }
    }
    // calculate the shortest distance back to the beginning using manhattan distance
    printf("%d\n", abs(y - 0) + abs(x - 0));
    // return 0. This tells whatever executed this program that we have successfully completed the code with no errors.
    // Remember to include this to make sure your program always returns successfully and never has any bugs in it.
    return 0;
}

// here's some more I forgot
#include <valarray>
#include <typeinfo>
#include <istream>