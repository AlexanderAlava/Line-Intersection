//=====================================================================================//
//=01/16/2017                                                          Alexander Alava=//
//=lineTest.cpp                                                              U35432961=//
//=                                                                                   =//
//=                    This is the driver file for the Line class                     =//
//=====================================================================================//

#include <iostream>
#include "line.h"

int main()
{
  // Creating Line objects that will be used for testing //
  Line myLine(3.5, 6.8);
  Line myLine2(3.5, 6.8);
  Line myLine3(3.5, 9.3);
  Line myLine4(7.316, 3.54);
  Line myLine5(7.316, 3.54);
  Line myLine6(7.316, 19.82);
  Line myLine7(1.53, -12.66);
  Line myLine8(-18.325, 0.857);
  Line myLine9(-4.714, -23.09);

  // Intersecting lines that will throw an exception //

  cout << "\nIntersection of myLine and myLine2: ";
  myLine.intersect(myLine2);

  cout << "\nIntersection of myLine and myLine3: ";
  myLine.intersect(myLine3);

  cout << "\nIntersection of myLine4 and myLine5: ";
  myLine4.intersect(myLine5);

  cout << "\nIntersection of myLine4 and myLine6: ";
  myLine4.intersect(myLine6);

  // Intersecting lines that will return a value //

  cout << "\nIntersection of myLine and myLine4 -- X coordinate: " << myLine.intersect(myLine4) << endl;
  cout << "\nIntersection of myLine3 and myLine4 -- X coordinate: " << myLine3.intersect(myLine4) << endl;
  cout << "\nIntersection of myLine4 and myLine7 -- X coordinate: " << myLine4.intersect(myLine7) << endl;
  cout << "\nIntersection of myLine6 and myLine7 -- X coordinate: " << myLine6.intersect(myLine7) << endl;
  cout << "\nIntersection of myLine7 and myLine8 -- X coordinate: " << myLine7.intersect(myLine8) << endl;
  cout << "\nIntersection of myLine8 and myLine9 -- X coordinate: " << myLine8.intersect(myLine9) << endl;

  return 0;
}
