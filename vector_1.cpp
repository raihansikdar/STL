#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main()

{
  //  vector <int> vec(5,3);  print 5 ta 3
    vector <int> vec;
    vec.push_back(5);
    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(20);
    vec.push_back(25);
    vec.pop_back();     // last element will be delete

    vec[0]=1;   // change index[0]

    cout<<vec[3]<<endl;   //print index[3]

   // vec.clear();     // clear all element

   for(int i= 0;i< vec.size();i++)
   {
       cout<<vec[i]<<"  "   ;
    }

}
