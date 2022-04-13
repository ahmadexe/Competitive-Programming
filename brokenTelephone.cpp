#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int checkWrongs(vector<long long int> v)
{
    long long int wrong = 0;
    long long int i = 0;
    long long int j = 1;
    set<long long int> s;
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

    int t;
    cin>>t;
    while (t--)
    {
        vector<long long int> v;
        int n = 0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int a = 0;
            cin>>a;
            v.push_back(a);
        }
        cout<<checkWrongs(v)<<endl;
        v.clear();
    }
    


    return 0;
}
