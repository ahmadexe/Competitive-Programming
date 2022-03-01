#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

    // vector<int> v;
    // v = {12,3,4,5};
    // v.push_back(7);
    // cout<<v.size()<<" "<<v.capacity()<<endl;

    // vector<vector<int>> v;
    // v = {{1,2,3},{3,4,6},{4,5}};

    // for (vector<int> x : v){
    //     for (int i : x){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<"------";

    vector<vector<int>> a;
    int i,j;
    cout<<"Number of rows ";
    cin>>i;
    cout<<endl; 
    cout<<"Number of columns ";
    cin>>j;
    cout<<endl; 

    //cout<<"Enter numbers: "<<endl;
    for (int q = 0; q < i; q++){
        cout<<"Enter numbers: "<<endl;
        vector<int> temp;
        for (int w = 0; w < j; w++){
            int r;
            cin>>r;
            temp.push_back(r);
            //cout<<"ok"<<endl;
        }
        a.push_back(temp);
    }

    for (vector<int> x : a){
        for (int i : x){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}