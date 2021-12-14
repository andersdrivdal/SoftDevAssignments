#include <iostream>
#include <string>

int main() {
  std::string string1;
  std::string string2;

  std::getline(std::cin, string1);
  std::getline(std::cin, string2);
  if (string1 == string2)
    std::cout << "are equal\n";
  else
    std::cout << "are not equal\n";
  if ((string1.find(string2) != std::string::npos) || (string2.find(string1) != std::string::npos)) {
    std::cout << "is a substring\n";
  } else
    std::cout << "is not a substring\n";
  return 0;
}