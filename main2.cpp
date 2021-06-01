#include <iostream>
#include <string>
#include <fstream>
#include "menu2.h"

using namespace std;

int main(int argc, char *argv[]) {

	if (argc != 2) {
		cout<<"Sorry"<<endl;
		return 1;
	}
	Funks court_case_(argv[1]);

	Menu _court_case;
	_court_case.call_menu(court_case_);

	return 0;
}

