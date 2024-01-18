#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>                                           //header files
#include "FilePrint.h"
#include "Structure.h"
//***************************************************************************
//PROG71985 -- DHYEY BHATT -- FALL 2022 -- ASSIGNMENT 4

//ASSIGNMENT 4 -- QUESTION 2

//The Colossus Airlines fleet consists of one plane with a seating capacity of
//12. It makes one flight daily.Write a seating reservation program with the
//following features :

//(a)The program uses an array of 12 structures.Each structure should hold
//a seat identification number, a marker that indicates whether the seat is
//assigned, the last name of the seat holder, and the first name of the seat
//holder.

//(b)The program displays the following menu :
// **********************************************
//To choose a function, enter its letter label :
//a) Show number of empty seats
//b) Show list of empty seats
//c) Show alphabetical list of seats
//d) Assign a customer to a seat assignment
//e) Delete a seat assignment
//f) Quit
//***********************************************

//(c) The program successfully executes the promise of each command on its
//menu.

//(d)Choices d) and e) require additional input, and each should enable the
//user to enter data or abort the action.

//(e)After executing a particular function(options a) - e)), the program should
//print the menu againand wait for input.Upon selecting f), the program
//should exit.

//(f)Data is saved in a file between runs.The nameand format of the file need
//not be known to the user.When the program is started(or restarted), it
//will first attempt to read the data fileand populate itself with that data;
//if there is no existing datafile, the program will create a new (empty)
//datafile with no data populated.

//********************************************************************************


#define MIN        0                                         //define
#define MAXSEATS  12

int FilePrint(CA* Seats)
{
	//int i;
	//char booked = 'Y';
	//char notbooked = "N";
	FILE* fSeatMap;                                                                //created a file for seatmap

	fSeatMap = fopen("SeatMap.txt", "w");                                          //opened the file in write mode

	if (fSeatMap == NULL)
	{
		return 0;
	}

	for (int i = MIN;i < MAXSEATS; i++)
	{
		//if (Seats[i].Assign == 'Y')

		fprintf(fSeatMap, "SEAT NUMBER: %d\n", Seats[i].SeatID);               //prints seat number.
		fprintf(fSeatMap, "LASTNAME: %s\n", Seats[i].Lastname);                //prints lastname.
		fprintf(fSeatMap, "FIRSTNAME: %s\n", Seats[i].Firstname);              //prints firstname.
		fprintf(fSeatMap, "BOOKING STATUS %c\n", Seats[i].Assign);             //prints Y if booked.
		fprintf(fSeatMap, "---------------------------------------------------\n");


	}

	fclose(fSeatMap);

}