#include<iostream>
using namespace std;

//prototypes of functions to be used    

void quickSort(int arr[], int size);
void swap(int *a, int *b);
void print(int arr[], int size);

int main()
{
    int arr[] = {2,3,1,5,4}; int n = 5;
    cout<<endl<<"your original array is - "; print(arr, n);
    quickSort(arr, n);
    cout<<endl<<"sorted array is - "; print(arr, n);
    
    return 0;
}

//functions used

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int arr[], int size)
{
    
}

void print(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

}