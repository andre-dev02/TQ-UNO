#ifndef MENU_H
#define MENU_H
 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <iomanip>
 
using namespace std;
 
void ajuda (int opc){
 
setlocale(LC_ALL,"");
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << setw(150) << "------------------------------------- A J U D A ----------------------------------------------" << endl << endl;
 
    cout << setw(150) << "Esta eh uma versao adaptada de um dos jogos mais famosos de todos e tempos.                   " << endl;
    cout << setw(150) << "Nosso jogo promete diversao garantida entre dois oponestes que se enfrentarao                 " << endl;
    cout << setw(150) << "ate que um dos deles fique sem nenhuma carta, ganhando assim o jogo.                          " << endl;
    cout << setw(150) << "Cada cor eh representada por um numero de 0 a 4 e o valor das cartas eh representado          " << endl;
    cout << setw(150) << "Por seus numeros ou por sua letra inicia, no caso das cartas especiais                        " << endl << endl;
 
    cout << setw(150) << " _____                           _____                                                        " << endl;
    cout << setw(150) << "|     |                         |     |                                                       " << endl;
    cout << setw(150) << "|  C  | 0 -> Amarelo            |  C  | +  -> O proximo jogador ganha duas cartas do monte    " << endl;
    cout << setw(150) << "|  O  | 1 -> Azul               |  A  | M  -> O proximo jogador ganha quatro do cartas monte  " << endl;
    cout << setw(150) << "|  R  | 2 -> vermelho           |  R  | B  -> Bloqueia o proximo jogador a jogadar            " << endl;
    cout << setw(150) << "|  E  | 3 -> verde              |  T  | R  -> Inverte a ordem de jogada                       " << endl;
    cout << setw(150) << "|  S  | 4 -> Preto              |  A  | T  -> Troca a cor da rodada                           " << endl;
    cout << setw(150) << "|     |                         |  S  |                                                       " << endl;
    cout << setw(150) << "| ___ |                         | ___ |                                                       " << endl << endl;
 
    cout << setw(150) << "Para jogar basta digitar o numero da cor e o valor da carta, ex.: 0 4 (carta                  " << endl;
    cout << setw(150) << "numero 4 amarela), 2 B (carta de bloqueio Vermelha).                                          " << endl;
    cout << setw(150) << "Se precise pegar uma carta do monte, digite 5 5. Agora eh so se divertir!!!                   " << endl;
    cout << setw(150) << "------------------------------------- A J U D A ----------------------------------------------" << endl << endl;
 
}
#endif
