// Return the majority elements in the array.
/*
Majority element = if(frequency(arr[i]) > arr.size()/3) arr[i];
Logic :-
    Array can't have more than 2 majorityElements in this case
    because that would mean more than "n" elements in the array.

    Maintain 2 pointers that keep track of both the majority elements.
    check if (frequency(n1) > arr.size()/3) ans.push_back(n1);
    check if (frequency(n1) > arr.size()/3) ans.push_back(n1);
    return ans;
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& a) {
    int n1(-1), n2(-1), c1(0), c2(0);
    for (const auto & it: a) {
		if (it == n1) c1++;
	  else if (it == n2) c2++;
		else if (! c1) n1 = it, c1 = 1;
	  else if (! c2) n2 = it, c2 = 1;
	  else c1--, c2--;
    }
      
    c1 = c2 = 0;
    for (const auto & it: a)
		if (it == n1) c1++;
		else if (it == n2) c2++;
	vector<int> r;
    if (c1 > a.size()/3) r.push_back(n1);
	if (c2 > a.size()/3) r.push_back(n2);
	return r;
}