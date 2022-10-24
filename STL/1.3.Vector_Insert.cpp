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

	for(int i= 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";              // 10 20 30 40 50 
	}
	cout<<endl;

   v.insert(v.begin(),1);     // index[0] will be 1 and 10 go to index[1]

   for(int i= 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";             // 1 10 20 30 40 50 
	}
	cout<<endl;


	v.insert(v.begin()+1,2);     // index[0] will be 1 and 10 go to index[1]

    for(int i= 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";         // 10 2 20 30 40 50 
	}
	cout<<endl;


	v.insert(v.begin()+2,3,1);          // from index[2] will print triple 1 then baki ta
	for(int i= 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";              // 10 20 1 1 1 30 40 50 
	}
	cout<<endl;

}

