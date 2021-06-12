#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

bool myfunc(int a,int b)
{
    return (a>b);            // larger to smaller
}

int main()
{
    int n;
    vector <int> vec;
    vector <int> :: iterator it;

    vec.push_back(7);
    vec.push_back(6);


    for(int i =1;i<=5;i++)
    {
        cin>>n;
        vec.push_back(n);     // take user input
    }

     sort(vec.begin(),vec.end(),myfunc);

     // sort(vec.begin(),vec.begin()+3);

    for(it = vec.begin(); it != vec.end(); it++)
    {
         cout<<*it<<" ";
    }


}



