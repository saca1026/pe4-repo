#include <iostream>
using namespace std;

// Initializes a new 2D array and returns it to main
void DisplayBoard(int** array){
    for(int i =0; i < 3;i++){
       for(int j = 0;j < 3;j++){
           cout << array[i][j] << " ";
       }
       cout << endl;
    }
}
    
    
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
  DisplayBoard(array);

}
