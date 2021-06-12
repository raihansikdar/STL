#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<vector>
#include<list>
#include<stack>
#include<algorithm>
using namespace std;

#define          ll              long long int
#define          S(a)            scanf("%lld",&a)
#define          Sc(a)           scanf("%s",a)
#define          SS(a,b)         scanf("%lld %lld",&a,&b)
#define          SSc(a,b)        scanf("%s %s",&a,&b)
#define          SSS(a,b,c)       scanf("%lld %lld %lld",&a,&b,&c)
#define          SSSS(a,b,c,d)       scanf("%lld %lld%lld %lld",&a,&b,&c,&d)
#define          p(a)              printf("%lld\n",a)
#define          pb              push_back
#define          pf              push_front
#define          nn              '\n'



int main()
{
// stack e iterator use hoy na

  stack<string>s;

  s.push("Raihan");
  s.push("Mamun");
  s.push("Afridi");

  //s.pop(); //top Afridi remove hobe

// cout<<s.top();  // last element top e thakbe

 while(!s.empty())
 {
    string x;
    x=s.top();
    cout<<x<<nn;
    s.pop();
 }

return 0;

}
