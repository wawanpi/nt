#include <iostream>
using namespace std;

//array of integres to hold valuse
int arr[20];
int camp_count = 0; //number of comparasion
int move_count = 0; //number of movment
int n;
void input() {
	while (true)
	{
		cout << "masukan panjang element array :";
		cin >> n;
		if (n <= 20)
			break;
		else
			cout << "\n Maksimum panjang array adalah 20" << endl;


	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
