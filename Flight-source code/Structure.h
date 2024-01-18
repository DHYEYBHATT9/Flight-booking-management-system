#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//***************************************************************************
//PROG71985 -- DHYEY BHATT -- FALL 2022 -- ASSIGNMENT 4

//ASSIGNMENT 4 -- QUESTION 2
//***************************************************************************






#define MAXLENGTH 100




typedef struct ColossusAirlines                                                   //Structure intialization with giving it a short form as CA
{
	int SeatID;
	char Assign;
	char Lastname[MAXLENGTH];
	char Firstname[MAXLENGTH];

}CA;
