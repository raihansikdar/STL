#include <iostream>
#include <vector>

using namespace std;

int main()
{
	freopen( "input.txt","r", stdin);
    freopen( "my_output.txt","w", stdout);

     vector<int> v;
     v.push_back(10);
     v.push_back(20);
     v.push_back(30);

     vector<int>v2;
     v2.push_back(1);
     v2.push_back(2);
     v2.push_back(3);

     cout<<"Before Swaping : "<<endl;
     
     cout<<"1st vector : ";
     for(int i=0;i<v.size();i++)
     {
     	cout<<v[i]<<" ";
     }

     cout<<endl;

     cout<<"2nd vector : ";
     for(int i=0;i<v2.size();i++)
     {
     	cout<<v2[i]<<" ";
     }
     cout<<endl;
     cout<<endl;

     swap(v,v2);


     cout<<"After Swaping : "<<endl;
     
     cout<<"1st vector : ";
     for(int i=0;i<v.size();i++)
     {
     	cout<<v[i]<<" ";
     }

     cout<<endl;

     cout<<"2nd vector : ";
     for(int i=0;i<v2.size();i++)
     {
     	cout<<v2[i]<<" ";
     }
     cout<<endl;
}

Before Swaping : 
1st vector : 10 20 30 
2nd vector : 1 2 3 

After Swaping : 
1st vector : 1 2 3 
2nd vector : 10 20 30 