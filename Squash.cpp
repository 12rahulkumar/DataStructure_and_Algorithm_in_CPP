#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){

        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        if(s.length() == k){
            cout<<"YES"<<endl;
        }else if(k>s.length()){
            cout<<"NO"<<endl;
        }else{
            char ch = s[0];
            string result;
            result = ch;
            for(int i=1;i<s.length();i++){
                if(ch==s[i]){
                    continue;
                }else{
                    ch = s[i];
                    result+=ch;
                }
            }
            
            if(k==result.length()){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }

    }
   return 0;
}