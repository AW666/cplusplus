#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int main(){
    int scoreAntonia = 100;
    int scoreDavid = 100;
    int diceAntonia = 0;
    int diceDavid = 0;
    int dicemax = 6;
    int dicemin = 1;
    int numRound = 4;

    srand(time(0));
    for(int i = 0; i < numRound; i++){
        diceAntonia = rand() % dicemax + dicemin;
        cout << "Antonia: " << diceAntonia << " ";

        diceDavid = rand() % dicemax + dicemin;
        cout << "David: " << diceDavid <<endl;

        if (diceAntonia > diceDavid){
            scoreDavid = scoreDavid - diceAntonia;
        }
        else if (diceAntonia < diceDavid){
            scoreAntonia = scoreAntonia - diceDavid;
        }
        else{
            scoreAntonia = scoreAntonia - 0;
            scoreDavid = scoreDavid - 0;
        }

    }

    cout << scoreAntonia << " " << scoreDavid << endl;

}
