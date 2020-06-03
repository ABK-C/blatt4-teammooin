
#include<iostream>
#include<cmath>
using namespace std;

static int I = 2;

double zufall(int a, int c, int m) {
  I = (a * I + c) % (m);
  return double(I) / double(m);
}


  int main () {

    int a, c, m, n;
    double Kreis = 0;
    //Test1
    //a = 5;
    //c = 3;
    //m = 16;
    //n = 100;
   
    //Test2
    //a = 205;
    //c = 29573;
    //m = 139968;
    //n = 100;
  
  for (int N = 0; N < n; ++N) {
  if (pow(zufall(a, c, m), 2) + pow(zufall(a, c, m), 2) < 1) {
    ++Kreis;
   }
  }

    double p = M_PI / 4;
    double Ewert = p * n;
    double varianz = p * (1 - p) * n;
    double pi = 4 * (Kreis / n);
    double sigma = 4 * sqrt(varianz)/n;

    //Überprüfung für Test1 und Test2
    //cout << pi << endl;

    

    
}

