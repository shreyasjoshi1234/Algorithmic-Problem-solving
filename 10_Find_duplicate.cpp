//https://www.codingninjas.com/codestudio/problems/find-duplicate_625160?leftPanelTab=0

#include<bits/stdc++.h>

int duplicateNumber(int *arr, int size)
{
    //Write your code here
    map<int,int> maparr;

    for(int i=0;i<size;i++)
    {
        maparr[i]=0;
    }
    for(int i=0;i<size;i++)
    {
        maparr[arr[i]]++;
    }
    for(int i=0;i<size;i++)
    {
        if(maparr[i]==2)
            return i;
    }

}

