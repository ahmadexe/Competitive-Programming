#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int main(int argc, char const *argv[])
{

    vector<int> v;
    int test;
    cin>>test;
    int i = 0;
    while (i < test)
    {
        int vals;
        cin>>vals;
        int x;
        for (int j = 0; j < vals; j++)
        {
            cin>>x;
            v.push_back(x);
        }
        int q = i+1;
        int groups = v.size() / 2;
        cout<<"Total groups: "<<groups<<endl;
        int total_attempts = pow(2, groups);
        cout<<"Case #"<<q<<": "<<total_attempts<<endl;
        groups = 0;
        total_attempts = 0;
        i++;
        v.clear();
    }
   
    return 0;
}