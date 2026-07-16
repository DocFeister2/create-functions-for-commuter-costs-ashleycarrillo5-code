#include <iostream>
using namespace std;

const double DOLLARS_PER_GALLON = 4.49;     // cost of gas per gallon
const double MILES_PER_COMMUTE = 20.5;    // miles in one round-trip commute
const double MILES_PER_GALLON = 36;       // car fuel efficiency

double myCommutes;
double myCost;

// Converts gas dollars into number of commutes
double toCommutes(double gasDollars) {
  double gasGallons;
  double gasMiles;
  double numCommutes;

  //Converts dollars to gallons of gas
  gasGallons = gasDollars / DOLLARS_PER_GALLON;

  //Converts gallons to miles
  gasMiles = gasGallons * MILES_PER_GALLON;

  //Convert miles to commutes
  numCommutes = gasMiles / MILES_PER_COMMUTE; // TODO: That math is not right! Something is missing here...

  return numCommutes;
}

// TODO!
// Converts number of commutes into gas cost
double toDollars(double commutes)
{
  double totalMiles;
  double totalGallons;
  double totalCost;

  //Convert commutes to miles
  totalMiles = commutes * MILES_PER_COMMUTE;

  //Convert miles to gallons
  totalGallons = totalMiles / MILES_PER_GALLON;

  //Convert gallons to dollars
  totalCost = totalGallons * DOLLARS_PER_GALLON;

  return totalCost;
}

int main() 
{

  cout << "$20 will buy you: " << toCommutes(20) << " commutes." << endl;
  cout << "$100.50 will buy you: " << toCommutes(100.50) << " commutes." << endl;
  cout << "$500 will buy you: " << toCommutes(500) << " commutes." << endl;
  cout << "$8000 will buy you: " << toCommutes(8000) << " commutes." << endl;

  cout << "Enter the number of commutes you'd like to do:" << endl;
  cin >> myCommutes;

  myCost = toDollars(myCommutes);

  cout << "Great idea! Let's drive! ";
  cout << myCommutes << " commutes will cost you $" << myCost << endl;

  cout << "All done!" << endl;

  return 0;
}
