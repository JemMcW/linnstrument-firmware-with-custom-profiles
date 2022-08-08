/*********************** ls_profile_leds: LinnStrument LED Profiles ***********************
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/
or send a letter to Creative Commons, PO Box 1866, Mountain View, CA 94042, USA.
***************************************************************************************************
This file defines what led colours are used for each profile
**************************************************************************************************/

#ifndef H_LED_PROFILES_H
#define H_LED_PROFILES_H

#include "ls_profiles.h"
// the constants below are included from the file above
// static constexpr int NumProfiles = 15;
// static constexpr int Rows = 8;
// static constexpr int Columns = 16;


short ProfileLed1(short displayedNote);
short ProfileLed2(short displayedNote);
short ProfileLed3(short displayedNote);
short ProfileLed4(short displayedNote);
short ProfileLed5(short displayedNote);
short ProfileLed6(short displayedNote);
short ProfileLed7(short displayedNote);
short ProfileLed8(short displayedNote);
short ProfileLed9(short displayedNote);
short ProfileLed10(short displayedNote);
short ProfileLed11(short displayedNote);
short ProfileLed12(short displayedNote);
short ProfileLed13(short displayedNote);
short ProfileLed14(short displayedNote);
short ProfileLed15(short displayedNote);

// Array of ProfileLed function pointers, quicker than a switch or bank of if statements
typedef short(*ProfileLedFunction)(short);
ProfileLedFunction profile_led[NumProfiles] = 
{
  &ProfileLed1,
  &ProfileLed2,
  &ProfileLed3,
  &ProfileLed4,
  &ProfileLed5,
  &ProfileLed6,
  &ProfileLed7,
  &ProfileLed8,
  &ProfileLed9,
  &ProfileLed10,
  &ProfileLed11,
  &ProfileLed12,
  &ProfileLed13,
  &ProfileLed14,
  &ProfileLed15
};

short ProfileLed1(short displayedNote)
{
  short colour = 0;

  if (displayedNote % 12 == 0){colour = COLOR_YELLOW;} // C
  else if ((displayedNote + 1) % 12 == 0){colour = COLOR_ORANGE;} // B
  else if ((displayedNote - 1) % 6 == 0){colour = COLOR_MAGENTA;} // G
  else if ((displayedNote + 1) % 6 == 0){colour = COLOR_CYAN;} // F
  else if ((displayedNote) % 4 == 0){colour = COLOR_BLUE;} // E
  else if ((displayedNote % 3) == 0){colour = COLOR_RED;} // A
  else if ((displayedNote) % 2 == 0){colour = COLOR_GREEN;} // D

  return colour;
}

short ProfileLed2(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

short ProfileLed3(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

short ProfileLed4(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

short ProfileLed5(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

short ProfileLed6(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

short ProfileLed7(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

short ProfileLed8(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

short ProfileLed9(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

short ProfileLed10(short displayedNote)
{
    return ProfileLed1(displayedNote);
}
short ProfileLed11(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

short ProfileLed12(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

short ProfileLed13(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

short ProfileLed14(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

short ProfileLed15(short displayedNote)
{
    return ProfileLed1(displayedNote);
}

#endif