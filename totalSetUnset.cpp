#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int cts = 0;
        int ctu = 0;
        for (int i = 0; i < 32; i++)
        {
            int check = n & (1<<i);
            if (check != 0)
            {
                cts++;
            }
            else{
                ctu++;
            }
        }
        cout<<"Set bits: "<<cts<<endl;
        cout<<"SET BITS: "<<__builtin_popcountll(n)<<endl;
    }
    return 0;
}