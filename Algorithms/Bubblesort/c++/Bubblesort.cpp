#include "stdafx.h"
#include "iostream"

using namespace System;
using namespace std;

int a[5];
void print(int v[5]);
void read(int v[5]);
void swap(int *v1, int *v2);
void BubbleSort(int v[5]);

void main()
{
    // Reading array values from keyboard
 read(a);
 // Print Array
 print(a);
 // Sort Array
 BubbleSort(a);
 // Printing Sorted Array
 print(a);
 Console::ReadLine();
}

void BubbleSort(int v[5])
{
 for(int k = 5 ; k > 1 ; k--)
 {
   for(int l = 1 ; l < k ; l++)
   {
      if(a[l-1] > a[l]){
         swap(&a[l-1],&a[l]);
      }
   }
 }
}

void swap(int* v1, int* v2)
{
 int temp = *v1;
 *v1 = *v2;
 *v2 = temp;
}

void read(int v[5])
{
 cout << "Reading values from Keyboard" << endl;
 for(int i=0 ; i<5 ; i++){
 cout << "a["<<i<<"]=";
 cin >> a[i];
 }
}

void print(int v[5])
{
 cout << "Printing Arrays" << endl;
 for(int i=0 ; i<5 ; i++){
 cout << a[i] <<  endl;
 }
}

