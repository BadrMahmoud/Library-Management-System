#include<iostream>
using namespace std;

class User  //librarians and readers
{
	int age;
	int id;
	string phone;
	string name;
	string date;
public:
	User()      //default constructor
	{
		age = 0;
		id = 0;
		phone = "";
		name = "";
		date = "";
	}
	void setuser(int AGE,int ID,string PHONE,string NAME,string DATE)		//constructor with parameters
	{
		age = AGE;
		id = ID;
		phone = PHONE;
		name = NAME;
		date = DATE;
	}


};

class Librarian: public User   // inheritance from user
{
	int numofbooks;
public:
	void setLibrarian(int NUMOFBOOKS) //set librarian data
	{
		numofbooks = NUMOFBOOKS;
	}
	
};

class Readers: public User, public Librarian
{
	string type;
public:
	void setreader(string TYPE)
	{
		type = TYPE;
	}

};
