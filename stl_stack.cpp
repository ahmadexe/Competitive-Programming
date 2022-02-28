#include<iostream>
#include<stack>
using namespace std;


int main(int argc, char const *argv[])
{
    stack<string> s;
    s.push("Ahmad");
    s.push("Haider");
    s.push("XYZ");
    string j =  s.top();
    s.pop();
    cout<<j<<endl;
    cout<<s.top();
    // random access not allowed
return 0;
}