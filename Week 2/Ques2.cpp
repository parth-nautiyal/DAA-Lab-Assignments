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
           {
               return mid;
           } 
        else if(key<A[mid])
            end=mid-1;
        else 
            beg=mid+1;
    }
    return -1;
}

int search(int A[],int n, int key, bool firstOccurence)
{
    int l=0,h=n-1;
    int ans=-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(A[mid]<key)
        {
            l=mid+1;
        }
        else if(A[mid]>key)
        {
            h=mid-1;
        }
        else
        {
            ans=mid;
            if(firstOccurence)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
    }
    return ans;
}

void solve()
{
    int n,key; //size of array
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cin>>key;// enter the key
    int ans =-1;
    int found =binary_search(A,n,key);
    if(found==-1)
    {
        cout<<"Key not present"<<"\n";
        return;
    }
    int first = search(A,n,key,true);
    int last = search(A,n,key,false);
    cout<<"first="<<first<<"\n";
    cout<<"last="<<last<<"\n";
    ans=last-first+1;
    cout<<ans<<"\n";
    return;
}


int main()
{
    freopen("input_ques2.txt","r",stdin);
    freopen("output_ques2.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}