// Find all symmetric pairs in an array of pairs.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int first, second;
    int arr[5][2] = {{1, 2}, {2, 1}, {5, 4}, {4, 5}, {3, 6}};
    map<int, int> m;
    
    for(int i = 0; i < 5; i++) {
        first = arr[i][0];
        second = arr[i][1];
        if (m.find(second) != m.end() && m[second] == first)
            cout << "(" << first << ", " << second << ")";
        else
            m[first] = second;
    }

    cout << endl;
    return 0;
}
