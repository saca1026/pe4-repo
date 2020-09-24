#include <iostream>
using namespace std;


int** CreateBoard(){

      int** new_array = 0;
      new_array = new int*[3];

      for (int i = 0; i < 3; i++)
      {
            new_array[i] = new int[3];
      }

      return new_array;    
}




int main(){

  int **array;
  array = CreateBoard();

}
