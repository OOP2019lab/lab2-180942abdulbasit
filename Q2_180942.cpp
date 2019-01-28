#include <iostream>
#include <string>
#include "Q2_180942.h"
#include <fstream>
using namespace std;
void readDataFromFile( gitHubUser * users, string filepath);
int main()
{
	string path;
	cout<<"enter file path:"<<endl;
	cin>>path;
	gitHubUser *users;
	readDataFromFile(users, path);

}
void readDataFromFile( gitHubUser * users, string filepath) // to read data from file and save into struct variables
{
	ifstream fin;
	fin.open(filepath);
	int cases;
	fin>>cases;
	users=new gitHubUser[cases];
	for (int i=0; i<cases;i++)
	{
		getline(fin,users[i].firstName);
		getline(fin

}