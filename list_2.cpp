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

    list <int> mylist;
    list<int>::iterator it;

    mylist.pb(10);
    mylist.pb(15);
    mylist.push_front(5);
    mylist.pb(25);
    mylist.pf(1);

    mylist.reverse();

    cout<<mylist.size()<<nn;
    //mylist.clear();

    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout<<*it<<nn;
    }



    return 0;

}
