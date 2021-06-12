#include<iostream>
#include<stdio.h>
#include<cstring>
#include<vector>
#include<iterator>
#include<algorithm>
#include<utility>
using namespace std;

int main()
{
    //pair<string,int> p("Raihan",21);

    pair<string,int> p;

    p.first = "Raihan";
    p.second = 21;
    cout<< p.first<< " "<<p.second<<endl;


    p =make_pair("Mamun",22);
    cout<< p.first<< " "<<p.second<<endl;


    pair<string , pair<int , string> > p2;                            //multiple pair
    p2=make_pair("Raihan" , make_pair(133, "A+"));

    cout<<p2.first<<" "<<p2.second.first<< " "<<p2.second.second;


}
