#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,m,a;
cin>> n>>m>>a;
cin.ignore();
if(n>=1 && n<=1000000000 &&
   m>=1 && m<=1000000000 &&
   a>=1 && a<=1000000000)
   {
      double e,f;
      e=double(n)/a;
      f=double(m)/a;
      cout<< (long long int)ceil(e)*(long long int)ceil(f);
   }
    return 0;
}
