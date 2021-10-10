#include<bits/stdc++.h>
using namespace std;

bool subsum(int arr[],int sum,int n)
{
  int curr_sum=arr[0];
  int s=0;
  for(int e=1;e<n;e++)
  {
      while(curr_sum>sum && s>e-1)
      {
          curr_sum -= arr[s];
          s++;
      }
      if(curr_sum==sum)
          return true;
      
      if(e<n)
         curr_sum += arr[e];
  }
  return (curr_sum == sum);
}
int main()
{
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<subsum(arr,sum,n);
return 0;
}