// 03.Exercise.TextFiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Friend
{
	const char* Name;
	long long TelephoneNumber;
	const char* Email;
};

#define NUM_FRIENDS 5

void CreateAgendaFile(const char* filename, Friend* pFriends, int numFriends)
{
	//TODO:
	// -Create a text file of name <filename>
	// -Write the <numFriends> elements in array <pFriends> to the file with this exact format:
	
	//Agenda
	//{
	//  {"Tom",654432343,"tom@gmail.com"}
	//  {"Maider",98654587,"namajunas@gmail.com"}
	//  ...
	//}
}

int main()
{
	Friend myFriends[NUM_FRIENDS];

	myFriends[0].Name = "Tom";
	myFriends[0].TelephoneNumber = 654432343;
	myFriends[0].Email = "tom@gmail.com";
	myFriends[1].Name = "Maider";
	myFriends[1].TelephoneNumber = 98654587;
	myFriends[1].Email = "namajunas@gmail.com";
	myFriends[2].Name = "Mariano";
	myFriends[2].TelephoneNumber = 911245785;
	myFriends[2].Email = "mariano@pp.es";
	myFriends[3].Name = "Patxi";
	myFriends[3].TelephoneNumber = 945789854;
	myFriends[3].Email = "patxi@yahoo.es";
	myFriends[4].Name = "Rosalía";
	myFriends[4].TelephoneNumber = 978978541;
	myFriends[4].Email = "rosalia@hotmail.com";

	CreateAgendaFile("agenda.txt", myFriends, NUM_FRIENDS);

    return 0;
}

