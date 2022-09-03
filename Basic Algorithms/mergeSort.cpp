#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int l, int m, int r) {
    int l1, l2;
    l1 = m - l + 1;
    l2 = r - m;
    int *larr = new int[l1];
    int *rarr = new int[l2];

    for (int i = 0; i < l1; i++) {
        larr[i] = arr[l+i];
    }
    for (int i = 0; i, l2; i++) {
        rarr[i] = arr[m + i + 1];
    }

    int il, ir, im = l;
    while(il < l1 && ir < l2) {
        if(larr[il] < rarr[ir]) {
            arr[im] = larr[il];
            il++;
        } else {
            arr[im] = rarr[ir];
            ir++;
        }
        im++;
    }

    while(il < l1) {
        arr[im] = larr[il];
        il++;
        im++;
    }
    while(ir < l2) {
        arr[im] = rarr[ir];
        ir++;
        im++;
    }

    delete[] larr;
    delete[] rarr;
}

void mergeSort(int *arr, int l, int r) {
    if(r < l) {
        return;
    } else {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}