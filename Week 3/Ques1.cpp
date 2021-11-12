#include<bits/stdc++.h>
using namespace std;



void solve()
{
    int n,shifts=0,comp=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x, j;
    for(int i=1;i<n;i++)
    {
        x=arr[i];
        j=i-1;
        while(arr[j]>x && j>=0)
        {
            comp++;
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
        shifts++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<"Comparisons = "<<comp;
    cout<<"\n"<<"Shifts = "<<comp+shifts<<"\n";
    return ;
}


int main()
{
    freopen("input_ques1.txt","r",stdin);
    freopen("output_ques1.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}