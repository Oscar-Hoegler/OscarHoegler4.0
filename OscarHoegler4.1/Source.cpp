/* Oscar Hoegler, September 15th, Laboratory 4.0
 * OscarHoegler4.1.cpp, Calculate that dank tax*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	//variable initialization
	double price,taxRate,workingprice;
	//Requests (and recieves) the price of the good
	cout << "What is the price of your good? "; cin >> price;
	//Requests (and recieves) the tax placed upon the good
	cout << "What is the current tax rate for that good(%)? "; cin >> taxRate;
	//This should round the final price to the nearest 100th, rounding up if it is greater than 4
	//Does such by multiplying by 1000, turning it to an int, mod10>4?number+(10-mod10):number-mod10, divides number by 100
	workingprice = (price * taxRate/100)*1000;
	(int)(workingprice) % 10 > 4 ? workingprice += (10 - (int)workingprice % 10) : workingprice -= (int)workingprice % 10;
	workingprice /= 1000;
	//Puts out the cost of the good with the tax, setting the precision to 2 decimal places

	cout << "The amount of tax applied to your good is " << setprecision(2) << workingprice;
	return 0;
}