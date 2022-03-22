#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

    int t;
    cin>>t;
    while(t--)
    {
        int sd = 0;
        int so = 0;
        int n, d;
        cin>>n>>d;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int a = 0;
        int b = n-1;
        while (a <= b)
        {
            if (v[a] <= 9 || v[a] >= 80)
            {
                sd++;
            }
            else
            {
                so++;
            }
            if (v[b] <= 9 || v[b] >= 80)
            {
                sd++;
            }
            else
            {
                so++;
            }
            a++;
            b--;
            
        }
        cout<<(sd/d + so/d)<<endl;
    }
    return 0;
}