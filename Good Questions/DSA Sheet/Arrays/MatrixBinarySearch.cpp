// Apply binary search on a sorted 2-D matrix.
/*
Logic :-
treat sorted matrix[m, n] as a sorted array[m*n].
row[i] = index(i) / m;
col[i] = index(i) % m;
*/
#include<bits/stdc++.h>
using namespace std;

bool matrixBinarySearch(const vector<vector<int>> input, int target) {
	int row = input.size();
	int col = input[0].size();
	int size = row * col;
	int low = 0, high = size - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		int numberAtMid = input[mid / col][mid % col];
		if (numberAtMid == target)
			return true;
		else if (numberAtMid < target)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return false;
}