#include "src/lib/s_array.h"
#include "src/lib/tool.h"

int main() {
    ArraySolution arr_solution;

    std::vector<std::vector<int>> mat1 = arr_solution.GenerateRotationMatrix(3);
    toollib::PrintMatrix(mat1);

    return EXIT_SUCCESS;
}