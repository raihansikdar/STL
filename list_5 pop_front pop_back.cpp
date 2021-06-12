#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<list>
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

  int arr[6]={2,7,5,3,4,1} ;

  list<int>mylist(arr,arr+6);
  list<int>::iterator it;

  //cout<<mylist.front()<<nn; // 1st element
  //cout<<mylist.back();      // last element

  mylist.pop_front();       // remove 1st element
  mylist.pop_back();        // remove last element

  for(it=mylist.begin();it!=mylist.end();it++)
  {
    cout<<*it<<" ";
  }

  if(mylist.empty())
  {
     puts("Empty");
  }
  else puts("Not Empty");

return 0;

}
