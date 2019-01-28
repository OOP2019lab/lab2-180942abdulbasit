#include <iostream>
#include <string>
#include "Q1_180942.h"
using namespace std;
bool Comparison(gitHubUser a, gitHubUser b);
void inputFromUser(gitHubUser* arr, int size);
gitHubUser* searchUser ( gitHubUser* users, int size, string userName);

int main()
{

	gitHubUser user1, user2;
	cout<<"For user 1:"<<endl;
	cout<<"Enter first name:"<<endl;
	cin>>user1.firstName;
	cout<<"Enter username:"<<endl;
	cin>>user1.userName;
	cout<<"Enter password:"<<endl;
	cin>>user1.password;
	cout<<"Enter email:"<<endl;
	cin>>user1.email;
	cout<<"Enter folder count:"<<endl;
	cin>>user1.folderCount;

	cout<<"For user 2:"<<endl;
	cout<<"Enter first name:"<<endl;
	cin>>user2.firstName;
	cout<<"Enter username:"<<endl;
	cin>>user2.userName;
	cout<<"Enter password:"<<endl;
	cin>>user2.password;
	cout<<"Enter email:"<<endl;
	cin>>user2.email;
	cout<<"Enter folder count:"<<endl;
	cin>>user2.folderCount;
	cout<<endl<<"Now comparing both users (0 means both users are same)"<<endl;
	cout<<Comparison(user1,user2);

	cout<<endl<<"Now taking data for 4 users"<<endl; 
	int size=4;
	gitHubUser *user;
	user=new gitHubUser[size];
	inputFromUser(user,size);
	cout<<"Enter username to search"<<endl;
	string username;
	cin>>username;
	gitHubUser* a = searchUser(user,size,username);
	cout<<a->firstName<<endl;
	cout<<a->userName<<endl;
	cout<<a->password<<endl;
	cout<<a->email<<endl;
	cout<<a->folderCount<<endl;



	return 0;



}
bool Comparison(gitHubUser a, gitHubUser b) // compares data of two users
{
	if (a.firstName==b.firstName && a.userName==b.userName && a.password==b.password && a.email==b.email && a.folderCount==b.folderCount)
		return 0;
	else return 1;
}
void inputFromUser(gitHubUser* arr, int size) // takes input of data of users
{
	for (int i=0; i<size; i++)
	{
		cout<<"For user "<<i+1<<endl;

		cout<<"Enter first name:"<<endl;
		cin>>arr[i].firstName;
		cout<<"Enter username:"<<endl;
		cin>>arr[i].userName;
		if (i>0)
			if (arr[i].userName==arr[i-1].userName)
			{
				cout<<"Username already exist. Enter another username"<<endl;
				while(1)
				{
					cin>>arr[i].userName;
					if (arr[i].userName!=arr[i-1].userName)
						break;
				}

			}
			cout<<"Enter password:"<<endl;
			cin>>arr[i].password;
			cout<<"Enter email:"<<endl;
			cin>>arr[i].email;
			cout<<"Enter folder count:"<<endl;
			cin>>arr[i].folderCount;
	}
}
gitHubUser* searchUser ( gitHubUser* users, int size, string userName) // find a specific username within data of 4 users 
{
	for (int i=0;i<size;i++)
	{
		if (users[i].userName==userName)
			return &users[i];
	}
}
