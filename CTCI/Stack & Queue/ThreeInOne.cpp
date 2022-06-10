#include<bits/stdc++.h>
using namespace std;

class FixedStack{
public:
    int noOfStacks;
    int stackCapacity;
    int *sizes;
    int *values;

    FixedStack(int stackSize) {
        stackCapacity = stackSize;
        values = new int[stackSize * noOfStacks];
        sizes = new int[noOfStacks];
    }

    void push(int stackNum, int value) {
        if(isFull(stackNum))
            return;

        sizes[stackNum]++;
        values[indexOfTop(stackNum)] = value;
    }

    int pop(int stackNum) {
        if(isEmpty(stackNum))
            return -1;

        int topIndex = indexOfTop(stackNum);
        int value = values[topIndex];
        values[topIndex] = 0;
        sizes[stackNum]--;
        return value;
    }

    int peek(int stackNum) {
        if(isEmpty(stackNum))   
            return -1;

        return values[indexOfTop(stackNum)];
    }

    bool isEmpty(int stackNum) {
        return sizes[stackNum] == 0;
    }

    bool isFull(int stackNum) {
        return sizes[stackNum] == stackCapacity;
    }

    int indexOfTop(int stackNum) {
        int offset = stackNum * stackCapacity;
        int size = sizes[stackNum];
        return offset + size - 1;
    }
};