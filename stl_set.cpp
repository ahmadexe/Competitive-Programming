#include<iostream>
#include<set>
using namespace std;

auto sum(int x, int y){
    auto c = x + y;
    return c;
}

int main(int argc, char const *argv[])
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.insert(3);

    // for (int i : s){
    //     cout<< i <<" ";
    // }

    // set<int, greater<int>> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(5);
    // s.insert(3);
    // s.insert(3);

    // for (int i : s){
    //     cout<< i <<" ";
    // }
    
    // set<int>::iterator it = s.begin();

    // while (*it != 3){
    //     it++;
    // }

    // cout<<endl;

    // while (it != s.end()){
    //     cout<<*it;
    //     it++;
    // }

    auto pos = s.find(9); 
    for (auto it = pos; it != s.end();it++){
        cout<<*it<<" ";
    }
    
    auto l = sum(9,1);
    cout<<l;
    
return 0;
}