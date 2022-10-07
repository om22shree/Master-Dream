#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {20, 30, 15, 10, 60};
    // Makes a max-heap
    make_heap(v.begin(), v.end());
    cout << "Maximum element: " << v.front() << endl;
    v.push_back(100);
    // rearrange the vector after adding the new element
    push_heap(v.begin(), v.end());
    cout << "New maximum element: " << v.front() << endl;
    // Remove the maximum element and print the new maximum
    pop_heap(v.begin(), v.end());
    v.pop_back();
    cout << "New maximum element: " << v.front() << endl;
    // Sort the heap
    sort_heap(v.begin(), v.end());
    cout << "Sorted heap elements are: " << endl;
    for(auto it : v)
        cout << it << " ";
    cout << endl;
    return 0;
}