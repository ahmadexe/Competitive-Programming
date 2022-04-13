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
            distance += v[j][0] - v[j][1];
            if (distance < 0)
            {
                break;
            }
            j = ((j+1) % (v.size()-1));
        }while (j != i);
        if (distance >= 0)
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