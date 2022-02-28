#include<iostream>
#include<array>
using namespace std;


int main(int argc, char const *argv[])
{

    array<int,3> a = {1,2,3};
    cout<<a.size()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;
    

return 0;
}