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
            vector<int> arr;
            cin >> N >> M;
            S = N;
            while(S--)    
            {
                cin >> temp;
                arr.push_back(temp); 
            }
            sum    = arr[0];
            result = sum;
            for(int i = 1; i < N ; i++) 
            {
                 sum = sum + (arr[i]);
                 sum = sum  %  M;
                 result = max(sum,result);
            }  
            cout << result << endl;
        }
    return 0;
}
