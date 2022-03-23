#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

    int num = 4;
    int x = num & 1<<2;
    if (x == 0){
        cout<<"NOT SET"<<endl;
    }
    else{
        cout<<"SET"<<endl;
    }
    
    // How to set a particular bit
    num = num | 1<<1;
    cout<<num<<endl;

    // How to unset a bit
    int val = 4;
    val = val & ~(1<<2);
    cout<<val<<endl;

    // How to toggle
    int q = 4;
    int w = q ^ 1<<2;
    cout<<w<<endl;

    return 0;
}