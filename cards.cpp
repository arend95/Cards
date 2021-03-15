#include "cards.h"

cards::cards() {
     N = 52;
     set_deck();
}

void cards::set_deck() {
    N = 52;
    int n = N/4;
    array<string, 4> color;
    color[0] = "harten ";
    color[1] = "ruit ";
    color[2] = "klaver ";
    color[3] = "schoppen ";

    for(int j=0; j<4; j++) {
         for(int i=1; i<=n; i++) {
               
               if(i == 1) {deck.push_back( color[j] + "Aars" );}
               if(i == 11) {deck.push_back( color[j] + "Boer" );}
               if(i == 12) {deck.push_back( color[j] + "Vrouw" );}
               if(i == 13) {deck.push_back( color[j] + "Koning" );}
               if(i != 1 && i != 11 && i != 12 && i != 13) {deck.push_back( color[j] + to_string(i) );}
         }
    }
}

// Maikel, hier kan dus een beter RNG in gezet worden
void cards::shuffle_deck() {
     std::random_shuffle( deck.begin(), deck.end() );
}

void cards::print_deck() {
     for(vector<string>::iterator de = deck.begin(); de != deck.end(); ++de) {
          cout << *de << endl;
     }
     int n = deck.size();
     cout << "Deck size = " << n << endl;
}
