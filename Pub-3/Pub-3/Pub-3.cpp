
#include "stdafx.h"
#include "CarmelEmeraledRizilng.h"
#include "GolanSmadar.h"
#include "Kinanti.h"
#include "ShatoMargo.h"
#include "YardenKavarneSovinyon.h"
#include "Beer.h"
#include "YardenMountHermonRed.h"
#include "YardenSaredona.h"

const int SHELF_SIZE = 11;
int main()
{
	Drink* stock[SHELF_SIZE];
	stock[0] = new CarmelEmeraledRizilng(1986);
	stock[1] = new GolanSmadar(1989);
	stock[2] = new YardenMountHermonRed(1994);
	stock[3] = new YardenSaredona(1997);
	stock[4] = new YardenKavarneSovinyon(1997);
	stock[5] = new Kinanti(1997);
	stock[6] = new ShatoMargo(1997);
	stock[7] = new Beer("Heineken");
	stock[8] = new Beer("Goldstar");
	stock[9] = new Beer("Maccabi");
	stock[10] = new Beer("Tuborg");
	// creates the stock of drinks (array of pointers of drinks that containe all the available drinks to order, the size sets by a int global variable
	int choise = 0;
	cout << "what can I get you,sir? (0 - list options)\n" << endl;
	cin >> choise;
	// reads the choise of the user and put it in choise variable
	Drink* lastDrink = nullptr;
	while (choise != 100)
	{
		if (choise == 0)
		{
			cout << "(0)	list options" << endl;
			for (int i = 1; i <= SHELF_SIZE; i++)
				cout << "(" << i << ")	" << stock[i - 1]->getName() << endl;
			cout << "(99)	How did you prepare my last drink?" << endl;
			cout << "(100)	Leave the bar" << endl;
		}
		// if choise is 0, print all the options
		else if (choise == 99)
		{
			if (lastDrink != nullptr)
				lastDrink->prepare();
			else
				cout << "Order a drink first!" << endl;
		}
		// if choise is 99 print the prepare method of the last drink ordered
		else if (choise > 0 && choise < 99)
		{
			cout << "One " << stock[choise - 1]->getName() << " coming up, sit." << endl;
			lastDrink = stock[choise - 1];
		}
		// any other choise (1-98) will order the drink that is shown in the menu next to this number
		cout << "what can I get you,sir? (0 - list options)\n" << endl;
		cin >> choise;
	}
	cout << "Bar is closed. Good night." << endl;
	// when the user type 100, he leaves the bar and stop the while loop.

	return 0;
}


