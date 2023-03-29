
#include<stdio.h>
#include<stdlib.h>

void fill_random(int arr[],int n)
{
    //time_t t;
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100;
    }
   // printf("\n-----Array is filled-----\n");
}

void swap(int *a,int *b)
{
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}

void insertionsort(int arr[],int n)
{
    int data,i,j;
    for(i=1;i<n;i++)
    {
        data=arr[i];
        for(j=i-1;j>=0 && data<arr[j];j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=data;
    }
}

void read_matrix(int mat[],int n)
{
    printf("\n-------Enter values---------\n");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&mat[i]);
    }
}

void print_matrix(int mat[],int n)
{
    int i,j;
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",mat[i]);
    }
}

void bubblesort(int a[],int n)
{
    int i,j;
for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

int main()
{
    int *arr,i,n;
    printf("\n-----Enter number of elements-----\n");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    fill_random(arr,n);
    printf("\n-----Filled array-----");
    print_matrix(arr,n);
    insertionsort(arr,n);
    printf("\n\n-----Sorted array-----");
    print_matrix(arr,n);
    return 0;
}