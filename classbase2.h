#include <iostream>
#include <string>
#include <fstream>
#include "baza2.h"

using namespace std;

class Funks{
	private:
		fstream f;
		char *fname;
		int n;
		baza *court_cases;
	public:
		Funks(char* f_name);

		void print_court_cases();
		void add_court_cases();
		void edit_court_cases();
		void find_court_cases();
		void remove_court_cases();
		
		void load_from_file();
};


