//09-02-22
#include<bits/stdc++.h>
using namespace std;

long int return_set_bits(long int n)
{
    long int c=0;
    while(n)
    {
        if(n & 1 == 1)
            c++;
        n=n>>1;

    }
    return c;
}

int main()

{
    long int n=105;
    long int f = return_set_bits(n);
    cout<<"No of set bits is "<<f; 
}