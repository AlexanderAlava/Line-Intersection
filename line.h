//============================================================================================//
//=01/16/2017                                                                 Alexander Alava=//
//=line.h                                                                           U35432961=//
//=                                                                                          =//
//=                       This is the header file for the Line class                         =//
//============================================================================================//

#include <string>
#include <iostream>
using namespace std;

// Declaring and defining the generic run-time exception class //
class RuntimeException
{
  private:
    // Declaring a string variable //
    string errorMsg;

  public:
    // Declaring and defining the constructor of the class with parameter string reference //
    RuntimeException(const string& err)
    {
      // Assigning the value of the parameter to the data member //
      errorMsg = err;
    }
    // Declaring and defining the getMessage function that will access a private data member //
    string getMessage() const
    {
      return errorMsg;
    }
};

// Declaring and defining class EqualLines that inherits from class RuntimeException //
class EqualLines: public RuntimeException
{
  public:
    // Delcaring and defining the constructor with parameter string reference //
    EqualLines(const string& err) : RuntimeException(err){}
};

// Declaring and defining class ParallelLines that inherits from class RuntimeException //
class ParallelLines: public RuntimeException
{
  public:
    // Delcaring and defining the constructor with parameter string reference //
    ParallelLines(const string& err) : RuntimeException(err){}
};

// Declaring and defining class Line //
class Line
{
  public:
    // Declaring the constructor of the class with two double parameters //
    Line(double slope, double y_intercept): a(slope), b(y_intercept)
    {
      // Empty body constructor //
    }

    // Declaring the intersect function with parameter constant Line //
    double intersect(const Line L) const throw(ParallelLines, EqualLines);

    // Declaring and defining getSlope function that will access a private data member //
    double getSlope() const
    {
      return a;
    }

    // Declaring and defining getIntercept function that will access a private data member //
    double getIntercept() const
    {
      return b;
    }

  private:
    // Declaring two double data members //
    double a;
    double b;
};
