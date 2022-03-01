#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(2);
    v.push_back(56);
    v.push_back(1);
    v.push_back(7); 
    sort(v.begin(), v.end());
    for (int i : v){
        cout<<i<<" "<<endl;
    }   
    cout<<"========="<<endl;
    cout<<*(upper_bound(v.begin(), v.end(), 7))<<endl;
    cout<<binary_search(v.begin(), v.end(), 56)<<endl;
    auto x = find(v.begin(), v.end(), 7);
    cout<<*x<<endl;
    return 0;
}