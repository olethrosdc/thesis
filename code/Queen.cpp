#include "Queen.h"
#include <iostream>

Queen::Queen(char c,int * p)
	:Piece::Piece('Q',900,c,p)	
	{}

bool Queen::moveIsLegal(int * toPosition){

	return 1;	
}

void Queen::makeMove(int * toPosition){
	if(Queen::moveIsLegal(toPosition)){
		;
	}
	else{
		;
	}
}

int ** Queen::legalMoves(){
	
	return NULL;

}


