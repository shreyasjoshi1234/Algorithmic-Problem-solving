//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/special-subarray-3-4de176ca/



    #include <bits/stdc++.h>
    using namespace std;
     
    long long int count_subarray(int v[], int N);
     
     
     
    int main()
    {
    	long int num;
    	cin >> num;    
    	while(num--)
    	{
            long int n;
    		cin>>n;
    		int v[n];
    		for(int i=0;i<n;i++)
    		{
    			cin>>v[i];
    		}
     
    	    long long int ans = count_subarray(v, n);
    		cout << ans << endl;
        }
    }
     
    long long int count_subarray(int v[], int N)
    {
    	long long int right = 0, c = 0;
    	long long int num = 0;
     
    	
    	for (long long int left = 0; left < N; left++) {
     
    		
    		while (right < N
    			&& num + v[right]
    					== (num ^ v[right])) {
    			num += v[right];
    			right++;
    		}
     
    		
    		c += right - left;
    		if (left == right)
    			right++;
     
    		else
    			num -= v[left];
    	}
     
    	return c;
    }
     

Language: C++14

