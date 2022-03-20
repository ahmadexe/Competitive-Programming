#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int stamps(string s)
{
    vector<char> v;
    int steps = 0;
    for (char ch : s)
    {
        if (v.empty())
        {
            v.push_back(ch);
            steps++;
            cout<<v[v.size() - 1];
            steps++;
        }
        else if (v[v.size() - 1] == ch)
        {
            cout<<v[v.size() - 1];
            steps++;
        }
        else if (find(v.begin(), v.end(), ch) == v.end())
        {
            v.push_back(ch);
            steps++;
            cout<<v[v.size() - 1];
            steps++;
        }
        else if (find(v.begin(), v.end(), ch) != v.end())
        {
            while (v[v.size() - 1] != ch)
            {
                v.pop_back();
                steps++;
            }
            cout<<v[v.size() - 1];
            steps++;
        }
    }
    while (!v.empty())
    {
        v.pop_back();
        steps++;
    }

    return steps;
}

int main(int argc, char const *argv[])
{
    cout << stamps("AAABAAB");
    return 0;
}