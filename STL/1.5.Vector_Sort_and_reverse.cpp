#include <iostream>
#include <vector>
#include <algorithm>   // for sort and reverse function

using namespace std;

int main()
{
	freopen( "input.txt","r", stdin);
    freopen( "my_output.txt","w", stdout);

     vector<int> v;
     v.push_back(30);
     v.push_back(50);
     v.push_back(10);
     v.push_back(40);
     v.push_back(20);

     
     sort(v.begin(),v.end()); 

     for(int i=0;i<v.size();i++)
     {
     	cout<<v[i]<<" ";           // 10 20 30 40 50 
     }
     cout<<endl;


     reverse(v.begin(),v.end()); 
     
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";           // 50 40 30 20 10 
     }
     cout<<endl;

    
}
