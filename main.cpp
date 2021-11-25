#include <iostream>

using namespace std;

int suma(int a,int b) {
  int c=a;
  return c-=b;
}

int main()
{
    cout << suma(5,8) << endl;
    return 0;
}