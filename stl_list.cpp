#include<iostream>
#include<list>
using namespace std;


int main(int argc, char const *argv[])
{

    list<int> l(5,100);
    for (int i : l){
        cout<<i<<" ";
    }
return 0;
}