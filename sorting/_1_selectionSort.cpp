#include<iostream>
using namespace std;

//prototypes of functions to be used    

void selectionSort(int arr[], int size);
void swap(int *a, int *b);
void print(int arr[], int size);

int main()
{
    cout<<"enter the number of elements in your array - ";
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"your original array is - "; print(arr, n);
    selectionSort(arr, n);
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

void selectionSort(int arr[], int size)
{
    for(int i = 0; i<size-1; i++)
    {
        int min = i;
        for(int j = i+1; j<size; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
    }
}

void print(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

}