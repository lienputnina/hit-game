#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using namespace std;

class Character {

  // Private - viss, ko izmanto tikai iekš klases definīcijas
private:
  string name;
  int life;

  char path[10] = {};

  // Public - viss, ko izmanto arī ārpus klases definīcijas
public:
  // Constructor - just a regular function with parameters
  Character(string name, int life);

  /*
  Destruktors - tiek izsaukts objekta iznīcināšanas brīdī. Pats neko neiznīcina,
  bet izpilda objekta beigšanas operācijas pirms sistēma atbrīvo atmiņas
  apgabalu. Parasti izmanto klasēs, kur ir darbs ar dinamisko atmiņu.
  */
  ~Character();

  bool Hit(int);
  int GetLife();
  void Go(char move);
  void PrintCharacter();
  bool IsAlive();
  void PrintLife();
  int moveCount = 0;
};

#endif