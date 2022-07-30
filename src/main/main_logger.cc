#include <iostream>
#include <map>
#include <vector>

#include "glog/logging.h"
#include "glog/stl_logging.h"

void MyFunction() {
  std::vector<int> my_vec = {1, 2, 3, 4};
  std::map<int, int> my_map = {{1, 2}, {3, 4}};
  bool l_cond = true;

  LOG(INFO) << "Print my_vector: "
            << "{ " << my_vec << " }";

  LOG(INFO) << "Print my_map: " << my_map;
  LOG(WARNING) << "this is a warning message";
  LOG(ERROR) << "this is a error message";

  LOG_IF(INFO, l_cond == true) << "g_cond is true";
  CHECK(5 != 4) << "check faild";
}

int main(int argc, char* argv[]) {
  google::InitGoogleLogging(argv[0]);
  // log both to log file and stderr
  FLAGS_alsologtostderr = true;

  MyFunction();
  return EXIT_SUCCESS;
}