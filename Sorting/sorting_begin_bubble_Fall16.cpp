#include<iostream>
#include<string>

using namespace std;
#define MAX 10

//Function to sort array of integers in ascending order
//using the Bubble Sort algorithm
void bubblesort(int nums[]);

//Improved function to sort array of integers in ascending order
//using the Bubble Sort algorithm
void betterBubbleSort(int nums[]);

int main(){
  // Initialize the array of 10 integers
  int n[MAX] = { 83, 24, 56, 932, 86, 10, 0, 478, 136, 41 };
  int m[MAX] = { 83, 24, 56, 932, 86, 10, 0, 478, 136, 41 };
  // Display unsorted array of numbers
  for (int x = 0; x < MAX; x++)
    cout << n[x] << '\t';
  cout << endl << endl;

  // Sort the array using first function
  bubblesort(n);

  // Display unsorted array of numbers
  for (int x = 0; x < MAX; x++)
    cout << m[x] << '\t';
  cout << endl << endl;
  // Sort the array
  betterBubbleSort(m);


  //Display sorted array
  for (int x = 0; x < MAX; x++)
    cout << m[x] << '\t';
  cout << endl << endl;
  system("pause");
  return 0;
}

void bubblesort(int nums[]){
	



















}

void betterBubbleSort(int nums[]){
	























}
