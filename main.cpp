#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// Stap 1.1
unordered_map<string, vector<string>> elementAttributes = {
    {"BAAN", {"naam", "lengte"}},
    {"VERKEERSLICHT", {"baan", "positie", "cyclus"}},
    {"VOERTUIG", {"baan", "positie"}},
    {"VOERTUIGGENERATOR", {"baan", "frequentie"}}
};


// test pull