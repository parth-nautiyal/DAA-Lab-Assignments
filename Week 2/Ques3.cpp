#include<bits/stdc++.h>
using namespace std;



void solve()
{
    int n,f=0,key; //size of array
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cin>>key;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(A[i]-A[j])==key)
                f++;
        }
    }
    cout<<f<<"\n";
    return ;
}


int main()
{
    freopen("input_ques3.txt","r",stdin);
    freopen("output_ques3.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}