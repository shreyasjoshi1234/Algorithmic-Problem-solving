#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
 
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int value = arr[i];
        int j = i;
 
   
        while (j > 0 && arr[j - 1] > value)
        {
            arr[j] = arr[j - 1];
            j--;
        }
 
        
 
        arr[j] = value;
    }
}
 
// Function to print `n` elements of array `arr`
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
 
int main(void)
{
    int arr[10]; 
    int n = 10;
    cout<<"Enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr, n);
 
    // print the sorted array
    printArray(arr, n);
 
    return 0;
}