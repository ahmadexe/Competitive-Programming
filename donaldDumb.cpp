#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// && (find(s.begin(), s.end(), v[i]) != s.end())
int studentBody(vector<int> v, int k)
{
    set<int> s;
    set<int> selected;
    int counter = 0;
    for (int i = 0; i < v.size(); i++)
    {   

        if ((i+1 != v[i]))
        {
            int totalVotes = count(v.begin(), v.end(), v[i]);
            if (totalVotes >= k)
            {
                selected.insert(v[i]);
            }
            s.insert(v[i]);
        }
    }
    return selected.size();
}

int main(int argc, char const *argv[])
{

    vector<int> v;
    int tests;
    cin>>tests;
    int i = 0;
    while (i < tests)
    {
        int n,k;
        cin>>n;
        cin>>k;
        int vals;
        for (int j = 0; j < n ; j++)
        {
            cin>>vals;
            v.push_back(vals);
        }
        cout<<studentBody(v,k)<<endl;
        i++;
        v.clear();
    }
    


    return 0;
}