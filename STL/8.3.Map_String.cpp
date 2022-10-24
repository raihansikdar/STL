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
    mp[3] = "Afridi";
    mp.insert({4,"Amir"});  //also
    
   
    cout<<mp.at(1)<<endl;

    for(auto it: mp)
    {
    	cout<<it.first<<" "<<it.second<<endl;
    }

}