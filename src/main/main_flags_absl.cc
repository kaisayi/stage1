#include <iostream>
#include <string>
#include <vector>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/flags/usage.h"

ABSL_FLAG(bool, verbose, false, "verbose flag");
ABSL_FLAG(std::string, message, "hello absl flag", "message flag");
ABSL_FLAG(uint32_t, year, 2022, "year flag");
ABSL_FLAG(std::vector<std::string>, names,
          std::vector<std::string>({"kaida", "john"}), "names flag");

int main(int argc, char *argv[]) {
  absl::ParseCommandLine(argc, argv);
  if (absl::GetFlag(FLAGS_verbose)) {
    std::cout << "Verbose: ";
  }

  std::cout << absl::GetFlag(FLAGS_message) << std::endl;
  return EXIT_SUCCESS;
}