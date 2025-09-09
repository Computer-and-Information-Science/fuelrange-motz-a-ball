// Assignment 1 - Fuel Range
// TODO: Matthew Maza
#include <iostream>
// TODO: Add the "using" statement
using namespace std;
int main() {
  // TODO: Declare your variables, with comments for each
  //capacity of the fuel tank in gallons
  double capacity;

  //miles per gallon
  double mpg;
  
  //percentage filled
  int percentFull;

  // TODO: Prompt for and input the required values+
  cout << "Please input capacity of your fuel tank: ";
  cin >> capacity;
  cout << "Please input the mpg of your car: ";
  cin >> mpg;
  cout << "Please enter the percent full: ";
  cin >> percentFull;
  // TODO: Calculate the results
  
  double remainingFuel = (percentFull*capacity)/100;
  double milesLeft = remainingFuel*mpg;

  cout << " The vehicle can be driven " << milesLeft << " miles on the remaining fuel. " << endl;


  // TODO: Output the results
  
}
