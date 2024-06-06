#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

void Background1(char X[][130])
{
	for (int r = 0; r < 24; r++)
	{
		for (int c = 0; c < 75; c++)
		{
			X[r][c] = ' ';
		}
	}

	for (int r = 0; r < 12; r++)
	{
		for (int c = 75; c < 80; c++)
		{
			X[r][c] = ' ';
		}
	}

	//big starting block
	for (int r = 20; r < 24; r++)
	{
		for (int c = 0; c < 7; c++)
		{
			X[r][c] = 178;
		}
	}

	//path blocks
	for (int c = 7; c < 80; c++)
	{
		X[23][c] = 178;
	}

	//spikes
	for (int c = 14; c < 18; c++)
	{
		X[23][c] = 202;
	}

	//2 ladders with a surface at the top 
	for (int r = 17; r < 23; r++)
	{
		X[r][24] = '|';
		X[r][25] = '_';
		X[r][26] = '|';
	}
	for (int c = 24; c < 44; c++)
	{
		X[16][c] = 223;
	}
	for (int r = 17; r < 23; r++)
	{
		X[r][41] = '|';
		X[r][42] = '_';
		X[r][43] = '|';
	}


	//collectable item
	X[15][39] = 21;


	//end-level door
	for (int r = 13; r < 23; r++)
	{
		X[r][75] = 186;
	}
	X[12][75] = 201;
	for (int c = 76; c < 80; c++)
	{
		X[12][c] = 205;
	}

}

//coins
void coinsX(char X[][130], int& flagcoin1, int& flagcoin2, int& flagcoin3)
{
	if (flagcoin1 == 1)
	{
		X[22][47] = ' ';
		X[9][9] = '1';
	}
	else
	{
		X[22][47] = 233;
	}

	if (flagcoin2 == 1)
	{
		X[22][49] = ' ';
		X[9][9] = '2';
	}
	else
	{
		X[22][49] = 233;
	}

	if (flagcoin3 == 1)
	{
		X[22][51] = ' ';
		X[9][9] = '3';
	}
	else
	{
		X[22][51] = 233;
	}
	X[9][2] = 'c';
	X[9][3] = 'o';
	X[9][4] = 'i';
	X[9][5] = 'n';
	X[9][6] = 's';
	X[9][7] = ':';
	X[9][8] = ' ';
}

void itemX(char X[][130], int& checkitem)
{
	if (checkitem == 0)
	{
		X[15][39] = 21;
	}
	else
	{
		X[15][39] = ' ';
	}

}

void DrawArrowsX(char X[][130], int r, int c)
{
	X[r][c] = 239;
	X[r + 1][c] = '|';
	X[r + 2][c] = ' ';

}

void MoveArrowX(int& r, int& c, int& dirarrow)
{
	if (dirarrow == 1)
	{
		r++;
	}
	if (dirarrow == -1)
	{
		r--;
	}
	if (r == 23)
	{
		dirarrow = -1;
	}
	if (r == 21)
	{
		dirarrow = 1;
	}

}

void HarakHeroX(char X[][130], int& rHero, int& cHero, char mv, int& flagHeroJump, int& flagHeroLadder1, int& flagHeroLadder2, int& ctj, int& ctl1, int& ctl2, int& surfaceCheck, int& flagHeroEdge, int& cted)
{
	if (mv == 'w' && X[rHero - 1][cHero] != ' ')
	{
		rHero--;

	}

	if (mv == 's' && X[rHero + 3][cHero] == ' ' || cHero == 42)
	{
		if (rHero < 20)
		{
			rHero++;
		}

	}


	if (mv == 'a')
	{
		if (cHero > 1)
		{
			cHero--;
		}

	}

	if (mv == 'd')
	{
		if (cHero < 80)
		{
			cHero++;
		}
	}

	if (flagHeroJump == 1)
	{
		if (ctj == 0)
		{
			rHero--;
			cHero++;
		}
		if (ctj == 1)
		{
			cHero++;
		}
		if (ctj == 2)
		{
			cHero++;
		}
		if (ctj == 3)
		{
			cHero++;
		}
		if (ctj == 4)
		{
			cHero++;
		}
		if (ctj == 5)
		{
			cHero++;
		}
		if (ctj == 6)
		{
			rHero++;
			cHero++;
		}
		ctj++;
		if (ctj > 6 && surfaceCheck == 0)
		{
			if (rHero < 20)
			{
				rHero++;
			}
			else
			{
				flagHeroJump = 0;
			}
		}

	}

	if (flagHeroLadder1 == 1)
	{
		if (ctl1 == 0)
		{
			rHero--;
		}
		if (ctl1 == 1)
		{
			rHero--;
		}
		if (ctl1 == 2)
		{
			rHero--;
		}
		if (ctl1 == 3)
		{
			rHero--;
			flagHeroLadder1 = 0;
		}
		ctl1++;

	}

	if (flagHeroLadder2 == 1)
	{
		if (ctl2 == 0)
		{
			rHero++;
		}
		if (ctl2 == 1)
		{
			rHero++;
		}

		if (ctl2 == 2)
		{
			rHero++;
			flagHeroLadder2 = 0;
		}
		ctl2++;

	}

	if (flagHeroEdge == 1)
	{
		if (cted == 0)
		{
			rHero++;
		}
		if (cted == 1)
		{
			rHero++;
		}
		if (cted == 2)
		{
			rHero++;
			flagHeroEdge = 0;
		}
		cted++;
	}

}


void ErsemHeroX(char X[][130], int rHero, int cHero)
{
	X[rHero][cHero] = 1;
	X[rHero + 1][cHero] = 30;
	X[rHero + 1][cHero - 1] = '/';
	X[rHero + 1][cHero + 1] = '\\';
	X[rHero + 2][cHero - 1] = '/';
	X[rHero + 2][cHero + 1] = '\\';

}

void ErsemEnemy1(char X[][130], int rEnemy1, int cEnemy1)
{
	X[rEnemy1][cEnemy1] = 153;
	X[rEnemy1 + 1][cEnemy1 - 1] = 185;
	X[rEnemy1 + 1][cEnemy1 - 3] = 17;
	X[rEnemy1 + 1][cEnemy1 + 1] = 185;
	X[rEnemy1 + 2][cEnemy1] = 203;


}

void ErsemEnemy2(char X[][130], int rEnemy2, int cEnemy2)
{
	X[rEnemy2][cEnemy2] = 232;
	X[rEnemy2 + 1][cEnemy2 - 1] = 201;
	X[rEnemy2 + 1][cEnemy2] = 223;
	X[rEnemy2 + 1][cEnemy2 + 1] = 187;
}
void HarakEnemy2(char X[][130], int& i)
{
	if (i <= 8)
	{
		int r = 13 + i;
		X[r][76] = 220;
		X[r][77] = 220;
		X[r][78] = 220;
		X[r][79] = 220;
		i++;
	}
}

void DisplayX(char X[][130], int& smvc)
{
	system("cls");
	int c;
	if (smvc - 5 >= 0 && smvc + 25 < 80)
	{
		for (int r = 7; r < 24; r++)
		{
			for (c = smvc - 5; c < 25 + smvc; c++)
			{
				cout << X[r][c];
			}
		}
	}
	else if (smvc + 25 >= 80)
	{
		for (int r = 7; r < 24; r++)
		{
			for (c = 50; c < 80; c++)
			{
				cout << X[r][c];
			}
		}
	}
	else
	{
		for (int r = 7; r < 24; r++)
		{
			for (c = 0; c < 30; c++)
			{
				cout << X[r][c];
			}
		}
	}

}


void main()
{
	int flagHeroJumpX = 0, ctj = 0, surfaceCheck = 0;
	char ch;
	int rarrow1x = 21, carrow1x = 59, dirarrow1x = 1;
	int rarrow2x = 21, carrow2x = 60, dirarrow2x = 1;
	int rarrow3x = 21, carrow3x = 61, dirarrow3x = 1;
	int rHerox = 17, cHerox = 3;
	int rEnemy1 = 13, cEnemy1 = 37;
	int rEnemy2 = 10, cEnemy2 = 77, e2startc = 76, e2endc = 79, emy2r = 13, i = 0, k = 0;
	int doneladder = 0;
	int flagcoin1 = 0, flagcoin2 = 0, flagcoin3 = 0;
	int flagHeroLadder1 = 0, flagHeroLadder2 = 0;
	int ctl1 = 0, ctl2 = 0, SmasherCheck = 0, cts = 0, sbc = 31, stc = 31;
	int checkitemx = 0, flagHeroEdge = 0, cted = 0, flagEnemy1 = 0, checkwin = 0, checklost = 0;
	int smvc = 0, phc = 1, phr = 0;
	char X[24][130];

	for (int r = 13; r < 23; r++)
	{
		for (int c = 76; c < 80; c++)
		{
			X[r][c] = ' ';
		}
	}
	for (int r = 0; r < 24; r++)
	{
		for (int c = 80; c < 130; c++)
		{
			X[r][c] = 178;
		}
	}
	//LEVEL ONE

	for (;;)
	{
		for (; !_kbhit();)
		{
			Background1(X);
			coinsX(X, flagcoin1, flagcoin2, flagcoin3);
			itemX(X, checkitemx);
			MoveArrowX(rarrow1x, carrow1x, dirarrow1x);
			DrawArrowsX(X, rarrow1x, carrow1x);
			MoveArrowX(rarrow2x, carrow2x, dirarrow2x);
			DrawArrowsX(X, rarrow2x, carrow2x);
			MoveArrowX(rarrow3x, carrow3x, dirarrow3x);
			DrawArrowsX(X, rarrow3x, carrow3x);
			ErsemHeroX(X, rHerox, cHerox);
			if (flagEnemy1 == 0)
			{
				ErsemEnemy1(X, rEnemy1, cEnemy1);
			}

			if (cHerox >= 50 && k % 12 == 0)
			{
				HarakEnemy2(X, i);
			}
			k++;

			ErsemEnemy2(X, rEnemy2, cEnemy2);
			if (flagHeroJumpX == 1)
			{
				if (X[rHerox + 2][cHerox] != ' ')
				{
					surfaceCheck = 1;
				}
				HarakHeroX(X, rHerox, cHerox, ch, flagHeroJumpX, flagHeroLadder1, flagHeroLadder2, ctj, ctl1, ctl2, surfaceCheck, flagHeroEdge, cted);
			}

			if (rHerox == 20)
			{
				if (ctj > 6)
				{
					flagHeroJumpX = 0;
					surfaceCheck = 0;
					ctj = 0;
				}
			}

			if (flagHeroLadder1 == 1)
			{
				HarakHeroX(X, rHerox, cHerox, ch, flagHeroJumpX, flagHeroLadder1, flagHeroLadder2, ctj, ctl1, ctl2, surfaceCheck, flagHeroEdge, cted);
			}
			if (flagHeroLadder2 == 1)
			{
				HarakHeroX(X, rHerox, cHerox, ch, flagHeroJumpX, flagHeroLadder1, flagHeroLadder2, ctj, ctl1, ctl2, surfaceCheck, flagHeroEdge, cted);
			}
			if (flagHeroEdge == 1)
			{
				HarakHeroX(X, rHerox, cHerox, ch, flagHeroJumpX, flagHeroLadder1, flagHeroLadder2, ctj, ctl1, ctl2, surfaceCheck, flagHeroEdge, cted);
			}

			//coins
			if (rHerox == 20 && cHerox == 47)
			{
				flagcoin1 = 1;
				X[7][77] = '1';
			}
			if (rHerox == 20 && cHerox == 49)
			{
				flagcoin2 = 1;
				X[7][77] = '2';
			}
			if (rHerox == 20 && cHerox == 51)
			{
				flagcoin3 = 1;
				X[7][77] = '3';
			}

			if (checkitemx == 0 && rHerox == 13 && cHerox == 37)
			{
				checkitemx++;

			}

			if (checkitemx > 0 && cHerox < 50)
			{
				X[10][smvc - 11] = 'P';
				X[10][smvc - 10] = 'E';
				X[10][smvc - 9] = 'R';
				X[10][smvc - 8] = 'F';
				X[10][smvc - 7] = 'E';
				X[10][smvc - 6] = 'C';
				X[10][smvc - 5] = 'T';
				X[10][smvc - 4] = '!';
				X[10][smvc - 3] = ' ';
				X[10][smvc - 2] = 'i';
				X[10][smvc - 1] = 't';
				X[10][smvc] = 'e';
				X[10][smvc + 1] = 'm';
				X[10][smvc + 2] = ' ';
				X[10][smvc + 3] = 'c';
				X[10][smvc + 4] = 'o';
				X[10][smvc + 5] = 'l';
				X[10][smvc + 6] = 'l';
				X[10][smvc + 7] = 'e';
				X[10][smvc + 8] = 'c';
				X[10][smvc + 9] = 't';
				X[10][smvc + 10] = 'e';
				X[10][smvc + 11] = 'd';

			}



			//touch first spikes
			if (rHerox + 2 == 22 && cHerox + 1 == 14 || rHerox + 2 == 22 && cHerox + 1 == 15 || rHerox + 2 == 22 && cHerox + 1 == 16 || rHerox + 2 == 22 && cHerox + 1 == 17 || rHerox + 2 == 22 && cHerox + 1 == 18)
			{
				rHerox = 17;
				cHerox = 3;
				flagHeroEdge = 0;
				cted = 0;
				X[9][smvc] = 'R';
				X[9][smvc + 1] = 'E';
				X[9][smvc + 2] = 'T';
				X[9][smvc + 3] = 'R';
				X[9][smvc + 4] = 'Y';

			}

			//touch moving arrows
			if (rHerox + 2 == 22 && cHerox + 1 == 59 || rHerox + 2 == 22 && cHerox + 1 == 60 || rHerox + 2 == 22 && cHerox + 1 == 61 || rHerox + 2 == 22 && cHerox - 1 == 59 || rHerox + 2 == 22 && cHerox - 1 == 60 || rHerox + 2 == 22 && cHerox - 1 == 61)
			{
				rHerox = 17;
				cHerox = 3;
				flagHeroEdge = 0;
				cted = 0;
				X[9][smvc] = 'R';
				X[9][smvc + 1] = 'E';
				X[9][smvc + 2] = 'T';
				X[9][smvc + 3] = 'R';
				X[9][smvc + 4] = 'Y';

			}

			//touch enemy weapon
			if (rHerox == 13 && cHerox > 29 && SmasherCheck == 0 && cHerox + 1 == 34)
			{
				rHerox = 17;
				cHerox = 3;
				flagHeroEdge = 0;
				cted = 0;
				X[9][smvc] = 'R';
				X[9][smvc + 1] = 'E';
				X[9][smvc + 2] = 'T';
				X[9][smvc + 3] = 'R';
				X[9][smvc + 4] = 'Y';

			}

			if (cHerox == 28 && rHerox == 13)
			{
				X[13][stc] = 16;
				X[14][sbc] = 186;
			}

			if (cHerox == 29 && SmasherCheck == 1)
			{
				X[14][stc + 3] = 16;
				X[14][sbc + 2] = 205;
				flagEnemy1 = 1;
				X[8][smvc + 2] = 'E';
				X[8][smvc + 3] = 'N';
				X[8][smvc + 4] = 'E';
				X[8][smvc + 5] = 'M';
				X[8][smvc + 6] = 'Y';
				X[8][smvc + 7] = ' ';
				X[8][smvc + 8] = 'V';
				X[8][smvc + 9] = 'A';
				X[8][smvc + 10] = 'N';
				X[8][smvc + 11] = 'Q';
				X[8][smvc + 12] = 'U';
				X[8][smvc + 13] = 'I';
				X[8][smvc + 14] = 'S';
				X[8][smvc + 15] = 'H';
				X[8][smvc + 16] = 'E';
				X[8][smvc + 17] = 'D';

			}
			if (smvc <= 78)
			{
				if (phc < cHerox)
				{
					smvc = smvc + (cHerox - phc);
				}
				else
				{
					smvc = smvc - (phc - cHerox);
				}
			}

			DisplayX(X, smvc);

			phc = cHerox;
		}

		ch = _getch();
		HarakHeroX(X, rHerox, cHerox, ch, flagHeroJumpX, flagHeroLadder1, flagHeroLadder2, ctj, ctl1, ctl2, surfaceCheck, flagHeroEdge, cted);
		if (ch == ' ')
		{
			flagHeroJumpX = 1;
		}
		if (ch == 'w' && rHerox == 19 && cHerox == 25)
		{
			flagHeroLadder1 = 1;
		}
		if (ch == 's' && rHerox == 14 && cHerox == 42)
		{
			flagHeroLadder2 = 1;
		}
		if (ch == 'd' && cHerox == 7)
		{
			flagHeroEdge = 1;
		}
		ErsemHeroX(X, rHerox, cHerox);


		if (ch == 'h')
		{
			SmasherCheck = 1;

		}


		//lose or win

		//case1:door closed before passing with/without item
		if (X[19][76] != ' ')
		{
			for (int r = 0; r < 24; r++)
			{
				for (int c = 0; c < 130; c++)
				{
					X[r][c] = ' ';
				}
			}

			X[13][smvc - 5] = 'O';
			X[13][smvc - 4] = 'P';
			X[13][smvc - 3] = 'P';
			X[13][smvc - 2] = 'S';
			X[13][smvc - 1] = '.';
			X[13][smvc] = '.';
			X[13][smvc + 1] = '.';
			X[14][smvc - 5] = 'D';
			X[14][smvc - 4] = 'O';
			X[14][smvc - 3] = 'O';
			X[14][smvc - 2] = 'R';
			X[15][smvc - 5] = 'B';
			X[15][smvc - 4] = 'L';
			X[15][smvc - 3] = 'O';
			X[15][smvc - 2] = 'C';
			X[15][smvc - 1] = 'K';
			X[15][smvc] = 'E';
			X[15][smvc + 1] = 'D';
			checklost = 1;

		}

		//case2:passed through door with no item
		else if (checkitemx == 0 && cHerox >= 75)
		{
			for (int r = 0; r < 24; r++)
			{
				for (int c = 0; c < 130; c++)
				{
					X[r][c] = ' ';
				}
			}

			X[13][smvc - 6] = 'N';
			X[13][smvc - 5] = 'O';
			X[13][smvc - 4] = ' ';
			X[13][smvc - 3] = 'I';
			X[13][smvc - 2] = 'T';
			X[13][smvc - 1] = 'E';
			X[13][smvc] = 'M';
			X[13][smvc + 1] = ' ';
			X[13][smvc + 2] = ':';
			X[13][smvc + 3] = '(';
			X[15][smvc - 10] = 'I';
			X[15][smvc - 9] = 'T';
			X[15][smvc - 8] = ' ';
			X[15][smvc - 7] = 'I';
			X[15][smvc - 6] = 'S';
			X[15][smvc - 5] = ' ';
			X[15][smvc - 4] = 'A';
			X[15][smvc - 3] = ' ';
			X[15][smvc - 2] = 'M';
			X[15][smvc - 1] = 'U';
			X[15][smvc] = 'S';
			X[15][smvc + 1] = 'T';
			X[15][smvc + 2] = '.';
			X[15][smvc + 3] = '.';
			X[15][smvc + 4] = '.';
			checklost = 1;

		}
		else if (checkitemx == 1 && cHerox >= 75)
		{
			for (int r = 0; r < 24; r++)
			{
				for (int c = 0; c < 130; c++)
				{
					X[r][c] = ' ';
				}
			}
			X[16][smvc - 6] = 'Y';
			X[16][smvc - 5] = 'A';
			X[16][smvc - 4] = 'Y';
			X[16][smvc - 3] = ' ';
			X[16][smvc - 2] = 'Y';
			X[16][smvc - 1] = 'O';
			X[16][smvc] = 'U';
			X[16][smvc + 1] = ' ';
			X[16][smvc + 2] = 'W';
			X[16][smvc + 3] = 'O';
			X[16][smvc + 4] = 'N';
			X[16][smvc + 5] = '!';
			X[16][smvc + 6] = '!';
			checkwin = 1;
		}

		if (checkwin == 1 || checklost == 1)
		{
			DisplayX(X, smvc);
			break;
		}

	}

}
