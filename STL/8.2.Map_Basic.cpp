#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main()

{
    freopen( "input.txt","r", stdin);
    freopen( "my_output.txt","w", stdout);

    map<int,int> mp;
    
    mp.insert({0,10});
    mp.insert({1,20});
    mp.insert({2,30}); 
    mp.insert({3,40}); 
    mp.insert({4,50});
    mp[5] = 60;       // also


    /*Printing all map value*/
    for(auto it: mp)
    {
    	cout<<it.first<<" "<<it.second<<endl; // it will be sort with keys
    }

  

   cout<<"map size : "<<mp.size()<<endl;
   cout<<"map height value we can store : "<<mp.max_size()<<endl;

  // mp.clear();

   if(mp.empty()) cout<<"Empty"<<endl;
   else cout<<"Not Empty"<<endl;
}