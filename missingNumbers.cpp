#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int i,j,n,m,temp;
    vector<int> first;
    vector<int> second;
    vector<int> X;
    scanf("%d",&n) ;
    i =0;
    while( i < n)
    {
         scanf("%d",&temp);
         first.push_back(temp);
         i++;
    }
    scanf("%d",&m);  
    i =0;
    while(i < m)
    {
         scanf("%d",&temp);
         second.push_back(temp);
         i++;
    }
    sort(first.begin(),first.end());
    sort(second.begin(),second.end());
    
    i = 0; j = 0;
    while(i < n && j < m)
    {
        if(first[i] == second[j])
            {
                i++;
                j++;
            }
        else if(second[j] != first[i])
            {
                X.push_back(second[j]);
                j++;
            }
    }
    sort( X.begin(), X.end() );
    X.erase( unique( X.begin(), X.end() ), X.end() );
    for(vector<int>::iterator it = X.begin() ; it != X.end(); ++it)
        {
          cout << *it << ' ';    
        }
    
    return 0;
    
}
