#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;


int main(int argc, char const *argv[])
{

    
    vector<int> globalAns;
    int t;
    cin>>t;
    while (t--)
    {
        int n, u, d;
        cin>>n>>u>>d;
        vector<int> mainVec;
        for (int i = 0; i < n; i++)
        {
            int value;
            cin>>value;
            mainVec.push_back(value);
        }

        int a = 0;
        int b = 1;
        int index = 0;
        int parachute = 1;
        // for (int f : mainVec)
        // {
        //     cout<<f<<" ";
        // }
        while(b < mainVec.size())
        {
            if (mainVec[b] >= mainVec[a])
            {
                if (mainVec[b] - mainVec[a] <= u)
                {
                    index++;
                }
                else{
                    break;
                }
            }
            else{
                if (mainVec[a] - mainVec[b] <= d)
                {
                    index++;
                }
                else{
                    if (parachute)
                    {
                        index++;
                        parachute--;
                    }
                    else{
                        break;
                    }
                }
            }
            b++;
            a++;
        }
        index += 1;
        globalAns.push_back(index);
        mainVec.clear();
    }

    for (int val : globalAns)
    {
        cout<<val<<endl;
    }
    
    return 0;
}