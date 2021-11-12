#include<bits/stdc++.h>
using namespace std;



void solve()
{
    int n,f=0; //size of array
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(A[i]+A[j]==A[k])
                {
                    cout<<i+1<<", "<<j+1<<", "<<k+1<<"\n";
                    f++;
                }
            }
        }
    }
    if(!f) cout<<"No sequence  found"<<"\n";
    return ;
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