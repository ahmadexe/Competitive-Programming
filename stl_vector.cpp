#include<iostream>
#include<vector>
using namespace std;

void change(vector<int> a){
    a[0] = 6;
}

int main(int argc, char const *argv[])
{
    vector<int> v;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(100);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(200);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(300);
    cout<<"Capacity: "<<v.capacity()<<endl; // Capacity doubles.

    // Uninitialized terms in an int vector are 0
    // Null for string vector
    vector<string> sv;
    sv.push_back("A");
    sv.push_back("B");
    sv.push_back("C");

    cout<<"String vector capacity "<<sv.capacity()<<endl; 
    cout<<"Size "<<sv.size()<<endl; 

    cout<<"Before Pop"<<endl;
    cout<<"Size: "<<sv.size()<<endl;
    for (string i : sv){
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<"After Pop"<<endl;
    sv.pop_back();
    cout<<"Now cap: "<<sv.capacity()<<endl;
    for (string x : sv){
        cout<<x<<" ";
    }    
    cout<<"\n";

    cout<<"Size: "<<sv.size()<<endl;

    // Intializing with choiced size and default value

    vector<int> myvec(5,9); // Size 5 intialized with 9 as default values.
    for (int i : myvec){
        cout<<i<<" ";
    }
    cout<<"\n";

    vector<int> last;
    last = myvec;
    cout<<last.size()<<endl;
    cout<<last[0]<<endl;
    last[0] = 10;
    cout<<myvec[0]<<endl;
    cout<<last[0]<<endl;
    vector<int> xl(myvec);
    xl[0] = 100;
    cout<<myvec[0];
    cout<<"\n";
    change(v);
    //v[0] = 9;
    for(int j : v){
        cout<<j<<" ";
    }


return 0;
}