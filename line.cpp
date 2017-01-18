//============================================================================================//
//=01/16/2017                                                                 Alexander Alava=//
//=line.cpp                                                                         U35432961=//
//=                                                                                          =//
//=                   This is the implementation file for the Line class                     =//
//============================================================================================//

#include <iostream>
#include "line.h"

// Defining the intersect function //
double Line::intersect(const Line L) const throw(ParallelLines, EqualLines)
{
  // Declaring and initializing three double variables //
  double xValue = 0;
  double interceptAdd = 0;
  double slopeAdd = 0;

  // Establishing a try statement in order to throw specific exceptions //
  try
  {
    // Checking if the lines are equal //
    if (this->getSlope() == L.getSlope() && this->getIntercept() == L.getIntercept())
    {
      // Throwing exception EqualLine //
      throw EqualLines("The lines are equal: infinite intersection.\n");
    }
    // Checking if the lines are parallel //
    else if (this->getSlope() == L.getSlope())
    {
      // Throwing exception ParallelLines //
      throw ParallelLines("The lines are parallel: no intersection.\n");
    }
    else
    {
      // Calculatting the addition of the intercepts and assigning it to interceptAdd //
      interceptAdd = (L.getIntercept() - this->getIntercept());

      // Calculatting the addition of the slopes and assigning it to slopeAdd //
      slopeAdd = (this->getSlope() - L.getSlope());

      // Calculating the x intercept value and assigning it to xValue //
      xValue = interceptAdd / slopeAdd;
    }
  }
  // Catching EqualLines exception //
  catch(EqualLines &el)
  {
    // Printing the custom error message //
    cout << el.getMessage();
  }
  // Catching ParallelLines exception //
  catch(ParallelLines &pl)
  {
    // Printing the custom error message //
    cout << pl.getMessage();
  }

  return xValue;
}
