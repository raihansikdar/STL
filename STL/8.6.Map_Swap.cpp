#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main()

{
    freopen( "input.txt","r", stdin);
    freopen( "my_output.txt","w", stdout);

    map<int,string> mp,mp2;
    mp[1] = "Raihan";
    mp[2] = "Mamun";
    mp[3] = "Afridi";
    mp.insert({4,"Amir"});  //also

    mp2[5] = "Apple";
    mp2[6] = "Banana";
    mp2[7] = "Orange";
    mp2[8] = "Mango";

    swap(mp,mp2);
    

    puts("mp Element : ");
    for(auto it: mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<endl;

    puts("mp2 Element : ");
    for(auto it: mp2)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

  


}