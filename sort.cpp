#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

bool myfunc(int a,int b)
{
    return (a>b);
}

int main()
{
    int arr[5] = {5,2,1,4,3};
    int i;
    sort(arr,arr+5);

    for(i=0;i<5;i++)
    {
        cout<<arr[i]<< " ";
    }



}




