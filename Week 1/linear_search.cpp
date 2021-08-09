#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n; //size
    cin>>n;
    int A[n];

    for(int i=0;i<n;i++)
        cin>>A[i]; //array

    int key,flag=0,cmp=0;
    cin>>key; //key element
    
    for(int i=0;i<n;i++)
    {
        if(key==A[i])
        {
            flag=1;
            break;
        }
        cmp++;
    }
    if(flag)
        cout<<"Present "<<cmp+1<<"\n";
    else 
        cout<<"Not Present "<<n<<"\n";

}

int main()
{
    freopen("input_linear.txt","r",stdin);
    freopen("output_linear.txt","w",stdout);
    int t;
    cin>>t; //test cases
    while(t--)
    {
        solve();
    }
    return 0;
}