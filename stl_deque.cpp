#include<iostream>
#include<deque>
using namespace std;


int main(int argc, char const *argv[])
{

    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    
    for(int i : d){
        cout<<i<<" ";
    }

    cout<<"\n";
    // d.pop_back();
    
    // for(int i : d){
    //     cout<<i<<" ";
    // }
    
    // cout<<"\n";
    // d.pop_front();

    // for(int i : d){
    //     cout<<i<<" ";
    // }

    cout<<d.at(1);
    

return 0;
}