#include<iostream>
#include<stdio.h>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    vector <int> vec;
    vector <int> :: iterator it;

    for(int i =1;i<=5;i++)
    {
        vec.push_back(i);
    }

    it= vec.begin();
    cout<<*it<<endl; //print first element
    it++; // increase element index 1
    cout<<*it;

}
