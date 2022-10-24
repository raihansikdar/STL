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
		cout<<v[i]<<" ";
	}
	cout<<endl;

	v.erase(v.begin() + 2);   // 2 means index and remove 30
	for(int i= 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";      // 10 20 40 50
	}

	v.erase(v.begin() + 1,v.begin() + 3);   // 1 to before 3 index will remove
	for(int i= 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";                    // 10 20 30 40 50 
                                           // 10 40 50 
	}

	v.erase(v.begin() + 2,v.end());   // 2 to last index will remove
	for(int i= 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";                    // 10 20 30 40 50 
                                           // 10 20
	}

}

