#include "colorpair.h"

void ColorNamesToString(const ColorPair* colorPair, char* MajorColorbuffer, char* MinorrColorbuffer)
 {
    sprintf(MajorColorbuffer, "%s", MajorColorNames[colorPair->majorColor]);
    sprintf(MinorrColorbuffer, "%s", MinorColorNames[colorPair->minorColor]);
 }


void ColourCodeManual()
 {
  int TotalColorPairNum = numberOfMajorColors * numberOfMinorColors;
  printf("COLOR CODE MANUAL\n");
	for (int ColorNum= 1 ; ColorNum <= TotalColorPairNum ; ColorNumber++)
	{
	  ColorPair colorPair = GetColorFromPairNumber(ColorNumber);
	  char MajorColorName[MAX_COLORPAIR_NAME_CHARS/2];
	  char MinorColorName[MAX_COLORPAIR_NAME_CHARS/2];  
	  ColorNamesToString(&colorPair,MajorColorName,MinorColorName);
	  printf("Pair Number : %d \n Major Color Name : %s\n  Minor Color Name : %s\n", ColorNumber, MajorColorName, MinorColorName);
	  
	}
 }