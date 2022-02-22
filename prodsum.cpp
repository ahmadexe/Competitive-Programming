#include<iostream>
using namespace std;

int sum(int a){
    int sum = 0;
    while (a != 0){
        int element = a % 10;
        a = a/10;
        sum += element;
    }
    return sum;
}

int produnt(int a){
    int sum = 1;
    while (a != 0){
        int element = a % 10;
        a = a/10;
        sum *= element;
    }
    return sum;
}

int main(int argc, char const *argv[])
{

    int sumx = sum(123);
    int pr = produnt(123);
    if (pr % sumx == 0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
return 0;
}