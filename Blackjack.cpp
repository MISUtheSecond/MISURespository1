// This program runs a simplistic game of BlackJack
#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <iterator>
#include <array>
#include <chrono>
using namespace std;

//vector<int> vector1 = {1, 2, 3, 4, 5};



int main(){

    vector<int> deck = {2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11};
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle (deck.begin(), deck.end(), default_random_engine(seed));

    vector<int> shuffledDeck = deck;

//shuffle(deck.begin(), deck.end(), 52);
//initialise and shuffle deck
//vector<int> deck = {2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11};
//random_shuffle(deck.begin(),deck.end());

//initalise computer hits
    //int comp[3] = {1, 2, 3};
    //int compShuffle[3] = random_shuffle(comp);
    int compShuffle = rand() % 3 + 1;


int compSum1 = 0;
int compSum2 = 0;
int compSum3 = 0;
int compSum4 = 0;
int compSum5 = 0;

//initialise sum, adds first two cards
int sum1 = 0;
int sum2 = sum1 + shuffledDeck[0] + shuffledDeck[2];
int sum3 = 0;
int sum4 = 0;
int sum5 = 0;
int sum6 = 0;

//initialise turns
int turn1 = 9;
int turn2 = 9;
int turn3 = 9;
int turn4 = 9;
int turn5 = 9;

//double value ace rule
if (shuffledDeck[0] == 11 && sum2 > 21){
    sum1 = 1 + shuffledDeck[2];
    cout << "Your cards are Ace and Ace";
    cout << "\nThe sum of these cards is: " << sum1;
    cout << "\nThe computer's first card is: " << shuffledDeck[1];
    cout << "\nWould you like to stand[0] or hit[1]? ";
    cin >> turn1;
}
else {
    sum1 = sum2;
    cout << "Your cards are " << shuffledDeck[0] << " and " << shuffledDeck[2];
    cout << "\nThe sum of these cards is: " << sum2;
    cout << "\nThe computer's first card is: " << shuffledDeck[1];
    cout << "\nWould you like to stand[0] or hit[1]? ";
    cin >> turn1;
}

//computer hit randomiser
for (int i = 0; i <= compShuffle; i++){
    compSum1 = compSum1 + shuffledDeck[1];
    compSum2 = compSum2/compShuffle;
}

//set sum3
sum3 == sum1;
//if player hits, display first card
if (turn1 == 1){
    sum3 = sum1 + shuffledDeck[4];

    if (shuffledDeck[4] == 11 && sum3 > 21){
        sum3 = sum1 + 1;
        //display first card
        cout << "\nThe first hit card is: Ace";
        cout << "\nThe sum of these cards is: " << sum3;
        cout << "\nDo you wish to stand[0] or hit[1]? ";
        cin >> turn2;
        sum1 == sum3;
    }
    else{
        cout << "\nThe first hit card is: " << shuffledDeck[4];
        cout << "\nThe sum of these cards is: " << sum3;
        sum1 == sum3;
        //lose if greater than 21
        if (sum3 > 21){
            cout << "\nBust! Better Luck Next Time";
            return 0;
        }
        else{
            cout << "\nWould you like to stand[0] or hit[1]? ";
            cin >> turn2;
        }
    }
}

if (turn1 == 0){
    turn2 = 0;
    turn3 = 0;
    turn4 = 0;
}

//set sum4
sum4 == sum3;
//if player hits, display second card
if (turn2 == 1){
    sum4 = sum3 + shuffledDeck[6];

    if (shuffledDeck[6] == 11 && sum3 > 21){
        sum4 = sum3 + 1;
        //display second card
        cout << "\nThe second hit card is: Ace";
        cout << "\nThe sum of these cards is: " << sum4;
        cout << "\nDo you wish to stand[0] or hit[1]? ";
        cin >> turn3;
        sum1 == sum4;
    }
    else{
        cout << "\nThe second hit card is: " << shuffledDeck[6];
        cout << "\nThe sum of these cards is: " << sum4;
        sum1 == sum4;
        //lose if greater than 21
        if (sum4 > 21){
            cout << "\nBust! Better Luck Next Time";
            return 0;
        }
        else{
            cout << "\nWould you like to stand[0] or hit[1]? ";
            cin >> turn3;
        }
    }
}

if (turn2 == 0){
    turn1 = 0;
    turn3 = 0;
    turn4 = 0;
}

//set sum5
sum5 == sum4;
//if player hits, display second card
if (turn3 == 1){
    sum5 = sum4 + shuffledDeck[8];

    if (shuffledDeck[8] == 11 && sum3 > 21){
        sum5 = sum4 + 1;
        //display third card
        cout << "\nThe third hit card is: Ace";
        cout << "\nThe sum of these cards is: " << sum5;
        cout << "\nDo you wish to stand[0] or hit[1]? ";
        cin >> turn4;
        sum1 == sum5;
    }
    else{
        cout << "\nThe third hit card is: " << shuffledDeck[8];
        cout << "\nThe sum of these cards is: " << sum5;
        sum1 == sum5;
        //lose if greater than 21
        if (sum5 > 21){
            cout << "\nBust! Better Luck Next Time";
            return 0;
        }
        else{
            cout << "\nWould you like to stand[0] or hit[1]? ";
            cin >> turn4;
        }
    }
}


if (turn3 == 0){
    turn1 = 0;
    turn2 = 0;
    turn4 = 0;
}


//set sum6
sum6 == sum5;
//if player hits, display second card
if (turn4 == 1){
    sum6 = sum5 + shuffledDeck[10];

    if (shuffledDeck[10] == 11 && sum3 > 21){
        sum6 = sum5 + 1;
        //display fourth card
        cout << "\nThe fourth hit card is: Ace";
        cout << "\nThe sum of these cards is: " << sum6;
        cout << "\nDo you wish to stand[0] or hit[1]? ";
        cin >> turn5;
        sum1 == sum6;
    }
    else{
        cout << "\nThe third hit card is: " << shuffledDeck[10];
        cout << "\nThe sum of these cards is: " << sum6;
        sum1 == sum6;
        //lose if greater than 21
        if (sum6 > 21){
            cout << "\nBust! Better Luck Next Time";
            return 0;
        }
        else{
            cout << "\nWould you like to stand[0] or hit[1]? ";
            cin >> turn5;
        }
    }
}

if (turn4 == 0){
    turn1 = 0;
    turn2 = 0;
    turn3 = 0;
}

while (turn1 == 0 && sum1 <= 21 && turn2 == 0 && sum3 <= 21 && turn3 == 0 && sum4 <= 21 && turn4 == 0 && sum5 <= 21){

    compSum3 = compSum2 + shuffledDeck[3];

    if (shuffledDeck[3] == 11 && compSum3 > 21){
        compSum3 = 1 + shuffledDeck[3];
        cout << "The computer's second card is: Ace";
    }
    else{
        cout << "The computer's second card is: " << shuffledDeck[3];
    }


    compSum4 = compSum3 + shuffledDeck[6];
    compSum5 = compSum4 + shuffledDeck[8];

    if (compSum3 >= 17 && compSum3 <= 21){
        compShuffle = 1;
    }

    if (compSum3 < 17){
        compShuffle = 2;
    }

    if (compSum4 < 17){
        compShuffle = 3;
    }


    if (compShuffle == 1){
        cout << "\nThe computer did not Hit";
        cout << "\nThe computer's cards sum to: " << compSum3;

        //determine winner
        if (compSum3 > sum1 && compSum3 <= 21){
            cout << "\nThe Computer wins! Bad Luck!";
        }
        else if (compSum3 == sum1){
            cout << "\nIts a Draw!";
        }
        else {
            cout << "Blackjack! You Win!";
        }

    }

    else if (compShuffle == 2){
        cout << "\nThe computer hit 1 time!";
        cout << "\nThe computer's first card is: " << shuffledDeck[5];
        cout << "\nThe computer's cards sum to: " << compSum4;
        compSum5 = compSum4;

        //determine winner
        if (compSum4 > sum1 && compSum4 <= 21){
            cout << "\nThe Computer wins! Bad Luck!";
        }
        else if (compSum4 == sum1){
            cout << "\nIts a Draw!";
        }
        else {
            cout << "Blackjack! You Win!";
        }

    }

    else if (compShuffle == 3){
        cout << "\nThe computer hit 2 times!";
        cout << "\nThe computer's first card is: " << shuffledDeck[5];
        cout << "\nThe computer's second card is: " << shuffledDeck[7];
        cout << "\nThe computer's cards sum to: " << compSum5;


        //determine winner
        if (compSum5 > sum1 && compSum5 <= 21){
            cout << "\nThe Computer wins! Bad Luck!";
        }
        else if (compSum5 == sum1){
            cout << "\nIts a Draw!";
        }
        else {
            cout << "Blackjack! You Win!";
        }

    }

    else {
        continue;
    }

return 0;
}}
