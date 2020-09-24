#include <iostream>
using namespace std;
static void PlaceMarker(int row, int col, int** new_array, bool player){

       if(player){ // player 1 is represented by True    
           new_array[row][col] = 1;    
       }
       else{
           new_array[row][col] = 2; // player 2 otherwise
       }
}
static bool GetPlayerChoice(int** arr, bool pl){
    int x, y;
    bool get_player;
    cout << "Enter your X spot: ";
    cin >> x;
    cout << "Enter your Y spot: ";
    cin >> y;
    cout << endl;
    if(pl){
        PlaceMarker(x, y, arr, pl);
        pl = false;
    }
    else{
        PlaceMarker(x, y, arr, pl);
        pl = true;
    }
    
    return pl;
}
static void DisplayBoard(int** arr){
    for(int i =0; i < 3;i++){
       for(int j = 0;j < 3;j++){
           cout << arr[i][j] << " ";
       }
       cout << endl;
    }
}
    
    
static int** CreateBoard(){

      int** new_array = 0;
      new_array = new int*[3];

      for (int i = 0; i < 3; i++)
      {
            new_array[i] = new int[3];
      }

      return new_array;    
}


int main(){

  int **arr;
  arr = CreateBoard();
  bool p = true;
  for(int k = 0; k < 9; k++){
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            if(arr[i][j] == 0){
                if(!p){
                    GetPlayerChoice(arr, p);
                    DisplayBoard(arr);
                }
                p = GetPlayerChoice(arr, true);
                DisplayBoard(arr);
            }
            else{
                DisplayBoard(arr);
                return 0;
            }
        }
    }
  }
  return 0;
}

