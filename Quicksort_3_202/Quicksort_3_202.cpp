#include <iostream>
using namespace std;

//array of integres to hold valuse
int arr[20];
int cmp_count = 0; //number of comparasion
int mov_count = 0; //number of movment
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

	cout << "\n==============" << endl;
	cout << "\nEnter array element" << endl;
	cout << "===================" << endl;


	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

// swap the element at index x with the element at index y
void swap(int x, int y)
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)                                                 // Langkah algoritma No. 1
		return;

	// Partition the list into two parts:
	// One containing element less that or equal to privat
	// Outher containing elements greater than pivot
	pivot = arr[low];                                               // Langkah algoritma No. 2
	i = low + 1;                                                    // Langkah algoritma No. 3
	j = high;                                                       // Langkah algoritma No. 4
	    while (i <= j)                                                  // Langkah algoritma No. 10
    {
        // search for an element greather than pivot
        while ((arr[i] <= pivot) && (i <= high))                    // Langkah algoritma No. 5
        {
			i++;//langkah6                                     // Langkah algoritma No. 6
			cmp_count++;
		}
		cmp_count++;
		// search for an element less than or equal to pivot
		while ((arr[j] > pivot) && (j >= low))                       // Langkah algoritma No. 7
		{
			j--;                                                     // Langkah algoritma No. 8
			cmp_count++;
		}
		cmp_count++;
		// if the greater element is on the left of the element
		if (i < j)                                                          // Langkah algoritma No. 9
		{
			// swap the element at index i with the element at index j
			swap(i, j);
			mov_count++;
		}
}
//j now containt the index of the last element in the sort list
	if (low <j)//langkah11

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
