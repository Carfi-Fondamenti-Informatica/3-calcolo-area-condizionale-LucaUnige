#include <iostream>
using nam espace std;
int main() {
   float a,b;
   int i=0;
   cin >>a>>b;
   cin >> i;
   switch(i){
      case 1:
         i=0;
         cout << (a * b)/2 << endl;
         break;
      case 2:
         i=1;
         cout << a * a << endl;
         break;
      case 3:
         i=2;
         cout << a * b << endl;
         break;
      default:
         cout << "opzione non valida" << endl;
   }
      return 0;
}
