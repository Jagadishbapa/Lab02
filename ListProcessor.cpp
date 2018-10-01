// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.
//#include "pch.h"
#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cout << "\n\nNumbers of Animals so Far : \n" << cows.getSize(cows) << " cows\n" << endl << endl;
	cout << "\n\nSum of The Animals so Far : \n" << cows.doubleSum(cows) << " cows\n" << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(6.969);
	cout << "cows list  :  " << cows << endl << endl;

	cout << "\n\nNumbers of Animals so Far : \n" << cows.getSize(cows) << " cows\n" << endl << endl;
	cout << "\n\nSum of The Animals so Far : \n" << cows.doubleSum(cows) << " cows\n" << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	cout << "\n\nNumbers of Animals so Far : \n" << cows.getSize(cows) << " cows\n" << endl << endl;
	cout << "\n\nSum of The Animals so Far : \n" << cows.doubleSum(cows) << " cows\n" << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	cout << "\n\nNumbers of Animals so Far : \n" << cows.getSize(cows) << " cows\n" << horses.getSize(horses) << " horses\n" << endl << endl;
	cout << "\n\nSum of The Animals so Far : \n" << cows.doubleSum(cows) << " cows\n" << horses.doubleSum(horses) << " horses\n" << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cows.insertAsLast(101.2345);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	cout << "\n\nNumbers of Animals so Far : \n" << cows.getSize(cows) << " cows\n" << horses.getSize(horses) << " horses\n" << endl << endl;
	cout << "\n\nSum of The Animals so Far : \n" << cows.doubleSum(cows) << " cows\n" << horses.doubleSum(horses) << " horses\n" << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "\n\nNumbers of Animals so Far : \n" << cows.getSize(cows) << " cows\n" << horses.getSize(horses) << " horses\n" << pigs.getSize(pigs) << " pigs\n" << endl << endl;
	cout << "\n\nSum of The Animals so Far : \n" << cows.doubleSum(cows) << " cows\n" << horses.doubleSum(horses) << " horses\n" << pigs.doubleSum(pigs) << " pigs\n" << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "\n\nNumbers of Animals so Far : \n" << cows.getSize(cows) << " cows\n" << horses.getSize(horses) << " horses\n" << pigs.getSize(pigs) << " pigs\n" << endl << endl;
	cout << "\n\nSum of The Animals so Far : \n" << cows.doubleSum(cows) << " cows\n" << horses.doubleSum(horses) << " horses\n" << pigs.doubleSum(pigs) << " pigs\n" << endl << endl;


	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "\n\nEnded with :\n" << cows.getSize(cows) << " Cows\n" << horses.getSize(horses) << " Horses\n" << pigs.getSize(pigs) << " Pigs" << endl << endl;
	cout << "\n\nEnded with Sums : \n" << cows.doubleSum(cows) << " Cows Sum\n" << horses.doubleSum(horses) << " Horses Sum\n" << pigs.doubleSum(pigs) << " Pigs Sum\n" << endl << endl;
	
	
	cout << "End of code" << endl;

	return 0;
}

