// Nathan Wong
// potatotatertoot@csu.fullerton.edu
// @potatotatertoot
// Partners: @KevinP05, @YeonJungHoon

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv + 1, argv + argc};

  if (arguments.size() == 0) {
    std::cout << "error: you must supply at least one number";
    return -1;
  };

  double sum_variable{0.0};
  for (std::string argument : arguments) {
    double arg = std::stod(argument);
    sum_variable += arg;
  };

  double average_value{0.0};
  average_value = sum_variable / argc;

  std::cout << "average = " << "*" << average_value << "*";

  return 0;
}
