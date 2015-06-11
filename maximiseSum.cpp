#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long T;
    cin >> T;
    while(T--)
        {
            long long N,S,M,temp,result,sum=0;
            vector<long long> arr;
	    vector<long long> prefixSum;
            cin >> N >> M;
            S = N;
            while(S--)    
            {
                cin >> temp;
                arr.push_back(temp); 
            }
            prefixSum.push_back(arr[0]);
            result     = prefixSum[0];
            for(long long i = 1; i < N ; i++) 
            {
                 sum = prefixSum[i-1] + (arr[i]);
		 sum = sum % M;
                 prefixSum.push_back(sum);
                 result = max(prefixSum[i],result);
            }  
            cout << result << endl;
        }
    return 0;
}
