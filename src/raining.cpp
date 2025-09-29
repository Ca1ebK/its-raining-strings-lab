#include "raining.hpp"
#include <algorithm>
#include <iostream>

void add_business(std::vector<std::string>& businesses, const std::string& name) {
   businesses.push_back(name);
   std::sort(businesses.begin(), businesses.end());
}

void print_businesses(const std::vector<std::string>& businesses) {
   if (businesses.size() < 2) {
      std::cout << "\nYour business is:\n\n";
   } else {
      std::cout << "\nYour businesses are:\n\n";
   }

   for (const auto& name : businesses) {
      std::cout << "    " << name << "\n";
   }
}
