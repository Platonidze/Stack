#include <iostream>
#include <cassert>
#include "Stack.hpp"
using namespace std;

int main() {
  int n_elements = 30;

  Stack s;
  for(int i=0; i<n_elements/2; i++) {
    for (int j=0; j<2; j++) {
      s.push(Element(2*i+j,2*i+j));
    }
    s.pop();
    s.print();
  }
  auto& e = s.top();
  e.get_first() = -1;
  e.print();
  cout << endl;
  // Ausgabe des Stacks beginnend mit dem ersten Element
  s.print();
  // Ausgabe des Stacks beginnend mit der letzten Element
  s.print(false);

  return 0;
}
