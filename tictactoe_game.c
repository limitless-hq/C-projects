#include <stdio.h>

void drawBoard(void);
void gameMechanics(char x_or_o, int position);

int main(void){
  char x_or_o = 0;
  int position = 0;

  drawBoard();
  
  puts("");
  
  puts("Enter a number 1-9 corresponding with the box you want to play a X or O. (Ex enter X 9)");
  scanf(" %c %d", &x_or_o, &position);
  
  gameMechanics(x_or_o, position);
  
  return 0;
}
void drawBoard(void){
  int rows = 0;
  int cols = 0;
  for(int cols = 1; cols<=3;cols++){
    static int i = 0;
    for(int rows = 1; rows<=2;rows++){
      i++;
      printf("%d | ", i);
    }
    i++;
    printf("%d", i);
    if(cols<=2){
      for(int lines = 1; lines<=1; lines++){
        puts("");
        printf("----------");
        puts("");
      }
    }else{
    return;
    }
  }
}
void gameMechanics(char x, char o, int position){
  
}