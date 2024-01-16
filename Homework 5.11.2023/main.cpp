#include<iostream>
using namespace std;
#define TASK_NO_1
//#define TASK_NO_2
//#define TASK_NO_3
//#define TASK_NO_4
int main()
{
#ifdef TASK_NO_1
	//setlocale(LC_ALL, "");
	double fractional_number = 0;
	cout << "Converting a number to currency format.\n";
	cout << "Enter a fractional number: ";
	cin >> fractional_number;
	int transformation = fractional_number*100;
	cout << fractional_number << " rub. - " << "this " << transformation/100<<" rub. "<<transformation%100<<" kop.";

#endif // TASK_NO_1
#ifdef TASK_NO_2
	double Notebook_price = 0;
	double Pensil_price = 0;
	int Number_of_notebooks = 0;
	int Number_of_pensil = 0;
	cout << "Calculating the purchase price\n";
	cout << "Enter the initial data:\n";
	cout << "Notebook price (rub.)";
	cin >> Notebook_price;
	cout << "Number of notebooks: ";
	cin >> Number_of_notebooks;
	cout << "Pencil price (rub.)";
	cin >> Pensil_price;
	cout << "Number of Pensil: ";
	cin >> Number_of_pensil;
	cout << "Purchase cost: " << Notebook_price * Number_of_notebooks + Pensil_price * Number_of_pensil;



#endif // TASK_NO_2
#ifdef TASK_NO_3
	double Notebook_price = 0;
	double Cover_price = 0;
	int Number_of_sets = 0;

	cout << "Calculating the purchase price\n";
	cout << "Enter the initial data:\n";
	cout << "Notebook price (rub.) ";
	cin >> Notebook_price;
	cout << "Cover price (rub.): ";
	cin >> Cover_price;
	cout << "Number of sets (pc.): ";
	cin >> Number_of_sets;
	cout << "Purchase coast: " << (Notebook_price + Cover_price) * Number_of_sets << " rub.";

#endif // TASK_NO_3
#ifdef TASK_NO_4
	double Distance = 0;
	double Consumption = 0;
	double Price = 0;
	cout << "Calculating the coast of travel to the cottage and back \n";
	cout << "Distance to the cottage (km) : ";
	cin >> Distance;
	cout << "Gasoline consumption (liters per 100 km): ";
	cin >> Consumption;
	cout << "Price of a liter of gasoline (rub.): ";
	cin >> Price;
	cout << "A trip to the cottage and back will coast " << Distance * (Consumption / 100) * Price << " (rub.)";
#endif // TASK_NO_4
	
	return 0;
}