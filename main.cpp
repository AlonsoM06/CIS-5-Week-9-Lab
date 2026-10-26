#include <iostream>
using std::cout;
using std::endl;

// Lab 9 — Alonso Martinez
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.



double average (const int a[], int n) {
if (n==0) {
  return 0;
}
int sum = 0;
for (int i=0; i < n; ++i) {
  sum += a[i];
}
return sum * 1.0/ n ;
}

void printSummary(double avg) {
  cout << "Average: " << avg << endl;
}

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  double avg = average (scores, N);
  printSummary(avg);
  
  return 0;
}

  

