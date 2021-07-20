#include<bits/stdc++.h>
using namespace std;

int binary_search(int A[],int n,int key)
{
    int beg,end,mid;
    beg=0;              // beginning
    end=n-1;            // ending
    
    while(beg<=end)
    {
        mid=(beg+end)/2; // middle
        if(A[mid]==key)
            return mid;
        else if(key<A[mid])
            end=mid-1;
        else 
            beg=mid+1;
    }
    return -1;
}

int main()
{
    int n,key; //size of array
    cout<<"Enter the size "<<"\n";
    cin>>n;
    int A[n];
    cout<<"Enter the key "<<"\n";
    cin>>key;// enter the key
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n); //sorting the array
    int t = binary_search(A,n,key);
    if(t>=0)cout<<"Found at index "<<t<<"\n";
    else cout<<"Not Found"<<"\n";

    return 0;
}