#include <iostream>
#include <string>
#include "menu2.h"

using namespace std;

Menu::Menu(){
	cout<<"Hello!\n"; 
}

void Menu::call_menu(Funks &s1){
    	int n = 0;
    	int numeral;

    	do {
        	cout<<"What do you want to do?\n";
        	cout<<"1. Print\n";
		cout<<"2. Add\n";
		cout<<"3. Edit\n";
		cout<<"4. Find\n";
		cout<<"5. Remove\n";
		cout<<"6. Quit\n";
		cout<<">";
		cin>>numeral;

		while (numeral < 1 || numeral > 8) {
		    cout<<"Incorrect numeral, try again: ";
		    cin>>numeral;
		}

		switch (numeral) {
		    case 1:
		    	s1.load_from_file();
		        s1.print_court_cases();
		        break;

		    case 2:
		    	s1.load_from_file();
		        s1.add_court_cases();
		        break;

		    case 3:
		    	s1.load_from_file();
		        s1.edit_court_cases();
		        break;

		    case 4:
		    	s1.load_from_file();
		        s1.find_court_cases();
		        break;

		    case 5:
		    	s1.load_from_file();
		    	s1.remove_court_cases();
		        break;
		}

		cout<<"\n";
	    } while (numeral != 6);

	}

Menu::~Menu(){
	cout<<"Good luck! Bye!";
}

