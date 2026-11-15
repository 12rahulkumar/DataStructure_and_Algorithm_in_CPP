#include <bits/stdc++.h>
using namespace std;

int main()
{

   long long int a,b;

   cin>>a>>b;

   int rem1,rem2;

   while(a/10 !=0){
    a = a%10;
   }

   rem1 = a;

   while(b/10 !=0){
    b = b%10;
   }

   rem2 = b;

   cout<<rem1+rem2;

   return 0;
}