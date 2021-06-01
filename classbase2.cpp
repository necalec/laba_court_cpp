#include <iostream>
#include <string>
#include <fstream>
#include "classbase2.h"

using namespace std;

Funks::Funks(char *f_name){
	fname = f_name;
}

void Funks::print_court_cases(){
	for (int i = 0; i < n; i++){
		cout<<i + 1<< ". "<<court_cases[i]<<endl;
	}
	delete [] court_cases;
}

void Funks::add_court_cases(){
	baza buffer;
	cout<<"Enter new info ";
	cin>>buffer;
	f.open(fname,ios::out);
	
	for (int i = 0; i < n; i++) {
		f<<court_cases[i];
	}
	f<<buffer;
	f.close();
	delete [] court_cases;
}

void Funks::edit_court_cases(){
	int r;
	cin>>r;
	cin>>court_cases[r--];
	
	f.open(fname, ios::out);
	for (int i = 0; i < n; i++) {
		f<<court_cases[i];
	}
	delete [] court_cases;
}

void Funks::find_court_cases(){
	cout<<"Enter field for find (1 - number, 2 - article, 3 - judge, 4 - accused): ";
	int field;
	cin>>field;
	while (field < 1 || field > 4){
		cout<<"Try again";
		cin>>field;
	}

	if (field == 1){
		int number2;
		cout<<"Enter number";
		cin>>number2;
		for (int i = 0; i < n; i++){
			if (number2 == court_cases[i].get_number()) {
				cout<<i+1<<". "<<court_cases[i];
				}
		}
	}
	
	if (field == 2){
		int article2;
		cout<<"Enter article";
		cin>>article2;
		for (int i = 0; i < n; i++){
			if (article2 == court_cases[i].get_article()) {
				cout<<i+1<<". "<<court_cases[i];
				}
		}
	}

	if (field == 3){
		string judge2;
		cout<<"Enter judge";
		cin>>judge2;
		for (int i = 0; i < n; i++){
			if (judge2 == court_cases[i].get_judge()) {
				cout<<i+1<<". "<<court_cases[i];
				}
		}
	}

	if (field == 4){
		string assused2;
		cout<<"Enter assused";
		cin>>assused2;
		for (int i = 0; i < n; i++){
			if (assused2 == court_cases[i].get_assused()) {
				cout<<i+1<<". "<<court_cases[i];
				}
		}
	}
	delete [] court_cases; 
}

void Funks::remove_court_cases(){
	int r;
	cin>>r;
	f.open(fname, ios::out);
	f.seekg(0);
	
	for (int i = 0; i < n; i++) {
		if (i != r) {
			f<<court_cases[i];
		}
	}
	f.close();
	delete [] court_cases;
}

void Funks::load_from_file(){
	f.open(fname,ios::in);
	n = 0;
	string buffer;
	
	while(f.peek() != EOF){
		getline(f, buffer);
		n++;
	}
	
	court_cases = new baza [n];
	f.open(fname,ios::in);
	for (int i = 0; i < n; i++) {
		f>>court_cases[i];
	}
	f.close();
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
