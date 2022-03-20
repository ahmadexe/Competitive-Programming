#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Josh(vector<int> person, int k, int index)
{
    // Base case , when only one person is left
    if (person.size() == 1) {
        cout<<"HEHE" << person[0] << endl;
        return;
    }
 
    // find the index of first person which will die
    index = ((index + k) % person.size());
    // remove the first person which is going to be killed
    person.erase(person.begin() + index);
 
    // recursive call for n-1 persons
    Josh(person, k, index);
}

int main(int argc, char const *argv[])
{

    vector<int> v = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    Josh(v,1,0);


    return 0;
}