#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<string> q;
    q.push("Ahmad");
    q.push("Haider");
    q.push("XYZ");
    q.push("ABC");
    cout << "Size before pop " << q.size() << endl;
    cout << q.front();
    q.pop();
    cout << "Size After pop " << q.size() << endl;
    cout << q.front();
    return 0;
}