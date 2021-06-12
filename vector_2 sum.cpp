#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
    int sum=0,i;
    vector <int> vec;
    vec.push_back(5);
    vec.push_back(10);
    vec.push_back(15);

//    for(i=0;i<vec.size();i++)
//    {
//        sum = sum+vec[i];
//    }

     while(!vec.empty())
     {
          sum = sum+vec.back();
          vec.pop_back();
     }


    cout<< sum;
}
