#include<bits/stdc++.h>
using namespace std;



void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int swaps=0,comp=0;
    for(int l=0;l<n;l++){
        cin>>arr[l];
    }
    int i=0,j=0,k=0;
    for(i=0;i<n-1;i++){
        for (j=k=i;j<n;j++){
            if(arr[j]<arr[k]){
                comp++;
                k=j;
            }
        }
        swap(arr[i],arr[k]);
        swaps++;
    }
    for(auto n:arr)
    {
        cout<<n<<" ";
    }
    cout<<"\n"<<"Comparisons = "<<comp;
    cout<<"\n"<<"Swaps = "<<swaps<<"\n";
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