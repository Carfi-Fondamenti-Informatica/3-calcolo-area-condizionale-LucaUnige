#include <iostream>
using namespace std;
int main() {
   float a,b;
   int c=0;
   cin >>a>>b;
   cin >> c;
   switch(c){
      case 0:
         c=0;
         cout << ((a*b)/2) << endl;
         break;
      case 1:
         c=1;
         cout << a*a << endl;
         break;
      case 2:
         c=2;
         cout << a*b << endl;
         break;
      default:
         cout << "opzione non valida" << endl;
   }
      return 0;
}
