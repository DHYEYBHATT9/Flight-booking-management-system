#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>                    // header files
#include "Quit.h"
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




void Quit(CA* Seats)
{
	int i;
	printf("THANKS FOR CHOOSING COLOSSUS AIRLINES : VISIT AGAIN");                     //print a exit statement
	i = FilePrint(Seats);                                                              //Finally FilePrint function assign the values of seat map to the file created

}