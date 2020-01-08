#include <iostream>
#include <string>

using namespace std;

int largest(int n1, int n2, int n3)
{

  if (n1 >= n2 && n1 >= n3)
  {
    return n1;
  }
  if (n2 >= n1 && n2 >= n3)
  {
    return n2;
  }
  if (n3 >= n1 && n3 >= n2)
  {
    return n3;
  }
}

int main()
{
  std::string str;
  int a,b,c;
  std::string n1, n2, n3;

  cout << "Enter three numbers: ";
  cin >> n1 >> n2 >> n3;

  try
  {
    a = std::stoi(n1);
    b = std::stoi(n2);
    c = std::stoi(n3);
  }
  catch (int e)
  {
    // cout << "An exception occurred. Exception Nr. " << e << '\n';
    cout << "An ex";

  }

  int result = largest(a, b, c);
  cout << "largest is: " << result;

  return 0;
}
