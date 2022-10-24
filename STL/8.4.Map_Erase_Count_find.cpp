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
    
    
   
    mp.erase(1); // key dite hobe

    for(auto it: mp)
    {
    	cout<<it.first<<" "<<it.second<<endl;
    }



    int cnt = mp.count(2);
    cout<<cnt<<endl;  // if not exit provide 0



    auto it = mp.find(2);

    if(it != mp.end()) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;

}