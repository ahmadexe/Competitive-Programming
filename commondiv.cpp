#include<iostream>
using namespace std;

int common(int a, int b){
    int count = 0;
    if(a > b){
    for (int i = 1; i < a; i++){
        if (a%i == 0 && b %i == 0){
            count++;
        }
    }
    }
    else{
        for(int i = 1; i < b; i++){
            if (a%i == 0 && b %i == 0){
            count++;
        }   
        }
    }

    return count;
}

int main(int argc, char const *argv[])
{

    cout<<common(6,8);

return 0;
}