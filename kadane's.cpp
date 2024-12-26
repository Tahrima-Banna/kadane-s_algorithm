#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int cur=0, maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){

           cur+=arr[i];
           maxi=max(maxi,cur);
           if(cur<0)cur=0;
    }
    cout<<maxi<<'\n';
    return 0;
}
