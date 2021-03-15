#include <iostream>
using namespace std;
#include <cstdlib>
#include <algorithm>

#include <array>
#include <vector>
#include <string>
#include <ctime>   
#include <time.h>

#ifndef __cards_h
#define __cards_h

class cards {
   int N;
public:
   vector<string> deck;
   
   cards();
   void set_deck();
   
   void shuffle_deck();
   
   void print_deck();
   
};

#endif
