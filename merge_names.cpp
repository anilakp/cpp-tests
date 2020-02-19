/*
Implement the unique_names method. When passed two vectors of names,
it will return a vector containing the names that appear in either or both vectors.
The returned vector should have no duplicates.
For example, calling unique_names(std::vector<std::string>{"Ava", "Emma", "Olivia"},
std::vector<std::string>{"Olivia", "Sophia", "Emma"})
should return a vector containing Ava, Emma, Olivia, and Sophia in any order.
*/

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <set>

std::vector<std::string> unique_names(
  const std::vector<std::string>& A,
  const std::vector<std::string>& B) {

  std::set<std::string> unique_names;

  for (auto name: A) {
    unique_names.insert(name);
  }

  for (auto name: B) {
    unique_names.insert(name);
  }

  std::vector<std::string> un;
  un.assign(unique_names.begin(),unique_names.end());

  return un;
}

int main(int argc, char *argv[])
{
  auto nv = unique_names(std::vector<std::string>{"Ava", "Emma", "Olivia"}, std::vector<std::string>{"Olivia", "Sophia", "Emma"});
  auto print = [](const std::string& n) { std::cout << " " << n; };
  std::for_each(nv.begin(), nv.end(), print);
}
