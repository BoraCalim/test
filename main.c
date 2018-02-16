#include <stdio.h>
#include <stdlib.h>

 
//board is defined with ascii codes of pieces

//move notation=6052 = g1 to f3 (file number -1, line number-1) to castle: "white castles kingside" or "white castles queenside" or "black castles kingside" or "black castles queenside" ;without ""s.

int board[8][8] = {{82,78,66,81,75,66,78,82},{80,80,80,80,80,80,80,80},{32,32,32,32,32,32,32,32},{32,32,32,32,32,32,32,32},
	{32,32,32,32,32,32,32,32},{32,32,32,32,32,32,32,32},{112,112,112,112,112,112,112,112},{114,110,98,113,107,98,110,114}};

int whosemove=0,kingmovedwhite=0,arookmovedwhite=0,hrookmovedwhite=0,kingmovedblack=0,arookmovedblack=0,hrookmovedblack=0,gameended=0;
char move[4];

void er(){
	printf("Error; illegal move");
}

int explosion(int a, int b){
	int i,j;
	for(i=-1;i<=1;i++){
		for(j=-1;j<=1;j++){
			if(board[a+i][b+j]!=10 && board[a+i][b+j]!=11 ){ // if pawn, does not explode
				board[a+i][b+j]=0;
			}
		}
	}
	return;
}

void printboard(){
	int i, j;
	for(i=7;i>=0;i--){
		for(j=0;j<=7;j++){
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}



void inputmoves(){
	scanf("%s",move);
	if(board[move[0]][move[1]]==82 || board[move[0]][move[1]]==114){
		int i=0, flagrook=0;
		for(;!flagrook;i++){
			
		}
	}
	else if(board[move[0]][move[1]]==80){
		int i, j;
		if(move[0]==1){
			if((move[3]!=move[1] && move[2]-move[0]!=1 ) || move[2]>=move[0]+2 || move[2]<=move[0]){
				er();
			}
			
		}
	}
}


int main() {
	while(!gameended){
		printboard();
		inputmoves();
	}	 
	
	
	return 0;
}

 
/* 
 -----------------
7|r n b q k b n r|
6|p p p p p p p p| 
5|               | 
4|               |   
3|               | 
2|               |       
1|P P P P P P P P|
0|R N B Q K B N R|
 -----------------
  0 1 2 3 4 5 6 7 
  
*/
