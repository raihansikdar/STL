#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<set>
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

  //duplicate value ney na
  int arr[5]={5,20,15,30,25};

  set<int>s(arr,arr+5);

  //set<int>s;
  set<int>:: iterator it;

  s.insert(10);
  s.insert(45);
  s.insert(40);
  s.insert(35);

  //it=s.find(5);
  //s.erase(it);

  for(it=s.begin();it!=s.end();it++)
  {
    cout<<*it<<" ";
  }

return 0;

}
