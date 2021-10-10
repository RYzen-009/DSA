//This is the code to move all zeros to the end of the array
//input :-8 5  0 1 0 20
//output :- 8 5 1 20 0 0

#include<bits/stdc++.h>
using namespace std;

/*void movetoend(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
                   if(arr[j]!=0)
                   swap(arr[i],arr[j]);
        }
    }

}*/

/*
The count variable stores the index value of non-zero number and in the end it swaps zero and non-zero number
*/
void movetoend(int arr[],int n)
{

    int count = 0;
    for(int i=0;i<n;i++)
    {
         if(arr[i]!=0)
         {
             swap(arr[i],arr[count]);
             count ++;

         }
    }
}
//Hum basically zero ko ignore ker rah hai aur non-zero element ko swap karna hai like count uss position 
//pe rukk jata hai jaha pe zero hota hai aur fhir hum usse arr[i] se swp ker dete hai 

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0 ;i<n;i++)
        cin>>arr[i];
  
  movetoend(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" "<<"\n";

return 0;
}