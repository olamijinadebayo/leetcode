#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void display(int array[], int n) {
   for (int i = 0; i < n; i++)
      cout << array[i] << " ";
}

void chooseKItems(int array[], int n, int k) {        //it will choose k items from the array
   int i;
   int output[k];
   for (i = 0; i < k; i++)
      output[i] = array[i];

   srand(time(NULL));        //use time function to get different seed value

   while(i < n) {
      int j = rand() % (i+1);         //random index from 0 to i

      if (j < k)          //copy ith element to jth element in the output array
         output[j] = array[i];
      i++;
   }

   cout << "K-Selected items in the given array: ";
   display(output, k);
}

int main() {
   int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
   int n = 12;
   int k = 6;
   chooseKItems(array, n, k);
}