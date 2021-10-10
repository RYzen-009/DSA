#include<bits/stdc++.h>
using namespace std;

//This solution uses MOORE Voting Algorithm
int majority(int arr[], int n)
{
    //THIS CODE IS NOT WORKING RIGHT NOW    
    int i, candidate = 1, votes = 0;
    // Finding majority candidate
    for (i = 0; i < n; i++)
    {
        if (votes == 0)
        {
          candidate = arr[i];
            votes = 1;
        }
        else
        {
            if (arr[i] == candidate)
                votes++;
            else
                votes--;
        }
    }
    int count = 0;
    // Checking if majority candidate occurs more than n/2
    // times
    for (i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
    }

    if (count > n / 2)
        return candidate;
    else
        return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<majority(arr,n);
return 0;
}