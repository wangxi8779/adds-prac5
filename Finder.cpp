#include "Finder.h"
using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;
  size_t found = 0;
  for (size_t i = 1; i <= s2.size(); i++) {
    found = s1.find(s2.substr(0, i),found);
    if (found != string::npos) {
      result.push_back(found);
    } else {
      result.push_back(-1);
      break;
    }
  }
  return result;
}

// int main() {
//   Finder f1 = Finder();
//   vector<int> result = f1.findSubstrings("331212367", "12345679");
//   for (size_t i = 0; i < result.size(); i++) {
//      cout << result[i] << endl;
//   }
// }

// s1.find(s2, index) can find substrings starting from index
// If prefix was not found (-1 as an output), the larger prefix will not be
// found either