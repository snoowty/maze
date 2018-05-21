/*
*縦横10マスの迷路が標準入力より与えられる．
*スタート s
*ゴール g
*道 .
*壁 #
*道は上下左右にのみ移動でき，斜めには移動できない
*この時，スタートからゴールまで道を辿って行けるなら'True',行けないならば'False'と出力

solve_mazeが穴埋めになっているので，完成させてください
*/

#include<iostream>
#include<map>
#include<stack>
#define SIZE 10
#define pii pair<int,int>
using namespace std;

char maze[SIZE+2][SIZE+2];
int d1[4] = {1,0,-1,0}, d2[4] = {0,-1,0,1};


void print_maze(char maze[][SIZE+2]);
bool solve_maze(char maze[][SIZE+2]);

int main(){


  /*迷路を標準入力から受け取る
    周りは壁(#)で埋める*/
  for(int i = 0; i < SIZE+2; i++){
    for(int j = 0; j < SIZE+2; j++){
      if(i == 0 || i == SIZE+1 || j == 0 || j == SIZE+1){
        maze[i][j] = '#';
      }else{
        cin >> maze[i][j];
      }
    }
  }

  if(solve_maze(maze)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }
}

bool solve_maze(char maze[][SIZE+2]){
  stack< pii > s;  //深さ優先探索用のスタック

  //スタート地点を見つけ，sにx座標とy座標のpairをpush



  while(!s.empty()){
    //sの一番上にある物をcurに代入してsからpop


    for(int i = 0; i < 4; i++){
      //次にみる座標をnextに代入
      pii next = make_pair(/*次に見るx座標*/, /*次に見るy座標*/);

      /*mazeの座標nextが
        'g'ならtrueを返す
        '.'ならsにnextをpush*/


      //現在見ているマス目に探索済みの印として'*'を代入
      maze[cur.first][cur.second] = '*';
    }
  return false;
}

//迷路の現在の状態を出力する関数
void print_maze(char maze[][SIZE+2]){
  for(int i = 0; i < SIZE+2; i++){
    for(int j = 0; j < SIZE+2; j++){
      cout << char(maze[i][j]);
    }
    cout << endl;
  }
  cout << endl;
}
