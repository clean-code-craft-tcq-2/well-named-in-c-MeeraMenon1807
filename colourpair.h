#include <stdio.h>
#include <assert.h>

extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
extern const char* MajorColorNames;
extern const char* MinorColorNames;

extern enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
extern enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern int numberOfMajorColors;
extern int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

const int MAX_COLORPAIR_NAME_CHARS = 16;
