// (c) Aran Roig, Unai Canudas 2019
/*
Problemes per HP Codewars 2019
*/

#include <iostream>
#include <sstream>
#include <string>
#include "../headers/menu.h"

using namespace std;

int main(int argc, char const *argv[]){
  int code;
  cout << "Executar amb codi? ";
  cin >> code;

  string intValue;
  cout << "Quin problema? ";
  cin >> intValue;
  if(code == 1) problemPickerLoop(intValue, true);
  else problemPickerLoop(intValue, false);

  return 0;
}

// Coordinates arranger
void problema1(){
  /*
  Example 1:
    Input:
      3
      4
      5
    Output:
      (3, 4, 5)
  Example 2:
    Input:
      0
      -7831
      2323
    Output:
      (0, -7831, 2323)
  */
  int a, b, c;
  cin >> a >> b >> c;
  cout << "(" << a << ", " << b << ", " << c << ")" << endl;
}
// Lemonade
void problema2(){
  /*
  Exemple 1:
  INPUT:
  3

  OUTPUT:
  3 lemonade jars

  Exemple 2:
  INPUT:
  1

  OUTPUT:
  1 lemonade jar
  */


  // a lemonade jar == 1
  // a>1 a Lemonade jars
  int a;
  cin >> a;
  if (a == 1){
    cout << a << " lemonade jar";
  } else {
    cout << a << " lemonade jars";
  }
  cout << endl;
}
// Where will the wedding take place?
void problema3(){
  /*
  Example 1:
    INPUT:
      50
      20
    OUTPUT:
      The wedding will take place in Monestir de Sant Cugat.
  Example 2:
    INPUT:
      100
      250
    OUTPUT:
      The wedding will take place in very big masia.
  */

  int a, b;
  cin >> a >> b;
  if ((a + b) < 100){
    cout << "The wedding will take place in Monestir de Sant Cugat.";
  } else {
    cout << "The wedding will take place in very big masia.";
  }
  cout << endl;
}
// Abel wants to play Fortnite!
void problema4(){
  // Abel wants to play Fortnite!
  /*
  The Fortnite game needs at least the following pc specifications to run properly:

  - Processor generation: 5
  - Graphics card memory: 2
  - Free storage memory: 50

  <Processor generation>
  <Graphics card memory>
  <Free storage memory>

  Example 1:
    Input:
      7
      4
      100
    Output:
      You can run the game
  Example 1:
    Input:
      5
      1
      500
    Output:
      You can NOT run the game
  */
  int a, b, c;
  cin >> a >> b >> c;
  if (a >= 5 && b >= 2 && c >= 50) {
    cout << "You can run the game" << endl;
  }
  else {
    cout << "You can NOT run the game" << endl;
  }
}
// Rating movies
void problema5(){

}
// Shopping list for a party
void problema6(){
  /*
  Per 5 persones:
  - 1 natural yogurt.
  - 3 eggs.
  - 250gr flour.
  - 125gr cocoa powder.
  - 250gr sugar.
  - 125gr olive oil.
  - 1 packet of yeast.

  Exemple 1:
    Input:
      5
    Output:
      - 1 natural yogurt.
      - 3 eggs.
      - 250gr flour.
      - 125gr cocoa powder.
      - 250gr sugar.
      - 125gr olive oil.
      - 1 packet of yeast.
  Exemple 2:
    Input:
      12
    Output:
      - 3 natural yogurt.
      - 9 eggs.
      - 750gr flour.
      - 375gr cocoa powder.
      - 750gr sugar.
      - 350gr olive oil.
      - 3 packet of yeast.
  */

  int nombrePastissos;

  cin >> nombrePastissos;

  int residu = nombrePastissos % 5;

  nombrePastissos = nombrePastissos / 5;

  if (residu != 0){
    // nombrePastissos = nombrePastissos + 1;
    // nombrePastissos += 1;
    nombrePastissos++;
  }

  int yogurt = 1 * nombrePastissos;
  int eggs = 3 * nombrePastissos;
  int flour = 250 * nombrePastissos;
  int cocoa = 125 * nombrePastissos;
  int sugar = 250 * nombrePastissos;
  int uliva = 125 * nombrePastissos;
  int yeast = 1 * nombrePastissos;

  cout << "- " << yogurt << " natural yogurt." << endl;
  cout << "- " << eggs << " eggs." << endl;
  cout << "- " << flour << "gr flour." << endl;
  cout << "- " << cocoa << "gr cocoa powder." << endl;
  cout << "- " << sugar << "gr sugar." << endl;
  cout << "- " << uliva << "gr olive oil." << endl;
  cout << "- " << yeast << " packet of yeast." << endl;

}
