#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    
    while(t--){

        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int maxSum = INT_MAX;
        if(n==2){
            maxSum = arr[0]/2+arr[1]/2;
            cout<<maxSum<<endl;
        }else{
            
            int firstIndex = 0;
            int secondIndex = 0;
            for(int i=0;i<n-1;i++){
                int sum = arr[i]/2 + arr[i+1]/2;
                if(sum<maxSum){
                    
                    maxSum = sum;
                    firstIndex=i;
                    secondIndex=i+1;
                }
            }
            
            int sum=0;
            for(int i=0;i<n;i++){
                
                if(i==firstIndex || i==secondIndex){
                    sum+=arr[i]/2;
                }else{
                    sum+=arr[i];
                }
            }
            cout<<sum<<endl;
        }

    }
    
   return 0;
}