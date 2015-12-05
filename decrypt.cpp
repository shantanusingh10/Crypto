//Use this file to decrypt the target.txt file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	
	ifstream fr;
	fr.open("target.txt");
	char ch;
	int key;
	ofstream fw;
	fw.open("result.txt");
	cout<<"Enter the key: ";
	cin>>key;
	while(!fr.eof()){
		fr.get(ch);
		ch=ch-key;
		fw<<char(ch);
	}
	cout<<endl<<"Decrypting DONE!!! Decrypted the target.txt file"<<endl;
	cout<<"The decrypted file is result.txt"<<endl;
	return 0;
}
