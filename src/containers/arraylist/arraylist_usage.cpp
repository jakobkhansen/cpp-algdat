#include <iostream>
#include "./arraylist.cpp"

using namespace std;

int main() {
  ArrayList<int> list;
  list.append(10);
  list.append(20);
  list.append(30);
  list.append(0);
  cout << list.toString() << endl;
}
