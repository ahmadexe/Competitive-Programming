#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sherlock(vector<int> v)
{
    sort(v.begin(),v.end());
    int i = 0;
    int j = 1;
    int flag = 1;
    while (j < v.size())
    {
        if (v[j] - v[i] > 1)
        {
            flag = 0;
            break;
        }
        j++;
        i++;
    }
    if (flag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}

int main(int argc, char const *argv[])
{

    vector<int> v = {1,5};
    sherlock(v);


    return 0;
}