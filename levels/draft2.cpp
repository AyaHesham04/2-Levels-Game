#include <iostream>
#include <conio.h>
using namespace std;


void Background2(char y[][160])
{
    for (int r = 0; r < 19; r++)
    {
        for (int c = 0; c < 160; c++)
        {
            y[r][c] = ' ';
        }
    }

    for (int r = 20; r < 24; r++)
    {
        for (int c = 0; c < 160; c++)
        {
            y[r][c] = ' ';
        }
    }

    for (int c = 0; c < 65; c++)
    {
        y[19][c] = ' ';
    }
    for (int c = 80; c < 160; c++)
    {
        y[19][c] = ' ';
    }

    for (int r = 0; r < 24; r++)
    {
        y[r][0] = 179;
        y[r][159] = 179;
    }

    //starting blocks
    for (int c = 0; c < 160; c++)
    {
        y[23][c] = 178;
    }

    for (int r = 22; r < 24; r++)
    {
        for (int c = 5; c < 10; c++)
        {
            y[r][c] = 178;

        }
    }

    for (int r = 21; r < 24; r++)
    {
        for (int c = 9; c < 15; c++)
        {
            y[r][c] = 178;
        }
    }


    //sky
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 160; c++)
        {
            y[r][c] = 178;
        }
    }
    for (int r = 0; r < 6; r++)
    {
        for (int c = 16; c < 21; c++)
        {
            y[r][c] = 178;
        }
    }

    for (int r = 0; r < 16; r++)
    {
        for (int c = 45; c < 50; c++)
        {
            y[r][c] = 178;
        }
    }

    //bullets 1
    y[6][16] = 186;
    y[7][16] = 200;
    y[7][17] = 205;
    y[7][18] = 31;
    y[7][19] = 205;
    y[6][20] = 186;
    y[7][20] = 188;

    //bullets 2
    y[16][45] = 186;
    y[17][45] = 200;
    y[17][46] = 205;
    y[17][47] = 31;
    y[17][48] = 205;
    y[16][49] = 186;
    y[17][49] = 188;

    //tall block in middle
    for (int r = 22; r > 9; r--)
    {
        for (int c = 29; c < 34; c++)
        {
            y[r][c] = 178;
        }
    }

    //coins platforms
    //top
    for (int c = 50; c < 84; c++)
    {
        y[6][c] = 220;
    }
    //ladder 1
    for (int r = 7; r < 11; r++)
    {
        y[r][67] = 195;
        y[r][68] = '-';
        y[r][69] = 180;
    }
    //bottom
    for (int c = 50; c < 84; c++)
    {
        y[11][c] = 220;
    }
    for (int r = 3; r < 12; r++)
    {
        y[r][83] = 219;
    }
    //ladder 2
    for (int r = 12; r < 18; r++)
    {
        y[r][78] = 195;
        y[r][79] = '-';
        y[r][80] = 180;
    }


    //first platforms
    //no.1
    y[21][56] = 220;
    y[21][57] = 220;
    y[21][58] = 220;
    y[21][59] = 220;
    y[21][60] = 220;
    y[21][61] = 201;
    y[21][62] = 254;
    y[21][63] = 187;

    //no.2 (before enemy)
    y[19][65] = 220;
    y[19][66] = 220;
    y[19][67] = 220;
    y[19][68] = 220;

    //no.3
    y[17][77] = 220;
    y[17][78] = 220;
    y[17][79] = 220;
    y[17][80] = 220;
    y[17][81] = 220;
    y[17][82] = 220;
    y[17][83] = 220;
    y[17][84] = 220;
    y[17][85] = 220;
    y[17][86] = 220;
    y[17][87] = 220;

    //no.4
    y[15][90] = 220;
    y[15][91] = 220;
    y[15][92] = 220;
    y[15][93] = 220;
    y[15][94] = 220;
    y[15][95] = 220;

    //no.5
    y[13][98] = 220;
    y[13][99] = 220;
    y[13][100] = 220;
    y[13][101] = 220;
    y[13][102] = 220;
    y[13][103] = 220;


    //rope top-base
    y[3][106] = 195;
    for (int c = 107; c < 136; c++)
    {
        y[3][c] = 194;
    }
    y[3][136] = 180;


    //spikes
    for (int c = 103; c < 136; c++)
    {
        y[23][c] = 30;
    }


    //second platforms
    //no.1
    y[13][130] = 220;
    y[13][131] = 220;
    y[13][132] = 220;
    y[13][133] = 220;
    y[13][134] = 220;
    y[13][135] = 220;
    y[13][136] = 220;
    y[13][137] = 220;


    //no.2
    y[15][138] = 220;
    y[15][139] = 220;
    y[15][140] = 220;
    y[15][141] = 220;
    y[15][142] = 220;
    y[15][143] = 220;
    y[15][144] = 220;
    y[15][145] = 220;

    //outside border of elevator
    y[10][145] = '.';
    for (int c = 146; c < 151; c++)
    {
        y[10][c] = '.';
    }
    y[10][151] = '.';

    for (int r = 11; r < 23; r++)
    {
        y[r][151] = ':';
    }
    for (int r = 11; r < 23; r++)
    {
        y[r][145] = ':';
    }
}

void endDoor(char y[][160], int& openDoor)
{
    if (openDoor == 0)
    {
        for (int r = 17; r < 23; r++)
        {
            y[r][155] = 186;
        }
        y[17][155] = 201;
        for (int c = 156; c < 159; c++)
        {
            y[17][c] = 205;
        }
    }
    else
    {

        for (int r = 17; r < 19; r++)
        {
            y[r][155] = 186;
        }
        y[17][155] = 201;
        for (int c = 156; c < 159; c++)
        {
            y[17][c] = 205;
        }
    }
}


void jetback(char y[][160], int flagJetBack)
{
    if (flagJetBack == 0)
    {
        y[19][12] = '[';
        y[19][13] = ']';
        y[19][11] = 204;
        y[19][14] = 185;
    }
    else
    {
        y[19][12] = ' ';
        y[19][13] = ' ';
        y[19][11] = ' ';
        y[19][14] = ' ';

    }
}

void enemyplatform(char y[][160], int& flagTouch, int cenemy3, int cHero)
{
    if (flagTouch == 1)
    {
        y[19][cenemy3] = ' ';
    }

}

//coins
void coinsY(char y[][160], int& flagcoin1, int& flagcoin2, int& flagcoin3, int& flagcoin4, int& flagcoin5, int& flagcoin6, int& flagcoin7, int& flagcoin8, int& flagcoin9, int& flagcoin10, int& ctcoins)
{
    if (flagcoin1 == 1)
    {
        y[14][25] = ' ';

    }
    else
    {
        y[14][25] = 233;
    }

    if (flagcoin2 == 1)
    {
        y[11][25] = ' ';
    }
    else
    {
        y[11][25] = 233;
    }

    if (flagcoin3 == 1)
    {
        y[16][38] = ' ';

    }
    else
    {
        y[16][38] = 233;
    }

    if (flagcoin3 == 1)
    {
        y[20][38] = ' ';

    }
    else
    {
        y[20][38] = 233;
    }

    if (flagcoin5 == 1)
    {
        y[5][55] = ' ';

    }
    else
    {
        y[5][55] = 233;
    }

    if (flagcoin6 == 1)
    {
        y[5][57] = ' ';

    }
    else
    {
        y[5][57] = 233;
    }

    if (flagcoin7 == 1)
    {
        y[5][59] = ' ';
    }
    else
    {
        y[5][59] = 233;
    }
    if (flagcoin8 == 1)
    {
        y[22][139] = ' ';
    }
    else
    {
        y[22][139] = 233;
    }
    if (flagcoin9 == 1)
    {
        y[22][140] = ' ';
    }
    else
    {
        y[22][140] = 233;
    }
    if (flagcoin10 == 1)
    {
        y[22][141] = ' ';
    }
    else
    {
        y[22][141] = 233;
    }

    //count coins
    if (ctcoins == 1)
    {
        y[4][150] = '1';
    }
    if (ctcoins == 2)
    {
        y[4][150] = '2';
    }
    if (ctcoins == 3)
    {
        y[4][150] = '3';
    }
    if (ctcoins == 4)
    {
        y[4][150] = '4';
    }
    if (ctcoins == 5)
    {
        y[4][150] = '5';
    }
    if (ctcoins == 6)
    {
        y[4][150] = '6';
    }
    if (ctcoins == 7)
    {
        y[4][150] = '7';
    }
    if (ctcoins == 8)
    {
        y[4][150] = '8';
    }
    if (ctcoins == 9)
    {
        y[4][150] = '9';
    }
    if (ctcoins == 10)
    {
        y[4][150] = '1';
        y[4][151] = '0';
    }

    y[4][142] = 'c';
    y[4][143] = 'o';
    y[4][144] = 'i';
    y[4][145] = 'n';
    y[4][146] = 's';
    y[4][147] = ':';
    y[4][148] = ' ';
    y[6][142] = 't';
    y[6][143] = 'a';
    y[6][144] = 'r';
    y[6][145] = 'g';
    y[6][146] = 'e';
    y[6][147] = 't';
    y[6][148] = ' ';
    y[6][149] = 'i';
    y[6][150] = 's';

    y[6][152] = '1';
    y[6][153] = '0';
}

void DrawElevator(char Y[][160], int relevator, int prevre, int flagElevator, int openDoor, int& celevator)
{
    Y[relevator][celevator - 4] = 196;
    for (int r = relevator + 1; r < relevator + 4; r++)
    {
        //Y[r][146] = '|';
        Y[r][celevator] = '|';
    }
    Y[relevator][celevator] = 191;
    for (int c1 = 147; c1 < 150; c1++)
    {
        Y[relevator][c1] = 196;

    }
    Y[relevator + 4][celevator - 4] = 196;
    for (int c1 = 147; c1 < 150; c1++)
    {
        Y[relevator + 4][c1] = 196;

    }
    Y[relevator + 4][celevator] = 217;
}

void MoveElevator(int& r, int& c, int& dielevator, int& rHero, int& flagElevator)
{
    if (dielevator == 1)
    {
        r++;
    }
    if (flagElevator == 1 && dielevator == 1)
    {
        rHero++;
    }

    if (dielevator == -1)
    {
        r--;
    }

    if (flagElevator == 1 && dielevator == -1)
    {
        rHero--;
    }

    if (r == 18)
    {
        dielevator = -1;
    }
    if (r == 11)
    {
        dielevator = 1;
    }

}

void ErsemHeroY(char Y[][160], int rHero, int cHero, int flagJetBack, int flagHoldRope, int flagMoveRope)
{
    if (flagJetBack == 0 || flagJetBack == 2)
    {
        Y[rHero][cHero] = 1;
        Y[rHero + 1][cHero] = 30;
        Y[rHero + 1][cHero - 1] = '/';
        Y[rHero + 1][cHero + 1] = '\\';
        Y[rHero + 2][cHero - 1] = '/';
        Y[rHero + 2][cHero + 1] = '\\';
    }

    if (flagJetBack == 1)
    {
        Y[rHero][cHero] = 1;
        Y[rHero + 1][cHero] = 30;
        Y[rHero + 1][cHero - 1] = '/';
        Y[rHero + 1][cHero - 2] = 204;
        Y[rHero + 1][cHero + 1] = '\\';
        Y[rHero + 1][cHero + 2] = 185;
        Y[rHero + 2][cHero - 1] = '/';
        Y[rHero + 2][cHero + 1] = '\\';

    }
    if (flagHoldRope == 1 || flagMoveRope == 1)
    {
        Y[rHero][cHero] = 1;
        Y[rHero + 1][cHero] = 30;
        Y[rHero + 1][cHero - 1] = '/';
        Y[rHero][cHero + 1] = '//';
        Y[rHero + 1][cHero + 1] = ' ';
        Y[rHero + 2][cHero - 1] = '/';
        Y[rHero + 2][cHero + 1] = '\\';
    }

}

void HarakHeroY(char Y[][160], int& rHero, int& cHero, char mv, int& flagJetpack, int& flagLadder1up, int& ctl1up, int& flagLadder1down, int& ctl1down, int& flagLadder2up, int& ctl2up, int& flagLadder2down, int& ctl2down, int& flagHoldRope, int& cthr, int& flagHeroMoveRope, int& ctmr, int& surfacecheck1, int& flagjump, int& ctj, int& surfacecheck, int& flagfall, int& flagElevator, int& dielevator)
{
    if (mv == 'w' && Y[rHero - 1][cHero] == ' ' && flagLadder1up == 0 && flagLadder2up == 0 && flagJetpack == 0)
    {
        rHero--;

    }

    if (mv == 'w' && Y[rHero - 1][cHero] == ' ' && flagLadder1up == 0 && flagLadder2up == 0 && flagJetpack == 1 || mv == 'w' && Y[rHero - 1][cHero] == -23 && flagLadder1up == 0 && flagLadder2up == 0 && flagJetpack == 1)
    {
        rHero--;

    }


    if (mv == 's' && Y[rHero + 3][cHero] == ' ' && flagJetpack == 0)
    {
        if (rHero < 20)
        {
            rHero++;
        }

    }

    if (mv == 's' && Y[rHero + 3][cHero] == ' ' && flagJetpack == 1 || mv == 's' && Y[rHero + 3][cHero] == -23 && flagJetpack == 1)
    {
        if (Y[rHero + 4][cHero] == ' ' || Y[rHero + 4][cHero] == -23)
        {
            rHero++;
        }

    }

    if (mv == 'a' && Y[rHero][cHero - 1] == ' ' && Y[rHero + 1][cHero - 2] == ' ' && Y[rHero + 2][cHero - 2] == ' ' || mv == 'a' && cHero == 15 || mv == 'a' && cHero == 14 || mv == 'a' && cHero == 13 || mv == 'a' && cHero == 12 || mv == 'a' && cHero == 71 || mv == 'a' && cHero == 70 || mv == 'a' && cHero == 69 || mv == 'a' && cHero == 68 || mv == 'a' && cHero == 79 || mv == 'a' && cHero == 80 || mv == 'a' && cHero == 81 || mv == 'a' && cHero == 82 || mv == 'a' && cHero == 61 || mv == 'a' && cHero == 59 || mv == 'a' && cHero == 57 || mv == 'a' && cHero >= 143 && cHero <= 153) {

        if (cHero > 1) {
            cHero--;

        }
    }

    if (mv == 'a' && Y[rHero][cHero - 2] == ' ' && Y[rHero + 1][cHero - 3] == ' ' && Y[rHero + 2][cHero - 3] == ' ' && flagJetpack == 1 || mv == 'a' && flagJetpack == 1 && cHero == 28 || mv == 'a' && flagJetpack == 1 && cHero == 41 || mv == 'a' && rHero == 20 && cHero == 143 || mv == 'a' && rHero == 20 && cHero == 142 || mv == 'a' && rHero == 20 && cHero == 141)
    {
        if (cHero > 1)
        {
            cHero--;
        }

    }

    if (mv == 'd' && Y[rHero][cHero + 1] == ' ' && Y[rHero + 1][cHero + 2] == ' ' && Y[rHero + 2][cHero + 2] == ' ' || mv == 'd' && cHero == 9 || mv == 'd' && cHero == 10 || mv == 'd' && cHero == 11 || mv == 'd' && cHero == 12 || mv == 'd' && cHero == 76 || mv == 'd' && cHero == 77 || mv == 'd' && cHero == 78 || mv == 'd' && cHero == 79 || mv == 'd' && cHero == 80 || mv == 'd' && cHero == 65 || mv == 'd' && cHero == 66 || mv == 'd' && cHero == 67 || mv == 'd' && cHero == 68 || mv == 'd' && cHero == 55 || mv == 'd' && cHero == 57 || mv == 'd' && cHero == 59 || mv == 'd' && cHero >= 143 && cHero < 153)
    {
        if (flagElevator == 0)
        {
            if (cHero < 160)
            {
                cHero++;

            }
        }
        else
        {
            if (cHero >= 146 && cHero <= 148)
            {
                cHero++;
            }

        }

    }
    if (mv == 'd' && Y[rHero][cHero + 2] == ' ' && Y[rHero + 1][cHero + 3] == ' ' && Y[rHero + 2][cHero + 3] == ' ' && flagJetpack == 1 || mv == 'd' && flagJetpack == 1 && cHero == 22 || mv == 'd' && flagJetpack == 1 && cHero == 35)
    {
        if (cHero < 160)
        {
            cHero++;
        }
    }

    if (flagElevator == 1)
    {
        if (dielevator == 1)
        {
            rHero++;
        }
        if (dielevator == -1)
        {
            rHero--;
        }

    }

    if (flagLadder1up == 1)
    {
        if (ctl1up == 0)
        {
            rHero--;
        }
        if (ctl1up == 1)
        {
            rHero--;
        }
        if (ctl1up == 2)
        {
            rHero--;
        }
        if (ctl1up == 4)
        {
            rHero--;

        }
        if (ctl1up == 5)
        {
            rHero--;
            flagLadder1up = 0;
        }
        ctl1up++;
        if (ctl1up >= 6)
        {
            ctl1up = 0;
        }
    }

    if (flagLadder1down == 1)
    {
        if (ctl1down == 0)
        {
            rHero++;
        }
        if (ctl1down == 1)
        {
            rHero++;
        }
        if (ctl1down == 2)
        {
            rHero++;
        }
        if (ctl1down == 4)
        {
            rHero++;

        }
        if (ctl1down == 5)
        {
            rHero++;
            flagLadder1down = 0;
        }
        ctl1down++;
        if (ctl1down >= 6)
        {
            ctl1down = 0;
        }
    }

    if (flagLadder2up == 1)
    {
        if (ctl2up == 0)
        {
            rHero--;
        }
        if (ctl2up == 1)
        {
            rHero--;
        }
        if (ctl2up == 2)
        {
            rHero--;

        }
        if (ctl2up == 3)
        {
            rHero--;

        }
        if (ctl2up == 4)
        {
            rHero--;

        }
        if (ctl2up == 5)
        {
            rHero--;
            flagLadder2up = 0;
        }
        ctl2up++;
        if (ctl2up >= 6)
        {
            ctl2up = 0;
        }
    }

    if (flagLadder2down == 1)
    {
        if (ctl2down == 0)
        {
            rHero++;
        }
        if (ctl2down == 1)
        {
            rHero++;
        }
        if (ctl2down == 2)
        {
            rHero++;

        }
        if (ctl2down == 3)
        {
            rHero++;

        }
        if (ctl2down == 4)
        {
            rHero++;

        }
        if (ctl2down == 5)
        {
            rHero++;
            flagLadder2down = 0;

        }
        ctl2down++;
        if (ctl2down >= 6)
        {
            ctl2down = 0;
        }

    }

    if (flagHoldRope == 1)
    {
        if (cthr == 0)
        {
            rHero--;

        }
        if (cthr == 1)
        {
            cHero++;
            flagHeroMoveRope = 1;
        }
        cthr++;
    }
    if (flagHeroMoveRope == 1)
    {
        if (ctmr == 0)
        {
            cHero++;

        }
        ctmr++;
    }

    if (flagjump == 1)
    {
        if (ctj == 0)
        {
            cHero++;
            rHero--;
        }
        if (ctj == 1)
        {
            cHero++;
            rHero--;
        }
        if (ctj == 2)
        {
            cHero++;
        }
        if (ctj == 3)
        {
            cHero++;
        }
        if (ctj == 4 && Y[rHero + 3][cHero + 2] == ' ')
        {
            cHero++;
            rHero++;
        }
        if (ctj == 5 && Y[rHero + 3][cHero + 2] == ' ')
        {
            rHero++;
        }
        ctj++;
        if (ctj == 6)
        {
            ctj = -1;
            flagjump = 0;
        }

    }
    if (Y[rHero + 3][cHero - 1] == ' ' && Y[rHero + 3][cHero + 1] == ' ' && flagjump == 0 && flagJetpack == 0 && flagHeroMoveRope == 0 && flagElevator == 0)
    {
        flagfall = 1;
    }
    else
    {
        flagfall = 0;
    }
    if (flagfall == 1 && flagHeroMoveRope == 0)
    {
        if (rHero < 20)
        {
            rHero++;
        }
    }

}

void MoveRope(int& cmvr, int& prevcr, int& flagMoveRope, int& cHero, int& flagHeroMoveRope, int& flagHoldRope)
{
    prevcr = cmvr;
    if (cmvr < 136 && flagMoveRope == 1)
    {
        cmvr++;
        cHero++;
    }
    else
    {
        flagMoveRope = 0;
        flagHeroMoveRope = 0;
        flagHoldRope = 0;
    }

}

void DrawRope(char Y[][160], int cmvr, int prevcr, int flagMoveRope)
{
    for (int r = 4; r < 10; r += 2)
    {
        Y[r][cmvr] = 186;

    }
    for (int r = 5; r < 11; r += 2)
    {
        Y[r][cmvr] = 'O';

    }
    if (flagMoveRope == 1)
    {
        for (int r = 4; r < 11; r++)
        {
            Y[r][prevcr] = ' ';

        }
    }

}

void DrawArrows(char X[][160], int r, int c)
{
    X[r + 1][c] = '|';
    X[r + 2][c] = 31;

}

void MoveArrow(int& r, int& c, int& dirarrow)
{
    if (dirarrow == 1)
    {
        r++;
    }
    if (dirarrow == -1)
    {
        r--;
    }
    if (r == 2)
    {
        dirarrow = -1;
    }
    if (r == 1)
    {
        dirarrow = 1;
    }

}

void drawlaser(char X[][160], int r, int c)
{
    X[r + 1][c] = 179;
    X[r + 2][c] = 179;
}

void movelaser(int& r, int& c, int& dilaser)
{
    if (dilaser == 1)
    {
        r++;
    }
    if (dilaser == -1)
    {
        r--;
    }
    if (r == 2)
    {
        dilaser = -1;
    }
    if (r == 1)
    {
        dilaser = 1;
    }
}

void ErsemEnemy3(char Y[][160], int renemy3, int cenemy3)
{
    Y[renemy3][cenemy3] = 254;
    Y[renemy3 + 1][cenemy3] = 186;
}

void HarakEnemy3(char Y[][160], int& renemy3, int& cenemy3, int& direnemy, int& flagTouch)
{
    if (cenemy3 < 79)
    {
        if (direnemy == 1)
        {
            renemy3--;
        }
        if (direnemy == -1)
        {
            renemy3++;
        }
        if (renemy3 == 19)
        {
            direnemy = -1;
        }
        if (renemy3 == 20)
        {
            direnemy = 1;
        }

        cenemy3++;
    }
    if (renemy3 == 19)
    {
        flagTouch = 1;
    }

}

void DisplayY(char Y[][160])
{
    system("cls");
    for (int r = 0; r < 24; r++)
    {
        for (int c = 0; c < 160; c++)
        {
            cout << Y[r][c];
        }
    }
}



int main()
{
    int rHero = 20, cHero = 2;
    int flagJetpack = 0;
    int rarrow1 = 1, carrow1 = 30, dirarrow1 = 1;
    int rarrow2 = 1, carrow2 = 31, dirarrow2 = 1;
    int rarrow3 = 1, carrow3 = 32, dirarrow3 = 1;
    int rlaser1 = 7, claser1 = 18, dilaser1 = 1;
    int relevator = 11, celevator = 150, dielevator = 1, slower = 0;
    int flagHoldRope = 0, cthr = 0, flagMoveRope = 0, flagHeroMoveRope = 0, ctmr = 0;
    int cmvr = 107, prevcr = 0, fix = 1;;
    int renemy3 = 20, cenemy3 = 68, direnemy = 1;
    int flagButton = 0, k = 0, z = 0, flagTouch = 0;
    int flagLadder1up = 0, ctl1up = 0, flagLadder1down = 0, ctl1down = 0, flagLadder2up = 0, ctl2up = 0, flagLadder2down = 0, ctl2down = 0;
    int flagcoin1 = 0, flagcoin2 = 0, flagcoin3 = 0, flagcoin4 = 0, flagcoin5 = 0, flagcoin6 = 0, flagcoin7 = 0, flagcoin8 = 0, flagcoin9 = 0, flagcoin10 = 0, ctcoins = 0, check1 = 0, check2 = 0, check3 = 0, check4 = 0, check5 = 0, check6 = 0, check7 = 0, check8 = 0, check9 = 0, check10 = 0;;
    int flagElevator = 0, ctel = 0, openDoor = 0, prevre = 0, f = 0;
    int flagjump = 0, surfacecheck = 0, surfacecheck1 = 0, ctj = 0, flagfall = 0;
    char ch;
    char y[24][160];

    //enemy 3 platform continuation
    for (int c = 69; c < 80; c++)
    {
        y[19][c] = 220;
    }

    for (;;)
    {
        for (; !_kbhit();)
        {
            Background2(y);
            jetback(y, flagJetpack);
            enemyplatform(y, flagTouch, cenemy3, cHero);
            coinsY(y, flagcoin1, flagcoin2, flagcoin3, flagcoin4, flagcoin5, flagcoin6, flagcoin7, flagcoin8, flagcoin9, flagcoin10, ctcoins);
            endDoor(y, openDoor);
            if (flagjump == 1)
            {
                HarakHeroY(y, rHero, cHero, ch, flagJetpack, flagLadder1up, ctl1up, flagLadder1down, ctl1down, flagLadder2up, ctl2up, flagLadder2down, ctl2down, flagHoldRope, cthr, flagHeroMoveRope, ctmr, surfacecheck1, flagjump, ctj, surfacecheck, flagfall, flagElevator, dielevator);
            }
            if (flagfall == 1)
            {
                HarakHeroY(y, rHero, cHero, ch, flagJetpack, flagLadder1up, ctl1up, flagLadder1down, ctl1down, flagLadder2up, ctl2up, flagLadder2down, ctl2down, flagHoldRope, cthr, flagHeroMoveRope, ctmr, surfacecheck1, flagjump, ctj, surfacecheck, flagfall, flagElevator, dielevator);

            }


            if (flagButton == 0)
            {
                //hole
                for (int c = 69; c < 80; c++)
                {
                    y[22][c] = '_';
                    y[23][c] = ' ';
                }

                if (z % 10 == 0 && cHero >= 51)
                {
                    HarakEnemy3(y, renemy3, cenemy3, direnemy, flagTouch);
                }

                ErsemEnemy3(y, renemy3, cenemy3);

            }
            else
            {
                if (k == 0)
                {
                    y[22][70] = '|';
                    y[21][70] = '|';
                    y[20][70] = '|';
                    y[22][78] = '|';
                    y[21][78] = '|';
                    y[20][78] = '|';
                }
                else
                {
                    for (int c = 69; c < 80; c++)
                    {
                        y[22][c] = '_';
                        y[23][c] = ' ';
                    }
                }
                renemy3 = 23;
                ErsemEnemy3(y, renemy3, cenemy3);
                k++;
            }
            z++;
            MoveArrow(rarrow1, carrow1, dirarrow1);
            DrawArrows(y, rarrow1, carrow1);
            MoveArrow(rarrow2, carrow2, dirarrow2);
            DrawArrows(y, rarrow2, carrow2);
            MoveArrow(rarrow3, carrow3, dirarrow3);
            DrawArrows(y, rarrow3, carrow3);
            DrawElevator(y, relevator, prevre, flagElevator, openDoor, celevator);
            ErsemHeroY(y, rHero, cHero, flagJetpack, flagHoldRope, flagMoveRope);
            drawlaser(y, rlaser1, claser1);
            movelaser(rlaser1, claser1, dilaser1);


            if (fix == 1 && flagElevator == 1)
            {
                rHero--;
                fix++;
            }

            if (slower % 5 == 0)
            {
                MoveElevator(relevator, celevator, dielevator, rHero, flagElevator);

            }

            slower++;

            DrawRope(y, cmvr, prevcr, flagMoveRope);

            //touch moving arrows
            if (rHero == 4 && cHero == 30 || rHero == 4 && cHero == 31 || rHero == 4 && cHero == 32 || rHero == 5 && cHero == 30 || rHero == 5 && cHero == 31 || rHero == 5 && cHero == 32)
            {
                rHero = 20;
                cHero = 3;
                flagJetpack = 0;
            }

            if (flagLadder1up == 1)
            {
                HarakHeroY(y, rHero, cHero, ch, flagJetpack, flagLadder1up, ctl1up, flagLadder1down, ctl1down, flagLadder2up, ctl2up, flagLadder2down, ctl2down, flagHoldRope, cthr, flagHeroMoveRope, ctmr, surfacecheck1, flagjump, ctj, surfacecheck, flagfall, flagElevator, dielevator);
            }

            if (flagLadder1down == 1)
            {
                HarakHeroY(y, rHero, cHero, ch, flagJetpack, flagLadder1up, ctl1up, flagLadder1down, ctl1down, flagLadder2up, ctl2up, flagLadder2down, ctl2down, flagHoldRope, cthr, flagHeroMoveRope, ctmr, surfacecheck1, flagjump, ctj, surfacecheck, flagfall, flagElevator, dielevator);
            }

            if (flagLadder2up == 1)
            {
                HarakHeroY(y, rHero, cHero, ch, flagJetpack, flagLadder1up, ctl1up, flagLadder1down, ctl1down, flagLadder2up, ctl2up, flagLadder2down, ctl2down, flagHoldRope, cthr, flagHeroMoveRope, ctmr, surfacecheck1, flagjump, ctj, surfacecheck, flagfall, flagElevator, dielevator);
            }

            if (flagLadder2down == 1)
            {
                HarakHeroY(y, rHero, cHero, ch, flagJetpack, flagLadder1up, ctl1up, flagLadder1down, ctl1down, flagLadder2up, ctl2up, flagLadder2down, ctl2down, flagHoldRope, cthr, flagHeroMoveRope, ctmr, surfacecheck1, flagjump, ctj, surfacecheck, flagfall, flagElevator, dielevator);
            }

            //coins
            if (rHero == 13 && cHero == 25)
            {
                flagcoin1 = 1;
                if (check1 == 0)
                {
                    ctcoins++;
                    check1 = 1;
                }
            }

            if (rHero == 10 && cHero == 25)
            {
                flagcoin2 = 1;
                if (check2 == 0)
                {
                    ctcoins++;
                    check2 = 1;
                }
            }

            if (rHero == 15 && cHero == 38)
            {
                flagcoin3 = 1;
                if (check3 == 0)
                {
                    ctcoins++;
                    check3 = 1;
                }
            }

            if (rHero == 19 && cHero == 38)
            {
                flagcoin4 = 1;
                if (check4 == 0)
                {
                    ctcoins++;
                    check4 = 1;
                }
            }
            if (rHero == 3 && cHero == 59)
            {
                flagcoin5 = 1;
                if (check5 == 0)
                {
                    ctcoins++;
                    check5 = 1;
                }
            }
            if (rHero == 3 && cHero == 57)
            {
                flagcoin6 = 1;
                if (check6 == 0)
                {
                    ctcoins++;
                    check6 = 1;
                }
            }

            if (rHero == 3 && cHero == 55)
            {
                flagcoin7 = 1;
                if (check7 == 0)
                {
                    ctcoins++;
                    check7 = 1;
                }
            }

            if (rHero == 20 && cHero == 139)
            {
                flagcoin8 = 1;
                if (check8 == 0)
                {
                    ctcoins++;
                    check8 = 1;
                }
            }

            if (rHero == 20 && cHero == 140)
            {
                flagcoin9 = 1;
                if (check9 == 0)
                {
                    ctcoins++;
                    check9 = 1;
                }
            }

            if (rHero == 20 && cHero == 141)
            {
                flagcoin10 = 1;
                if (check10 == 0)
                {
                    ctcoins++;
                    check10 = 1;
                }
            }

            if (flagHoldRope == 1)
            {
                HarakHeroY(y, rHero, cHero, ch, flagJetpack, flagLadder1up, ctl1up, flagLadder1down, ctl1down, flagLadder2up, ctl2up, flagLadder2down, ctl2down, flagHoldRope, cthr, flagHeroMoveRope, ctmr, surfacecheck1, flagjump, ctj, surfacecheck, flagfall, flagElevator, dielevator);
            }
            if (flagMoveRope == 1)
            {
                HarakHeroY(y, rHero, cHero, ch, flagJetpack, flagLadder1up, ctl1up, flagLadder1down, ctl1down, flagLadder2up, ctl2up, flagLadder2down, ctl2down, flagHoldRope, cthr, flagHeroMoveRope, ctmr, surfacecheck1, flagjump, ctj, surfacecheck, flagfall, flagElevator, dielevator);
                MoveRope(cmvr, prevcr, flagMoveRope, cHero, flagHeroMoveRope, flagMoveRope);
            }

            //return to platform after rope
            if (cHero == 133 && rHero == 9)
            {
                rHero++;
            }

            //raise hand to hold rope
            if (cHero == 103 && rHero == 9)
            {
                y[rHero][cHero + 1] = '//';
                y[rHero + 1][cHero + 1] = ' ';
            }
            //get the hand back
            if ((cHero == 134 && rHero == 10) || (cHero == 133 && rHero == 10))
            {
                flagHoldRope = 0;
            }

            //the big spike
            if (rHero == 20 && cHero >= 103 && cHero < 135)
            {
                rHero = 20;
                cHero = 2;
            }

            //make the gravity work after using the jetpack
            if (rHero == 20 && cHero == 51)
            {
                flagJetpack = 0;
            }

            //laser
            if (rlaser1 == 21)
            {
                rlaser1 = 7;
            }

            //make the hero die from the laser
            if (rHero == rlaser1 && cHero == 18 || rHero == rlaser1 && cHero == 17 || rHero == rlaser1 && cHero == 19)
            {
                rHero = 20;
                cHero = 2;
                flagJetpack = 0;
            }

            if (cHero == 146 && y[rHero + 3][cHero] == -60 || cHero == 147 && y[rHero + 3][cHero] == -60 || cHero == 148 && y[rHero + 3][cHero] == -60 || cHero == 149 && y[rHero + 3][cHero] == -60)
            {
                flagElevator = 1;
            }

            cout << "chero:" << cHero << endl << "rhero: " << rHero << endl << "flag elevator: " << flagElevator;
            DisplayY(y);

        }

        ch = _getch();
        HarakHeroY(y, rHero, cHero, ch, flagJetpack, flagLadder1up, ctl1up, flagLadder1down, ctl1down, flagLadder2up, ctl2up, flagLadder2down, ctl2down, flagHoldRope, cthr, flagHeroMoveRope, ctmr, surfacecheck1, flagjump, ctj, surfacecheck, flagfall, flagElevator, dielevator);

        if (ch == ' ')
        {
            flagjump = 1;
        }
        if (ch == 'd' && cHero == 12 && rHero == 18)
        {
            flagJetpack = 1;
        }

        if (ch == 'd' && cHero == 51)
        {
            flagJetpack = 2;
            rHero = 20;
        }

        if (ch == 'w' && cHero == 68 && rHero == 8)
        {
            flagLadder1up = 1;
        }

        if (ch == 's' && cHero == 68 && rHero == 3)
        {
            flagLadder1down = 1;

        }

        if (ch == 'w' && cHero == 79 && rHero == 14)
        {
            flagLadder2up = 1;
        }

        if (ch == 's' && cHero == 79 && rHero == 8)
        {
            flagLadder2down = 1;

        }

        if (ch == 'r' && cHero == 102 && rHero == 10)
        {
            flagHoldRope = 1;
        }

        if (ch == 'd' && cHero == 104 && rHero == 9)
        {
            flagMoveRope = 1;
        }

        if (ch == 'o' && cHero == 153 && rHero == 20)
        {
            openDoor = 1;
        }


        if (cHero == 146 && y[rHero + 3][cHero] == -60 || cHero == 147 && y[rHero + 3][cHero] == -60 || cHero == 148 && y[rHero + 3][cHero] == -60 || cHero == 149 && y[rHero + 3][cHero] == -60 || cHero == 150 && y[rHero + 3][cHero] == -60)
        {
            flagElevator = 1;
        }

        if (ch == 'a' && cHero == 145 || ch == 'a' && cHero == 146)
        {
            flagElevator = 0;
        }

        //open space under enemy
        if (cHero == 62 && rHero == 18)
        {
            flagButton = 1;
        }

        ErsemHeroY(y, rHero, cHero, flagJetpack, flagHoldRope, flagMoveRope);

    }

}