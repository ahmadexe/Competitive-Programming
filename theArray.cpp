#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int > v1;
        vector<long long int> v2;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin>>a;
            v1.push_back(a);
        }
        for (int i = 0; i < n-1; i++)
        {
            long long int a;
            cin>>a;
            v2.push_back(a);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        long long int X = 0;
        vector<long long int> ans;
        if (v1.size() < 3)
        {
            vector<long long int> anotherOne;
            if (v2[0] <= v1[1])
            {
                X = v2[0]-v1[0];
            }
            else{
                long long int f,bom;
                f = v2[0] - v1[0];
                bom = v2[0] - v1[1];
                anotherOne.push_back(f);
                anotherOne.push_back(bom);
                X = *(min_element(anotherOne.begin(), anotherOne.end()));
            }
        }
        else{
            if (v1.size() == 3){
                long long int alpha,beta;
                if (v2[0] - v1[0] == v2[1] - v1[1]){
                    X = v2[0] - v1[0];
                }
                else{
                    X = v2[1] - v1[1];
                }
            }
            else{
                long long int alpha,beta,charlie;
                alpha = v2[0] - v1[0];
                beta = v2[1] - v1[1];
                charlie = v2[2] - v1[2];
                ans.push_back(alpha);
                ans.push_back(beta);
                ans.push_back(charlie);
            }
            if (count(ans.begin(), ans.end(), ans[0]) >= count(ans.begin(), ans.end(), ans[1])){
                X = ans[0];
            }
            else{
                X = ans[1];
            }
        }

        cout<<X<<endl;
        ans.clear();
        v1.clear();
        v2.clear();
    }
    return 0;
}