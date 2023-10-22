#include <iostream>
#include <iomanip>
int main()
{
  float a = 0.5f;
  float b = 0.5f;
  float c = 0.5f;
  float s1 = a + (b + c);
  float s2 = (a + b) + c;
  std::cout << std::fixed << std::setprecision(20);
  std::cout << s1 << std::endl;
  std::cout << s2 << std::endl;
  return 0;
}
