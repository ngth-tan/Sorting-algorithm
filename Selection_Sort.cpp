#include <iostream>
using namespace std;

int luachon(int a[], int n) {
   for(int i = 0; i < n - 1; i++) {
      int j = i;
      for(int k = i + 1; k < n; k++) {
         if(a[j] > a[k]) {
            j = k;
         }
         if(j != i) {
            swap(a[i], a[j]);
         }
      }
   }
   return a[n];

}