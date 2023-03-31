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
	if (low < j)//langkah11
		//move to the pivot to its correct positions in the list
	{
		swap(low, j);
		mov_count++;
	}
	//sort the list on the left of pivot using quick sort
	q_short(low, j - 1);//Langkah 12
	//sort the list on the right of pivot using quick sort
	q_short(low, j + 1);//Langkah 13
}
void display() {
	cout << "\n================" << endl;
	cout << "\n-sorted array" << endl;
	cout << "\n================" << endl;
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n\nNumber of comparasions:" << cmp_count << endl;
	cout << "Number of data movmen::" << cmp_count << endl;
	}

int main() {
	input();
	//sort the array using quick sort
	q_short(0, n - 1);
	display();
	system("pause");

	return 0;
}
