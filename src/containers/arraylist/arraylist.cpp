#include <string>

using namespace std;

template <class T>
class ArrayList {
  private:
    T* array;

  public:
    int size, numElems;

    ArrayList() {
      size = 1;
      numElems = 0;
      array = new T[size];
    }

    ~ArrayList() {
      delete[] array;
    }

    void append(T elem) {
      if (numElems == size) {
        tableDouble();
      }
      array[numElems] = elem;
      numElems++;
    }

    T* operator[](int index) {
      return array[index];
    }

    string toString() {
      string out = "[ ";
      for (int i = 0; i < numElems; i++) {
        out += to_string(array[i]) + " ";
      }
      return out + "]";
    }

  private:
    void tableDouble() {
      int newSize = size*2;
      T* newArray = new T[newSize];

      for (int i = 0; i < numElems; i++) {
        newArray[i] = array[i];
      }

      delete[] array;

      array = newArray;
      size = newSize;
    }


};
