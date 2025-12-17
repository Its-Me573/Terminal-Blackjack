#include <iostream>

int main(){

}
/** 
 
Card struct

card(){
string suite;
int value
};

House class includes
-Has the card deck array
-Has the initial cards dealt
-Constuctor that initializes the house with an array of strings with
 card structs that each contain. Number and suit, or face value. the value of
 the ace will remain 40 and will be changed while the player is playing the game
 to allow for debugging when the amount is wrong and bugged

 -Function to randomize the array of cards and shuffle them

Player class
-Has the players cards that were dealt to the player by house class
-Has the current money amount that the player is given. a base of $1,000 to play
-constructor that intilizes the players wallet amount as $1,000
-Array that will hold the struct that holds cards given to by the house

Main file
will run the game. will include logic to run the game and will keep track of info
that requires all the other class info. 
**/


/** 
┌──────┐
│J ♠   │
│  ♠   │
│ J    │
│  ♠ J │
└──────┘

┌──────┐
│Q ♠   │
│ ♠ ♠  │
│  Q   │ │
│  ♠ Q │
└──────┘

┌──────┐
│K ♠   │
│ ♠ ♠  │
│  K   │
│  ♠ K │
└──────┘
-----------------------------

┌──────┐
│J ♥   │
│  ♥   │
│ J    │
│  ♥ J │
└──────┘

┌──────┐
│Q ♥   │
│ ♥ ♥  │
│  Q   │
│  ♥ Q │
└──────┘

┌──────┐
│K ♥   │
│ ♥ ♥  │
│  K   │
│  ♥ K │
└──────┘

------------------------------------------

┌──────┐
│J ♦   │
│  ♦   │
│ J    │
│  ♦ J │
└──────┘

┌──────┐
│Q ♦   │
│ ♦ ♦  │
│  Q   │
│  ♦ Q │
└──────┘

┌──────┐
│K ♦   │
│ ♦ ♦  │
│  K   │
│  ♦ K │
└──────┘

┌──────┐
│J ♣   │
│  ♣   │
│ J    │
│  ♣ J │
└──────┘

┌──────┐
│Q ♣   │
│ ♣ ♣  │
│  Q   │
│  ♣ Q │
└──────┘

┌──────┐
│K ♣   │
│ ♣ ♣  │
│  K   │
│  ♣ K │
└──────┘

**/