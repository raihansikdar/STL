#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main()

{
    freopen( "input.txt","r", stdin);
    freopen( "my_output.txt","w", stdout);

    map<int,string> mp;
    mp[1] = "Raihan";
    mp[2] = "Mamun";
    mp[4] = "Afridi";
    mp.insert({5,"Amir"});  //also

  /* if value exits then poin it address. if not exits then provoide 
  immediate upper value.*/


 // Lower Bound----------------------------------   

  auto it = mp.lower_bound(1);

  cout<<(*it).first << " "<<(*it).second<<endl;

  auto it = mp.lower_bound(3);

  cout<<(*it).first << " "<<(*it).second<<endl;

// -----------------------------------------------



 
 /* if value exits then provide immediate upper value.*/

  // Upper Bound -----------------------------------------------
   
   auto it = mp.upper_bound(3);

   cout<<(*it).first << " "<<(*it).second<<endl;

}