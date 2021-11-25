#include <iostream>

using namespace std;

int suma(int a,int b) {
  int c=a;
  return c-=b;
}

int main()
{
    cout << "el valor de la suma es: " << suma(5,8) <<" "<< sizeof(int) << endl;
    return 0;
}