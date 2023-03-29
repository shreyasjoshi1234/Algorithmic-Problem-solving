//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/adjacent-sum-greater-than-k-f41e3ec4/


#include<bits/stdc++.h>
using namespace std;
int main() {
	int t=0,n=0,k=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		if(k>n+1)
			cout<<"-1"<<endl;
		else
		{
			int a[n],cnt=0,v[n];
			memset(v, 0, sizeof(v));
			a[0]=1;
			if(k-1>a[0])
				a[1]=k-1;
			else
				a[1]=2;
			v[0]=1;
			v[1]=1;
			for(int i=3;i<n;i=i+2)
			{
				if(a[i-3]+1==a[i-2]||a[i-3]+2==a[i-2])
					break;
				a[i-1]=a[i-3]+1;
				a[i]=a[i-2]-1;
				v[i-1]=1;
				v[i]=1;
				cnt+=2;
			}
			if(cnt<=n-3)
			{
				if(a[cnt+1]-a[cnt]==2)
				{
				
					a[cnt+2]=a[cnt+1]-1;
					v[cnt+2]=1;
				}
				else
				{

					a[cnt+2]=a[1]+1;
					v[cnt+2]=1;
				}

				if(a[1]>a[cnt+2])
					a[cnt+3]=a[1]+1;
				else
					a[cnt+3]=a[cnt+2]+1;
				v[cnt+3]=1;
				for(int i=cnt+4;i<n;i++)
				{
					if(v[i]==0)
						a[i]=a[i-1]+1;
				}
			}
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
}