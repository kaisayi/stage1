#pragma once

#include <string>

class Solution
{
private:
    std::string name;
public:
    Solution(const std::string& ss);

    std::string PrintName();

    int fib(int index);
};