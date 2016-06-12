#include<iostream>
#include<string>
using namespace std;

class User  //librarians and readers    ID,Password,Type,FirstName,LastName,Address,CellPhone,Email,isBlocked
{
	int id;
	string password;
	string type;
	string firstname;
	string lastname;
	string address;
	string cellphone;
	string email;
	string isblocked;

public:
	void setuser(int ID,string PASSWORD,string TYPE,string FIRSTNAME,string LASTNAME,string ADDRESS,string CELLPHONE,string EMAIL,string ISBLOCKED)		//constructor with parameters
	{
		id = ID;
		password = PASSWORD;
		type = TYPE;
		firstname = FIRSTNAME;
		lastname = LASTNAME;
		address = ADDRESS;
		cellphone = CELLPHONE;
		email = EMAIL;
		isblocked = ISBLOCKED;
	}


};

class Request   //ID, ISBN, Request date, Due date
{
	int id;
	string type;   //Buy or loan
	string isbn;
	string request_date;
	string due_date;
public:
	void setrequest(int ID,string TYPE,string ISBN,string REQUEST_DATE,string DUE_DATE)		//constructor with parameters
	{
		id = ID;
		type = TYPE;
		isbn = ISBN;
		request_date = REQUEST_DATE;
		due_date = DUE_DATE;
	}

};

class Books   //(ISBN, Title, Author, Location, Number of Copies, Genre and price).
{
	string isbn;
	string title;
	string author;
	string location;
	string numofcopies;
	string genre;
	int price;
public:
	void setbook(string ISBN,string TITLE,string AUTHOR,string LOCATION,string NUMOFCOPIES,string GENRE,int PRICE)
	{
		isbn = ISBN;
		title = TITLE;
		author = AUTHOR;
		location = LOCATION;
		numofcopies = NUMOFCOPIES;
		genre = GENRE;
		price = PRICE;
	}


};

