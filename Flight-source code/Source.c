#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>                                                                      // header files
#include <stdlib.h>
#include <string.h>
#include "../ASSIGNMENT 4B/CustomerToSeatAssignment.h"                                 //All the header files needed.
#include "../ASSIGNMENT 4B/DeleteSeatAssignment.h"
#include "../ASSIGNMENT 4B/DisplayAlphabeticalListOfSeats.h"
#include "../ASSIGNMENT 4B/DisplayListOfEmptySeats.h"
#include "../ASSIGNMENT 4B/Displaymenu.h"
#include "../ASSIGNMENT 4B/DisplayNumberOfEmptySeats.h"
#include "../ASSIGNMENT 4B/Quit.h"
#include "../ASSIGNMENT 4B/FilePrint.h"
#include "Structure.h"                                                                 //struct file
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

#define ADD                 1                                                     //Define part
#define MIN                 0
#define MAXSEATS           12
#define MAXLENGTH         100
#define TWO                 2
#define MAXVALUEALPHABET   25

//typedef struct ColossusAirlines                                                   //Structure intialization with giving it a short form as CA
//{
//	int SeatID;
//	char Assign;
//	char Lastname[MAXLENGTH];
//	char Firstname[MAXLENGTH];
//
//}CA;

int FilePrint(CA*);                                                             //All the Functions and their prototypes
void Displaymenu();
void DisplayNumberOfEmptySeats(CA*);
void DisplayAlphabeticalListOfSeats(CA*);
void CustomerToSeatAssignment(CA*);
void DeleteSeatAssignment(CA*);
void DisplayListOfEmptySeats(CA*);
void Quit(CA*);



int main(void)                                                                  // Start of program
{
     CA Seats[MAXSEATS];
	 {
		 for (int i = MIN;i < MAXSEATS;i++)                                     //for loop to assign the initial values inside structure
		 {
			 Seats[i].SeatID = i + ADD;
			 Seats[i].Assign = 'N';
			 strncpy(Seats[i].Lastname, "", MAXLENGTH);
			 strncpy(Seats[i].Firstname, "", MAXLENGTH);
		 }
	 };
	 //display
	 int loopCondition = ADD;
	 while (loopCondition)                                                     //While loop 
	 {
		 Displaymenu();                                                        //function to Displays the menu
		 char ch[TWO];
		 printf("Enter the option to be executed: \n");
		 scanf_s("%s", ch, TWO);
		 switch (ch[MIN])
		 {
		 case 'a':
			 DisplayNumberOfEmptySeats(Seats);                                 //function for number of empty seats
			 break;
		 case 'b':
			 DisplayListOfEmptySeats(Seats);                                   //Function to diplay list of empty seats
			 break;
		 case 'c':
			 DisplayAlphabeticalListOfSeats(Seats);                            //function to display alphabetical order of seats
			 break;
		 case 'd':
			 CustomerToSeatAssignment(Seats);                                  // function for seat assignment
			 break;
		 case 'e':
			 DeleteSeatAssignment(Seats);                                      // Function to delete the alloted seat
			 break;
		 case 'f':
			 Quit(Seats);                                                      // function to exit the program
			 loopCondition = MIN;
			 break;
		 }
	 }
	return 0;                                                                  // end of program
}

