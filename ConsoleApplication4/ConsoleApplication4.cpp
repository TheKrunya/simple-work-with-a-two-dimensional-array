#include<iostream>
using namespace std;

void fill(int** array, int sizey, int sizex)
{
	int* p_array = (int*)array;
	for (int y = 0; y < sizey; y++)
	{
		for (int x = 0; x < sizex; x++)
		{
			p_array[y * sizex + x]=rand()%100;
		}
	} 

}

void display(int** array, int sizey, int sizex)
{
	int* p_array = (int*)array;
	for (int y = 0; y < sizey; y++)
	{
		for (int x = 0; x < sizex; x++)
		{
			cout << p_array[y * sizex + x] << "\t";
		}
		cout << "\n";
	}

}

void main(void)
{
	int table[5][4];
	fill((int**)table, 5, 4);
	display((int**)table, 5, 4);
}
