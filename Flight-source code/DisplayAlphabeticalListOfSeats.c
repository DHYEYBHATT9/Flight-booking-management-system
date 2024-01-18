#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "DisplayAlphabeticalListOfSeats.h"
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


#define MAXVALUEALPHABET   25
#define MIN                 0
#define MAXSEATS           12




void DisplayAlphabeticalListOfSeats(CA* Seats)
{
	char ALPHAUPPERCASE = 'A';
	char ALPHALOWERCASE = 'a';

	for (int i = MIN;i < MAXVALUEALPHABET;i++)                                // for loop checks for all the alphbetic letter starting from A
	{
		for (int j = MIN; j < MAXSEATS; j++)                                 // for loop inside the previous for to check for all seats 
		{

			if ((Seats[j].Lastname[MIN] == ALPHAUPPERCASE + i) || (Seats[j].Lastname[MIN] == ALPHALOWERCASE + i))  //if the lastname is the required alphabetic character 
			{

				printf("%d \tLASTNAME:%s \tFIRSTNAME:%s\n", Seats[j].SeatID, Seats[j].Lastname, Seats[j].Firstname);                  //prints the lastname and firstname of seat holder
			}
		}
	}
}
