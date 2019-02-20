#include<iostream>
#include<string>

using namespace std;
#define MAX 10
void selectionSort(int nums[], int size);

int main(){
  int n[MAX] = { 83, 24, 56, 932, 86, 10, 0, 478, 136, 41 };
  // Display unsorted array of numbers
  for (int x = 0; x < MAX; x++)
    cout << n[x] << '\t';
  cout << endl;
  // Sort the array
  selectionSort(n, MAX);

  // Display sorted array of numbers
  for (int x = 0; x < MAX; x++)
    cout << n[x] << '\t';
  cout << endl;

  system("pause");
  return 0;
}


void selectionSort(int nums[], int size){
  


}



