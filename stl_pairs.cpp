#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

    pair<int, int> p;
    //p = make_pair(1,2);
    p = {1,2};
    //cout<<p.first<<" "<<p.second<<endl;
    pair<int, int> px[3];
    px[0] = {1,2};
    px[1] = {3,4};
    px[2] = {5,5};
    for (int i = 0; i < 3; i++){
     //   cout<<px[i].first<<" "<<px[i].second<<endl;
    }

    pair<int, int> &p2 = p;
    
    p2.first = 6654;
    cout<<p.first<<" "<<p.second<<endl;

    

    return 0;
}