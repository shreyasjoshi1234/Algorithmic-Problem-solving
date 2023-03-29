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
    bubblesort(arr,n);
    printf("\n\n-----Sorted array-----");
    print_matrix(arr,n);
    return 0;
}
