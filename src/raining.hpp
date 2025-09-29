#pragma once
#include <string>
#include <vector>

// Adds a business name into the vector
void add_business(std::vector<std::string>& businesses, const std::string& name);

// Prints the sorted list of businesses
void print_businesses(const std::vector<std::string>& businesses);
