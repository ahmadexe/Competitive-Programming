#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int facs(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n*(facs(n-1)));
    }
}

int main(int argc, char const *argv[])
{

    int i = 0;
    cin>>i;
    while(i--)
    {
        vector<string> v;
        vector<int> counter(6);
        vector<int> ours = {2,1,1,2,1,1};
        int totalWords;
        cin>>totalWords;
        while (totalWords--)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        string control = "";
        for (int a = 0; a < v.size(); a++)
        {
            control += v[a];
        }
        for (int b = 0; b < control.size(); b++)
        {
            if (control[b] == 'c')
            {
                counter[0]++;               
            }
            else if (control[b] == 'o'){
                counter[1]++;
            }
            else if (control[b] == 'd')
            {
                counter[2]++;
            }
            else if (control[b] == 'e'){
                counter[3]++;
            }
            else if (control[b] == 'h')
            {
                counter[4]++;
            }
            else if (control[b] == 'f')
            {
                counter[5]++;
            }
        }
        
        vector<int> f(6);

        for (int c = 0; c < ours.size(); c++)
        {
            int numb = counter[c]/ours[c];
            f[c] = numb;
        } 
        sort(f.begin(), f.end());
        cout<<f[0]<<endl;
    }
    return 0;
}