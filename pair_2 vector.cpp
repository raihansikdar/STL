#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
#include<utility>
using namespace std;

int main()
{
    vector< pair<string,int> >vec;
    vector< pair<string,int> > :: iterator it;

    vec.push_back(make_pair("Raihan",21));
    vec.push_back(make_pair("Mamun",22));

    cout<<vec[0].first<<" "<< vec[0].second<<endl;

    for(it= vec.begin(); it!=vec.end();it++)
    {
        cout<< it-> first <<" "<<it-> second<<endl;
    }

}
