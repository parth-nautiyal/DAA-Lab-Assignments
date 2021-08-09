#include<bits/stdc++.h>
using namespace std;


int binary_search(int A[],int n,int key,int &c)
{
    int beg,end,mid;
    beg=0;              // beginning
    end=n-1;            // ending
    c=0;                // comparisons
    
    while(beg<=end)
    {
        mid=(beg+end)/2; // middle
        if(A[mid]==key)
           {
               c++;
               return mid;
           } 
        else if(key<A[mid])
            end=mid-1;
        else 
            beg=mid+1;
        c++;
    }
    return -1;
}

void solve()
{
    int n,key,cmp; //size of array
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cin>>key;// enter the key
    sort(A,A+n); //sorting the array
    int t = binary_search(A,n,key,cmp);
    if(t>=0)cout<<"Present "<<cmp<<"\n";
    else cout<<"Not Present "<<cmp<<"\n";
}

int main()
{
    freopen("input_binary.txt","r",stdin);
    freopen("output_binary.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}