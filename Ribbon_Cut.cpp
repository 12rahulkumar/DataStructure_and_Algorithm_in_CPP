#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    

    int i;
    for(i=1;i<n;i++){
        if((2*i)==(n-i)){
           
            cout<<"YES";
            break;
        }
    }

    if(i==n)cout<<"NO";
    
   return 0;
}