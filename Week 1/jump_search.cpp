#include<bits/stdc++.h>
using namespace std;

void jump_search(int A[],int,int);
void solve()
{
    int n; 
    cin>>n;
    
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int ele; 
    cin>>ele;
    jump_search(A,n,ele);
}

void jump_search(int A[],int n,int ele)
{
    int jump,pos,i;
    jump=(int)sqrt(n);
    for(i=0;i<n;i+=jump)
    {
        if(A[i]>ele)
        {
            pos=i;
            break;
        }
        if(A[i]==ele)
        {
            cout<<"Present"<<"\n";
            return;
        }
    }
    if(i>n)
    pos=n-1;
    for(int j=pos;j>=0;j--)
    {
        if(A[j]==ele)
        {
            cout<<"Present"<<"\n";
            return;
        }
    }
    cout<<"Absent"<<"\n";
    return;
}

int main()
{
    freopen("input_jump.txt","r",stdin);
    freopen("output_jump.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        cout<<t<<"\n";
        solve();
    }
    return 0;
}