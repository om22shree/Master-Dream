int allIndexes(int arr[], int n, int x, int out[]) {
   	//Base step
    if(n == 0)
        return 0;
    
    //Assumption step
    int small = allIndexes(arr, n-1, x, out);
    
    //Function step
    if(arr[n-1] == x)
        out[small++] = n - 1;
    return small;
}

