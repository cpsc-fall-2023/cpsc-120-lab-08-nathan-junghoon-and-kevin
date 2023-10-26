// Nathan Wong
// potatotatertoot@csu.fullerton.edu
// @potatotatertoot
// Partners: @KevinP05, @YeonJungHoon

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv+1, argv + argc};

  if (arguments.size() != 3) {
    std::cout << "error: you must supply three arguments";
    return -1;
  }

  std::string protein{arguments[1]};
  std::string bread{arguments[2]};
  std::string condiment{arguments[3]};

  std::cout << "Your order: A" << protein << "sandwich on" << bread << "with" << condiment;

  return 0;
}
