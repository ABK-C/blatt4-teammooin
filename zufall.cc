
#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

static int I = 2;

double zufall(int a, int c, int m) {
  I = (a * I + c) % (m);
  return double(I) / double(m);
}


  int main () {

    int a1, a2, c1, c2, m1, m2;
    int n = 100;
    double Kreis1 = 0;
    double Kreis2 = 0;

    //Test1
    a1 = 5;
    c1 = 3;
    m1 = 16;
   
    //Test2
    //a2 = 205;
    //c2 = 29573;
    //m2 = 139968;
  
  for (int N = 0; N < n; ++N) {
  if (pow(zufall(a1, c1, m1), 2) + pow(zufall(a1, c1, m1), 2) < 1) {
    ++Kreis1;
   }
  }
  
  //for (int N = 0; N < n; ++n) {
    //if (pow(zufall(a2, c2, m2), 2) + pow(zufall(a2, c2, m2), 2) < 1) {
      //++Kreis2;
    //}
  //}

    double p = M_PI / 4;
    double Ewert = p * n;
    double varianz = p * (1 - p) * n;
    double pi1 = 4 * (Kreis1 / n);
    //double pi2 = 4 * (Kreis2 / n);
    double sigma = 4 * sqrt(varianz)/n;

    ofstream fout("tabelle.txt");

    fout << n << " " << Ewert << " " << varianz << " " << "|" << " " << Kreis1 << " " << pi1 << " " << sigma << endl;

    fout.close();

    //Überprüfung für Test1 und Test2
    //cout << pi << endl;

    

    
}

