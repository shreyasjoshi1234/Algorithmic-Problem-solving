// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include<bits/stdc++.h>
using namespace std;

struct pair1 
{
    int min;
    int max;
};

struct pair1 find_minmax(vector<int> v,int l,int r)
{
    int mid;
    struct pair1 minmax,mml,mmr;

// 1)If array has only one elements
    if(l==r)
    {
        minmax.min=v[l];
        minmax.max=v[r];
        return minmax;
    }

// 2)If array two elements
    if(l+1==r)
    {
        if(v[l]<v[r])
        {
            minmax.min=v[l];
            minmax.max=v[r];
        }
        else
        {
            minmax.min=v[r];
            minmax.max=v[l];
        }
        return minmax;
    }

// 3)Array has more than 2 elements
    mid=(l+r)/2;
    mml=find_minmax(v,l,mid);
    mmr=find_minmax(v,mid+1,r);

    //After returning
    if(mml.min<mmr.min)
    {
        minmax.min=mml.min;
    }
    else
    {
        minmax.min=mmr.min;
    }

    if(mml.max>mmr.max)
    {
        minmax.max=mml.max;
    }
    else
    {
        minmax.max=mmr.max;
    }
    return minmax;

}


int main()
{
    int n,t;

    cout<<"Enter n"<<endl;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter "<<n<<" elements"<<endl;
    while(n--)
    {
        cin>>t;
        v.push_back(t);
    }

    struct pair1 minmax=find_minmax(v,0,v.size()-1);
    {
        cout<<"Minimum "<<minmax.min<<endl;
        cout<<"Minimum "<<minmax.max<<endl;
    }
}