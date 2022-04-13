#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getThePump(vector<vector<int>> v)
{
    int i = 0;
    while (i < v.size())
    {
        bool foundThePump = true;
        int distance = 0;
        int j = i;
        do{
            

            
        }while (j != i);
        if (foundThePump)
        {
            return i;
        }
        i++;
    }
    return -1;
}

int main(int argc, char const *argv[])
{

    vector<vector<int>> v = {{4,6},{6,5},{7,3},{4,5}};
    cout<<getThePump(v);   
    
    


    return 0;
}