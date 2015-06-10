#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class SherlockArray
{
    public:
           string Compute(vector<int> A,int N)
           {
              int sum;
              for(int i = 0; i < N; i++) sum+= A[i];
              int lsum = 0;
              for(int i = 0; i < N; i++)
              {
                 sum -= A[i];
                 if(sum != lsum)
                     lsum += A[i];
                 else
                     return "YES";
              }
              return "NO";
           }
};

int main()
{
    SherlockArray SA;
    int TC,N;
    scanf("%d",&TC);
    while(TC--)
    {    scanf("%d",&N);
        {
           vector<int> ai;
           for(int i = 0;i < N; i++)
               {
                  int temp;
                  scanf("%d",&temp);
                  ai.push_back(temp);    
               }
           cout << SA.Compute(ai,N) << endl;
        }

    }
    return 0;
}
