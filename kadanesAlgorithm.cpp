#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSumVal(int a[], int size)
{

    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0; i < size; i++)
    {
        currentSum += a[i];
        if (maxSum < currentSum)
        {
            maxSum = currentSum;
        }
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main(int argc, char const *argv[])
{

    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr)/sizeof(int);
    cout<<maxSumVal(arr,size);



    return 0;
}