#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getThePump(vector<vector<int>> v)
{
    int i = 0;
    while (i < v.size())
    {
        int distance = 0;
        int j = i;
        do{
            int nextDistance = v[j][0] - v[j][1];
            if (nextDistance >= 0)
            {
                distance += nextDistance;
            }
        }while (j != i);
    }
}

int main(int argc, char const *argv[])
{

    vector<vector<int>> v = {{4,6},{6,5},{7,3},{4,5}};
    
    
    


    return 0;
}