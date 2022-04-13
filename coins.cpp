#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,ones,twos;
        cin>>n>>ones>>twos;
        twos = twos * 2;
        long long int sum = ones + twos;
        vector<long long int> v(n);
        for (int i = 0; i < n ;i++)
        {   
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long int ans = 0;
        int i = 0;
        while (1){
            if (v[i] % 2 == 0 && v[i] <= twos && v[i] > 1){
                twos = twos - v[i];
                sum = ones + twos;
                ans++;
            }
            else if (v[i] % 2 == 1 && v[i] <= ones)
            {
                ones = ones - v[i];
                sum = ones + twos;
                ans++;
            }
            else if (v[i] % 2 == 0 && v[i] <= ones)
            {
                ones = ones - v[i];
                sum = ones + twos;
                ans++;
            }
            else if (v[i] <= sum)
            {   if (v[i] != 1){
                sum = sum - v[i];
                ans++;
                }
            }
            else{
                break;
            }
            i++;
        }
        cout<<ans<<endl;
        v.clear();
        n = 0;
        ones = 0;
        twos = 0;
        sum = 0;
    }   

    return 0;
}