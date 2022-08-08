/*********************** ls_profiles: LinnStrument Note Profiles ***********************
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/
or send a letter to Creative Commons, PO Box 1866, Mountain View, CA 94042, USA.
***************************************************************************************************
This file defines what notes are used for each profile and gives some examples of how you can create
your own.
**************************************************************************************************/

static constexpr int NumProfiles = 15;
static constexpr int Rows = 8;
static constexpr int Columns = 16;

byte Profile1(byte row, byte col);
byte Profile2(byte row, byte col);
byte Profile3(byte row, byte col);
byte Profile4(byte row, byte col);
byte Profile5(byte row, byte col);
byte Profile6(byte row, byte col);
byte Profile7(byte row, byte col);
byte Profile8(byte row, byte col);
byte Profile9(byte row, byte col);
byte Profile10(byte row, byte col);
byte Profile11(byte row, byte col);
byte Profile12(byte row, byte col);
byte Profile13(byte row, byte col);
byte Profile14(byte row, byte col);
byte Profile15(byte row, byte col);

// Array of profile function pointers, quicker than a switch or bank of if statements
typedef byte(*ProfileFunction)(byte, byte);
ProfileFunction profiles[NumProfiles] = 
{
  &Profile1,
  &Profile2,
  &Profile3,
  &Profile4,
  &Profile5,
  &Profile6,
  &Profile7,
  &Profile8,
  &Profile9,
  &Profile10,
  &Profile11,
  &Profile12,
  &Profile13,
  &Profile14,
  &Profile15
};

// One way to define a note profile is to assign each column a note
// and then shift the notes up an octave per row
// This profile is Aeolian A Minor
byte Profile1(byte row, byte col)
{
  short note = 0;

// This "switch statement" picks a case depending on which column is being pressed 
  switch(col)
  {
    case 1: note = 9; break;  // Column 1 is midi note 9, actual note A
    case 2: note = 11; break; // Column 2 is midi note 11, actual note B
    case 3: note = 12; break;
    case 4: note = 14; break;
    case 5: note = 16; break;
    case 6: note = 17; break;
    case 7: note = 19; break;
    case 8: note = 21; break;
    case 9: note = 23; break;
    case 10: note = 24; break;
    case 11: note = 26; break;
    case 12: note = 28; break;
    case 13: note = 29; break;
    case 14: note = 31; break;
    case 15: note = 33; break;
    case 16: note = 35; break;
  }

  note += 12 * row; // For each row, starting at row 0 as the lowest, we add 12 notes (one octave)

  return note;
}


// This profile is C Major
// Here we define all of the notes in an array
static constexpr short profile2Notes[Rows][Columns] =
{
  // The first note "0" is the bottom left button on the linnstrument
  {0, 2, 4, 5, 7, 9, 11, 12, 14, 16, 17, 19, 21, 23, 24, 26},
  {12, 14, 16, 17, 19, 21, 23, 24, 26, 28, 29, 31, 33, 35, 36, 38},
  {24, 26, 28, 29, 31, 33, 35, 36, 38, 40, 41, 43, 45, 47, 48, 50},
  {36, 38, 40, 41, 43, 45, 47, 48, 50, 52, 53, 55, 57, 59, 60, 62},
  {48, 50, 52, 53, 55, 57, 59, 60, 62, 64, 65, 67, 69, 71, 72, 74},
  {60, 62, 64, 65, 67, 69, 71, 72, 74, 76, 77, 79, 81, 83, 84, 86},
  {72, 74, 76, 77, 79, 81, 83, 84, 86, 88, 89, 91, 93, 95, 96, 98},
  {84, 86, 88, 89, 91, 93, 95, 96, 98, 100, 101, 103, 105, 107, 108, 110}
  // The last note "110" is the top right button on the linnstrument
};

byte Profile2(byte row, byte col)
{
  // Here we just read which note we want from the array above
  return profile2Notes[row][col - 1];
}

// A third way to create a profile is just using an equation
byte Profile3(byte row, byte col)
{
  // This assigns each button notes 0 to 127
  return (col - 1) + 16 * row;
}

// The rest are up to you

// One way to define a note profile is to assign each column a note
// and then shift the notes up an octave per row
// This profile is Aeolian A Minor
byte Profile4(byte row, byte col)
{
  short note = 0;

// This "switch statement" picks a case depending on which column is being pressed 
  switch(col)
  {
    case 1: note = 9; break;  // Column 1 is midi note 9, actual note A
    case 2: note = 11; break; // Column 2 is midi note 11, actual note B
    case 3: note = 12; break;
    case 4: note = 14; break;
    case 5: note = 16; break;
    case 6: note = 17; break;
    case 7: note = 19; break;
    case 8: note = 21; break;
    case 9: note = 23; break;
    case 10: note = 24; break;
    case 11: note = 26; break;
    case 12: note = 28; break;
    case 13: note = 29; break;
    case 14: note = 31; break;
    case 15: note = 33; break;
    case 16: note = 35; break;
  }

  note += 4 * row; // For each row, starting at row 0 as the lowest, we add 12 notes (one octave)

  return note;
}

byte Profile5(byte row, byte col)
{
  return 5;
}

byte Profile6(byte row, byte col)
{
  return 6;
}

byte Profile7(byte row, byte col)
{
  return 7;
}

byte Profile8(byte row, byte col)
{
  return 8;
}

byte Profile9(byte row, byte col)
{
  return 9;
}

byte Profile10(byte row, byte col)
{
  return 10;
}

byte Profile11(byte row, byte col)
{
  return 11;
}

byte Profile12(byte row, byte col)
{
  return 12;
}

byte Profile13(byte row, byte col)
{
  return 13;
}

byte Profile14(byte row, byte col)
{
  return 14;
}

byte Profile15(byte row, byte col)
{
  return 15;
}