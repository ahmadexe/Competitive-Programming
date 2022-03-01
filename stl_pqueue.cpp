#include<iostream>
#include<queue>
using namespace std;


int main(int argc, char const *argv[])
{
    priority_queue<int> max;
    max.push(3);
    max.push(1);
    max.push(4);
    max.push(1);
    int m = max.size();
    for (int i = 0; i < m; i++){
        cout<<max.top()<<" ";
        max.pop();
    }
    
    priority_queue<int, vector<int>, greater<int>> min;
    min.push(9);
    min.push(10);
    min.push(10);

    min.push(1);

    int n = min.size();

    for (int i = 0; i < n; i++){
        cout<<min.top()<<" ";
        min.pop();
    }
    
return 0;
}