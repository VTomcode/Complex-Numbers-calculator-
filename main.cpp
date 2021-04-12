#include "Complex.h"
#include <iostream>
using namespace std;
int main()
{
	Complex Tom;
	Complex Tomas;
	int pause = 1;
	int choose;
	cout << "  Hello this is a complex number project  kind of a calculator for complex numbers " << endl << "for every number you insert here you need to insert it like this a+bi" << endl;
	cout << "if you want to continue insert the number 1 if you want to exit the program enter 0 " << endl;
	cin >> pause;
	while (pause!=0)
	{
	
		
			cout << "enter the complex numbers ";
			cin >> Tom;
			cin >> Tomas;
			cout << "choose the type of operator you want 1 for + ,2 for -,3 for *,4 for /" << endl;
			cin >> choose;

			if (choose == 1)
			{
				cout << "the result is  :  " << Tom + Tomas << "  ";
			}
			if (choose == 2)
			{
				cout << "the result is  :  " << Tom - Tomas << "  ";
			}
			if (choose == 3)
			{
				cout << "the result is  :  " << Tom * Tomas << "  ";
			}
			if (choose == 4)
			{
				cout << "the result is  :  " << Tom / Tomas << "  ";
			}
		cout << "if you want to exit enter 0  " << endl;
		cin >> pause;
	}

	return 0;
}