#include<bits/stdc++.h>
using namespace std;

bool eq(int arr[],int n)
{
  int sum =0;
  for(int i=0;i<n;i++)
  {
        sum += arr[i];
  }
  int lsum = 0;

  for (int i = 0; i < n; i++)
  {
     if (lsum == sum - arr[i])
      {    return true;}
    
    lsum +=arr[i];
  
  sum = sum - arr[i];
  }
return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
     cout<<eq(arr,n);

return 0;
}