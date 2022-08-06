#include<bits/stdc++.h>
using namespace std;


int main() {
    int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {5, 6}, {6, 5}};
    unordered_map<int, int> m;
    for (int i = 0; i < 5; i++) {
        int first = arr[i][0];
        int second = arr[i][1];

        if(m.find(second)!=m.end() && m[second] == first) {
            cout << "(" << first << ", " << second << "), ";
        } else {
            m[first] = second;
        }
    }
    cout << " " << endl;
    return 0;
}