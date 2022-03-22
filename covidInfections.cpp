#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

    int t;
    cin>>t;
    while (t--)
    {
        int sum = 1;
        vector<int> v;
        vector<int> sums;
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }


        int a = 0;
        int b = 1;
        while (b < v.size())
        {
            if (v[b] - v[a] <= 2)
            {
                sum++;
            }
            else{
                sums.push_back(sum);
                sum = 1;
            }
            b++;
            a++;
        }
        sums.push_back(sum);
        sort(sums.begin(), sums.end());
        cout<<sums[0]<<" "<<sums[sums.size() - 1]<<endl;
        v.clear();
        sums.clear();
    }
    return 0;
}