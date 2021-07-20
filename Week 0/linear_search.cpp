/* 
Linear Search
Time Complexity: O(n)
Variables details: value is the key element, 
                   A[n] is the array,
                   flag to check,
                   n is the size of the array
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,value,flag=0;
    cin>>n; //size of the array
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i]; // inputs in the array
    }
    cin>>value; // enter value to be searched
    for(int i=0;i<n;i++)
    {
        if(value==A[i])
        {
            flag=1;
            cout<<"Number found at index = "<<i<<"\n";
            break;
        }
    }
    if(!flag) cout<<"Not found"<<"\n";
}