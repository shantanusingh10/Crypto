//Use this file to crypt the source.txt file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	
	ifstream fr;
	fr.open("source.txt");
	char ch;
	int key;
	ofstream fw;
	fw.open("target.txt");
	cout<<"Apply the key: ";
	cin>>key;
	while(!fr.eof()){
		fr.get(ch);
		ch=ch+key;
		fw<<char(ch);
	}
	cout<<endl<<"Crypting DONE!!! Crypted the source.txt file"<<endl;
	cout<<"The crypted file is target.txt"<<endl;
	return 0;
}
