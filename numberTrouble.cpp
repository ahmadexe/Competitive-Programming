#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<long long int> v;
        long long int x,y,n;
        cin>>x>>y>>n;
        int i = 0;
        while (i < x)
        {
            v.push_back(y);
            i++;
        }
        int j = 0;
        n = n - x;
        
        while (j < n)
        {
            long long int sum = 0;
            int z = j;
            int r = z+x;
            
            while (z < r)
            {
                sum += v[z];
                z++;
            }
            j++;
            v.push_back(sum);
            sum = 0;
        }
        cout<<v[v.size() - 1]<<endl;
        v.clear();
    }
    return 0;
}