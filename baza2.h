#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class baza{
	private:
		int number;
		int article;
		string judge;
		string assused;
	public:
		int get_number() {return number;}
		int get_article() {return article;}
		string get_judge() {return judge;}
		string get_assused() {return assused;}

		void set_number(int s_number){number = s_number;}
		void set_article(int s_article){article = s_article;}
		void set_judge(string s_judge){judge = s_judge;}
		void set_assused(string s_assused){assused = s_assused;}

		friend ostream &operator<<(ostream &out, baza &s1) {
		
			out<<s1.get_number()<<endl;
			out<<s1.get_article()<<endl;
			out<<s1.get_judge()<<endl;
			out<<s1.get_assused()<<endl;
			return out;
		}
		friend istream &operator>>(istream &in, baza &s1) {
		
			string buf1;
			
			int num;
			int arti;
			string ju;
			string assu;

			in>>num; 
			in.ignore();
			in>>arti;
			getline(in, buf1);
			getline(in, ju);
			getline(in, assu);
			cin.ignore(1, '\n');
			
			s1.set_number(num);
			s1.set_article(arti);
			s1.set_judge(ju);
			s1.set_assused(assu);

			return in;
		}
};



