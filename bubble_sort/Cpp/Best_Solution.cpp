#include <iostream>

using namespace std;

int main()
{
   int n,temp,i;
   cin>>n;
   int a[n];
   
   for(i=0;i<n;i++)
   cin>>a[i];
   
   cout<<"\n\nOriginal Data:- ";
   for(i=0;i<n;i++)
   cout<<a[i]<<" ";
   
   for(i=0;i<n;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
   
   cout<<"\n\nAfter Sorting :- ";

  for(i=0;i<n;i++)
   cout<<a[i]<<" ";
   return 0;
}