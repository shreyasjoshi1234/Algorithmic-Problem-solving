#include<bits/stdc++.h>

using namespace std;

int countc=0;
void count_distinct_combinations(int arr[],int sum,int n)
{
    if(n<=0)
    {
        return;
    }
    if(sum<0)
    {
        countc++;
        return;
    }
    count_distinct_combinations(arr,sum,n-1);
    count_distinct_combinations(arr,sum-arr[n-  1],n);


}

int main()
{
    int arr[]={2,3,5};
    int n=sizeof(arr)/sizeof(int);
    int sum=5;
    count_distinct_combinations(arr,sum,3);
    cout<<"Distinct combinations are "<<countc;
}