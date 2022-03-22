#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int checkWrongs(vector<int> v)
{
    int wrong = 0;
    int i = 0;
    int j = 1;
    set<int> s;
    if (v.size() == 0)
    {
        return -1;
    }
    else if (v.size() == 1)
    {
        return 0;
    }
    else
    {
        while (j < v.size())
        {
            if (v[i] != v[j])
            {
                s.insert(i);
                s.insert(j);
                //wrong += 2;
            }
            j++;
            i++;
        }
        return s.size();
    }
}

int main(int argc, char const *argv[])
{

    vector<int> v = {1, 1, 1, 3, 3, 3, 2};
    cout<<checkWrongs(v);   


    return 0;
}