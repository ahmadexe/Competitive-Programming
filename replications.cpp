#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

    int t;
    cin>>t;
    while (t--)
    {
        set<int> s;
        vector<int> v;
        int n,k;
        cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            v.push_back(val);
        }


        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout<<v[i];
        // }

        int sum = 0;
        for (int item : v)
        {
            if (count(v.begin(), v.end(), item) == k)
            {
                s.insert(item);
            }
        }

        for (int item : s)
        {
            sum += item;
        }
        cout<<sum<<endl;
    }
    return 0;
}