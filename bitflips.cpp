#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void flip(string s)
{
    int ones = count(s.begin(),s.end(),'1');
    int zeros = count(s.begin(),s.end(),'0');
    if (ones == 1 || zeros == 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main(int argc, char const *argv[])
{

    flip("11");


    return 0;
}