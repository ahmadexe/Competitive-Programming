#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int money(vector<int> v)
{
    sort(v.begin(), v.end());
    set<int> s(v.begin(), v.end());
    if (s.size() == v.size())
    {
        if (v.size() == 0)
        {
            return 0;
        }
        else if (v.size() == 1)
        {
            return 1;
        }
        else
        {
            int minimumMoney = INT_MAX;
            int currentMin = 1;
            int i = -1;
            int j = 0;
            while (j < v.size())
            {
                j++;
                i++;
                if (v[j] - v[i] != 1 || j == v.size())
                {
                    if (currentMin < minimumMoney)
                    {
                        minimumMoney = currentMin;
                        currentMin = 1;
                    }
                }
                else
                {
                    currentMin++;
                }
            }
            return minimumMoney;
        }
    }
    else
    {
        return -1;      
        // Unsolved. 
    }
}

int main(int argc, char const *argv[])
{

    vector<int> v = {};
    cout << money(v);

    return 0;
}