#include<iostream>
#include<list>
using namespace std;


int main(int argc, char const *argv[])
{

    list<int> l(5,100);
    
    // for (int i : l){
    //     cout<<i<<" ";
    // }

    l.push_back(90);
    l.push_front(10);
    for (int i : l){
        cout<<i<<" ";
    }

    cout<<endl;

    // Can't randomly access members



return 0;
}