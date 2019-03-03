#include <iostream>

void problema1();
void problema2();
void problema3();
void problema4();
void problema5();
void problema6();

void problemPickerLoop(int what){
  switch (what) {
    case 1:
      problema1();
    case 2:
      problema2();
    case 3:
      problema3();
    case 4:
      problema4();
    case 5:
      problema5();
    case 6:
      problema6();
  }
}
