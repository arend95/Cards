#include <iostream>
using namespace std;

#include <array>
#include <string>
#include <ctime>
#include "cards.h"

int main(int argc, char* argv[]) {
     std::clock_t c_start = std::clock();
     cards ca;

     ca.shuffle_deck();
     ca.print_deck();
     std::clock_t c_end = std::clock();
     
     double time_elapsed_ms = 1000.0 * (c_end-c_start) / CLOCKS_PER_SEC;
     std::cout << "CPU time used: " << time_elapsed_ms << " ms\n";
     
     return 0;
}     

