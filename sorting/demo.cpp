#include<iostream>
using namespace std;

void print(int *arr)
{
    int a = sizeof(arr)/sizeof(arr[0]);
    cout<<a;
}

int main()
{

    int arr[] = {1,2,3,4};
    print(arr);
    
    
    return 0;
}