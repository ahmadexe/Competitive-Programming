#include<iostream>
#include<map>
using namespace std;


int main(int argc, char const *argv[])
{
    map<int, string> m;
    m[1] = "Ahmad";
    m[10] = "ABC";
    m[2] = "Haider";
    
    for (std::pair<const int, std::__cxx11::string> i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }


return 0;
}