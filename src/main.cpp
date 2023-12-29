#include <iostream>
#include <fstream>
#include "ncm.h"

using namespace std;

int main() {
    ifstream input(R"(D:\Downloads\test.ncm)", ios::binary);
    filesystem::path outputFolder(R"(D:\Downloads)");
    auto ret = ncm_dump(input, outputFolder);
    return static_cast<int>(ret);
}
