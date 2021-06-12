#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
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

// queue te iterator use hoy na

int main()
{

  priority_queue<int>q;

  q.push(20);
  q.push(60);
  q.push(40);
  q.push(80);

 // q.pop(); //top raihan remove hobe

 //cout<<q.top();  // 1st element top e thakbe

 while(!q.empty())
 {
    int x;
    x=q.top();
    cout<<x<<nn;
    q.pop();
 }

return 0;

}
