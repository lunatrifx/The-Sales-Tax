#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constants for Calculations:
	const double SALES_TAX = 0.08;

	// Variables in Calculation:
	float toynum; // number of toys
	float pricetoy; // price of toys
	double total;  // Final sales price

	// Enter the number of toys.
	cout << "Please enter the number of toys: ";
	cin >> toynum;

    // Enter the price of toys.
	cout << "Please enter the price of toys: "; 
	cin >> pricetoy;

	// Calculate Final Sales Price.
	total = (toynum * pricetoy * SALES_TAX + pricetoy * toynum);
	
	// Show Final accumulative prices.
	cout << "The total for entire purchase after sales tax is $ ";
	cout << setprecision(2) << fixed << total << endl;

	return 0; 

}
