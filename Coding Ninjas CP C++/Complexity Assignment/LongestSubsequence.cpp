#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    unordered_map<int,int> countMap;
    vector<int> results;

    for(int i=0;i<n;i++)
        countMap[arr[i]]++;

    int start_element=0, n_elements=0;

    for(int i=0; i<n; i++) {
        if(countMap.find(arr[i]-1) == countMap.end()) {
            int next_consecutive_element = arr[i];
            while(countMap.find(next_consecutive_element) != countMap.end())
                next_consecutive_element++ ;

            if(n_elements < next_consecutive_element-arr[i]) {
                n_elements = next_consecutive_element-arr[i];
                start_element = arr[i];
            }

        }
    }

    results.push_back(start_element);
	results.push_back(start_element + n_elements - 1);
    
    return results;
}