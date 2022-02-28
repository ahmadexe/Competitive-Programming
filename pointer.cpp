#include<iostream>
using namespace std;   

void change(int* x){
    *x = 7;
}

int main()
{

    // int a = 5;
    // int* b = &a;
    // cout<<b<<endl;
    // cout<<&b<<endl;
    // cout<<*b<<endl;
    // // //cout<<*b<<endl;
    // // change(&a);
    // // cout<<a<<endl;
    // // int a[4];
    
    // int* ptr = (int*)malloc(sizeof(int) * 4);
    // cout<<&ptr[0]<<endl;
    // cout<<&ptr[1]<<endl; 
    // cout<<&ptr[2]<<endl;
    // cout<<&ptr[3]<<endl;

    // for (int i = 0; i < 4; i++){
    //     ptr[i] = i;
    // }
    // cout<<ptr[0]<<endl;
    // cout<<ptr[1]<<endl;
    // cout<<ptr[2]<<endl;
    // cout<<ptr[3]<<endl;
   
    int* arr = (int*)malloc(12);
    cout<<"--------"<<endl;
    //int arr[] = {1,2,3};
    free(arr);
    
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    
    int* p = arr;
    //free(p);
    // cout<<*(arr+1);
    cout<<*(p+1);

    return 0;
}