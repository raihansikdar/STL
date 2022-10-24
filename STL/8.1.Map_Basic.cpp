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

    cout<<mp[5]<<endl;    // 60
    cout<<mp.at(2)<<endl;  // 30 

    /*Updating value */
    mp[5] = 100;           
    cout<<mp[5]<<endl;    // 100
    
    /*Adding with previous value */
    mp[5] +=10;
    cout<<mp[5]<<endl;    // 110



    /*Printing all map value*/
    for(auto it: mp)
    {
    	cout<<it.first<<" "<<it.second<<endl; // it will be sort with keys
    }

   
   /* Using Iterator */
   map<int,int> :: iterator it;

   for(it=mp.begin(); it != mp.end();it++)
   {
     cout<<it -> first<<" "<<it ->second<<endl;    // it will be sort with keys
   }

   cout<<mp.size()<<endl;
}