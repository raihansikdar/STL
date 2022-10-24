#include<iostream>
#include<vector>

using namespace std;

int main()
{
	freopen( "input.txt","r", stdin);
    freopen( "my_output.txt","w", stdout);

	vector <int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.pop_back();               // last element will be delete

	cout<<v[0]<<" ";            // when v[50] provide garbage value
	cout<<v[1]<<endl;

	cout<<v.at(0)<<" ";         // when v.at(50]) don't provide garbage value
	cout<<v.at(1)<<endl; 

	cout<<"First value : "<<v.front()<<endl;
	cout<<"Last value : "<<v.back()<<endl;

	cout<<"Size : "<<v.size()<<endl;

	for(int i =0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}

    // v.clear();                // clear all element
     
    cout<<endl;
    if(v.empty()) puts("Empty");
    else puts("Not Empty");
}


output: 
10 20
10 20
First value : 10
Last value : 40
Size : 4
10 20 30 40 
Not Empty