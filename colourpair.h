#include <stdio.h>
#include <assert.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

int GetPairNumberFromColor(const ColorPair* colorPair);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void ColorNamesToString(const ColorPair* colorPair, char* MajorColorbuffer, char* MinorrColorbuffer);
void ColourCodeManual();

const char* MajorColorNames[];
const char* MinorColorNames[];

int numberOfMajorColors;
int numberOfMinorColors;

#define MAX_COLORPAIR_NAME_CHARS 16

