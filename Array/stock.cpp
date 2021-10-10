#include<bits/stdc++.h>
using namespace std;

//This is a O(N*N) Solution
int stock(int price[],int start , int end)
{
  if(start >= end)
     return 0;

 int profit=0,curr_profit=0;
    for(int i=start;i<=end;i++)
    {
      for(int j=i+1;j<=end;j++)
       {
        if(price[j]>price[i])
        {
          curr_profit = (price[j]-price[i]) + stock(price,start,i-1) + stock(price,j+1,end);
          profit=max(profit,curr_profit);
        }
      }
    }
return profit;    
}


int max_profit( int arr[], int n )
{
    int profit = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            profit += arr[i]-arr[i-1];
    }
return profit;
}
int main()
{
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++)
    cin>>price[i];
    cout<<max_profit(price,n);
 // cout << stock(price, 0, n-1);
return 0;
}