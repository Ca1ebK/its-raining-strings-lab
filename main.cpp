#include "src/raining.hpp"
#include <iostream>
#include <limits>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> business_names{};
  std::string yes_no{};

  std::cout << "\nWelcome to the Business Sorting Program!\n";

  do {
    std::string line{};

    std::cout << "\nPlease enter the name of a business:  ";
    std::getline(std::cin, line);

    add_business(business_names, line);
    print_businesses(business_names);

    std::cout << "\nAnother business?  ";
    std::cin >> yes_no;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  } while (yes_no == "y" || yes_no == "Y" ||
           yes_no == "yes" || yes_no == "Yes");

  std::cout << "\nThank you for using the Business Sorting Program!\n";
}
