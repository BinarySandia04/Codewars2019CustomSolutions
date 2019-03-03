#include <iostream>

void problema1();
void problema2();
void problema3();
void problema4();
void problema5();
void problema6();

void problemPickerLoop(int what){
  if(what == 1)
    problema1();
  else if(what == 2)
    problema2();
  else if(what == 3)
    problema3();
  else if(what == 4)
    problema4();
  else if(what == 5)
    problema5();
  else if(what == 6)
    problema6();
}
