#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int TC;
    scanf("%d",&TC);
    while(TC--)
        {
           int M,N;
           vector<pair<int,int>> C;
           scanf("%d",&M);
           scanf("%d",&N);
           for(int i = 0; i < N; i++)
               {
                 int cost;
                 scanf("%d",&cost);
                 C.push_back(make_pair(cost,i+1));
               }
           sort(C.begin(),C.end());
           int left =  0;
           int right = N-1;
           while(left < right)
           {
               int sum = (C[left].first + C[right].first);
               if(sum == M) 
               {
                    if(C[left].second < C[right].second)
                        cout << C[left].second << ' ' << C[right].second << endl;
                    else
                        cout << C[right].second << ' ' << C[left].second << endl;
                    break;
               }
               else if (sum > M)  right--;
               else               left++;
           }
           
           
        }
    return 0;
}
