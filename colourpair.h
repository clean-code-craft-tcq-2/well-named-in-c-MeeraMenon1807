#include <stdio.h>
#include <assert.h>

int GetPairNumberFromColor(const ColorPair* colorPair);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
const char* MajorColorNames;
const char* MinorColorNames;

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

int numberOfMajorColors;
int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

const int MAX_COLORPAIR_NAME_CHARS = 16;
