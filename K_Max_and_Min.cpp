#include <bits/stdc++.h>
using namespace std;

int main()
{

   int a,b,c;
   cin>>a>>b>>c;

   int min = INT_MAX;
   int max = INT_MIN;

   max = (a>=b && a>c) ? a:(b>a && b>c) ? b:c;
   min = (a<=b && a<c) ? a:(b<a && b<c) ? b:c;

   cout<<min<<" "<<max;

   return 0;
}