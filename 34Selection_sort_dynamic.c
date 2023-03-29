#include<stdio.h>
#include<stdlib.h>

void fill_random(int arr[],int n)
{
    //time_t t;
    //srand(time(t));
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

void selectionsort(int arr[],int n)
{
    int i,j,si;
    for(i=0;i<n-1;i++)
    {
        si=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[si]>arr[j])
                si=j;
        }
        if(si!=i)
            swap(&arr[i],&arr[si]);
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


int main()
{
    int *arr,i,n;
    printf("\n-----Enter number of elements-----\n");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    fill_random(arr,n);
    printf("\n-----Filled array-----");
    print_matrix(arr,n);
    selectionsort(arr,n);
    printf("\n\n-----Sorted array-----");
    print_matrix(arr,n);
    return 0;
}

