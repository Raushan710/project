
#include<bits/stdc++.h>
using namespace std;
 
int exponent(int n, int x)
{
    if(x==0)
    return 1;

   int smaller = exponent(n, x-1);
   int bigger = n * smaller;

   return bigger;
}

int main()
{  
   cout<<exponent(3,5);
   return 0;
}
