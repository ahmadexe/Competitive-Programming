#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int check(vector<int> v)
{
    if (v[0] == 1 && v[v.size() - 1] == 2)
    {
        if (v[1] == 5 && v[v.size() - 2] == 6)
        {
            if (find(v.begin(), v.end(), 4) == v.end() && find(v.begin(), v.end(), 3) == v.end())
            {
                return 1;
            }
            return 0;
        }
        else if (v[1] == 4 && v[v.size() - 2 == 4])
        {
            if (find(v.begin(), v.end(), 5) == v.end() && find(v.begin(), v.end(), 6) == v.end() && find(v.begin(), v.end(), 7) == v.end() && find(v.begin(), v.end(), 8) == v.end())
            {
                return 1;
            }
            return 0;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{

    string num;
    cin >> num;
    vector<int> v;
    for (char ch : num)
    {
        int val = (int)ch - '0';
        v.push_back(val);
    }

    int x = check(v);
    if (x == 1)
    {
        cout<<"VALID"<<endl;
    }
    else
    {
        cout<<"NOT"<<endl;
    }
    return 0;
}