
#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;

static int I = 2;
ofstream fout("tabelle.txt");


double zufall(int a, int c, int m) {
  I = (a * I + c) % (m);
  return double(I) / double(m);
}



  void extra(int a, int c, int m, int n) {

    double Kreis;
    double p = M_PI / 4;
    double Ewert = p * n;
    double varianz = p * (1 - p) * n;
    double pi = 4 * (Kreis / n);
    double sigma = 4 * sqrt(varianz)/n;
    
  
   for (int N = 0; N < n; ++N) {
   if (pow(zufall(a, c, m), 2) + pow(zufall(a, c, m), 2) < 1) {
    ++Kreis;
    }
   }
  
   fout << n << " " << Ewert << " " << varianz << " " << "|" << " " << Kreis << " " << pi << " " << sigma << endl;

   return;
  }

  int main() {

    vector<int> n{100, 10000, 100000, 1000000};

    for (int d : n) {
      extra(5, 3, 16, d);
      extra(205, 29573, 139968, d);
    }
    fout.close();
  }

  

    

    


