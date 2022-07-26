#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;
    else
        return 1 + countSetBits(n & (n - 1));
}

int solve(int a, int b) 
{   
    int set = countSetBits(b);
    int limit = pow(2, set + 1);
    int min = INT_MAX;
    for (int i = 0; i < limit; i++)
    {
        if (countSetBits(i) == set && i < b)
        {
            if (a ^ i < min)
                min = i;
        }
    }
    return min;
}

int main(int argc, char const *argv[])
{
    cout << solve(7,12);
    return 0;
}