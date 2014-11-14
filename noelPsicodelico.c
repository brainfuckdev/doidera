#include <stdio.h>
#include <conio.h>
void psicoUm(){
	int r = rand()%90;
	srand(time(NULL));
	clrscr();
	textcolor(r);
	cprintf("\r\n  *.");
	cprintf("\r\n * ***");
	cprintf("\r\n  * ***");
	cprintf("\r\n   *   *");
	cprintf("\r\n  *     *     _");
	cprintf("\r\n *********   | |  ");
	cprintf("\r\n*  0    0 *  | |_  ");
	cprintf("\r\n6|    >   9  |  _)");
	cprintf("\r\n|| ---O---| /\\  _)");
	cprintf("\r\n \\       / /  \\__) ");
	cprintf("\r\n  \\     / /  /");
	cprintf("\r\n   \\   / \\  /");
	cprintf("\r\n    \\,/   \\/");
	cprintf("\r\n      )    )");
	cprintf("\r\n            \\");
	cprintf("\r\n             \\");
	cprintf("\r\n              \\");
	cprintf("\r\n               )");
	cprintf("\r\n==============|:");
	cprintf("\r\n       )(     |");
	cprintf("\r\n       ||     |");
}

void psicoDois(){
	int r = rand()%50, s = rand()%10;
	clrscr();
	srand(time(NULL));
	textcolor(r);
	textbackground(s);
	cprintf("\r\n  *.");
	cprintf("\r\n * ***");
	cprintf("\r\n  * ***");
	cprintf("\r\n   *   *");
	cprintf("\r\n  *     *     _");
	cprintf("\r\n *********   | |  ");
	cprintf("\r\n*  0    0 *  | |_  ");
	cprintf("\r\n6|    >   9  |  _)");
	cprintf("\r\n|| ---O---| /\\  _)");
	cprintf("\r\n \\       / /  \\__) ");
	cprintf("\r\n  \\     / /  /");
	cprintf("\r\n   \\   / \\  /");
	cprintf("\r\n    \\,/   \\/");
	cprintf("\r\n      )    )");
	cprintf("\r\n            \\");
	cprintf("\r\n             \\");
	cprintf("\r\n              \\");
	cprintf("\r\n               )");
	cprintf("\r\n==============|:");
	cprintf("\r\n       )(     |");
	cprintf("\r\n       ||     |");

}

int main(){
	int i,j,mat[5][6];
	clrscr();
	textcolor(RED);
	_setcursortype(_NOCURSOR);
	gotoxy(20,5);
	textcolor(RED);
	cprintf("TESTE SANTA CLAUS PSICODELICO (APERTE QUALQUER TECLA)");
	getch();
	clrscr();
	textcolor(RED);
	cprintf("\r\n  *.");
	cprintf("\r\n * ***");
	cprintf("\r\n  * ***");
	cprintf("\r\n   *   *");
	cprintf("\r\n  *     *");
	cprintf("\r\n *********");
	cprintf("\r\n*  0    0 *");
	cprintf("\r\n6|     i  9");
	cprintf("\r\n|| -------|");
	cprintf("\r\n \\       /");
	cprintf("\r\n  \\     /");
	cprintf("\r\n   \\   / \\    APERTE QUALQUER TECLA PARA");
	cprintf("\r\n    \\,/   \\      DEIXA-LO PSICODELICO");
	cprintf("\r\n      )    )");
	cprintf("\r\n            \\");
	cprintf("\r\n             \\");
	cprintf("\r\n              \\");
	cprintf("\r\n               )");
	cprintf("\r\n==============|:");
	cprintf("\r\n       )(     |");
	cprintf("\r\n       ||     |");
	getch();
	for (i = 0; i < 1000; i++){
		psicoUm();
		delay(100);
		psicoDois();
		delay(100);
	}
	return 0;
}
