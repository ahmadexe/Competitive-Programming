#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{

    string s;
    cin>>s;
    string check = "";
    for (int i = 0; i < s.length(); i++){
        if (check.find(s[i]) > check.length()){
            check = check + s[i];
        }
    }    
    
    cout<<check;

return 0;
}