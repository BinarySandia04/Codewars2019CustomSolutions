#include <iostream> // std::cin, std::cout
#include <fstream> // File stream
#include <algorithm> // std::reverse
#include <sstream> // stringstream
#include <string>

void problema1();
void problema2();
void problema3();
void problema4();
void problema5();
void problema6();


void setFileBuffer(std::string s);

// Codigo aburrido para seleccionar problema
void problemPickerLoop(std::string what, bool file){
  if(what == "1"){
    if(file){
      setFileBuffer("1");
    }
    problema1();
  }
  else if(what == "2"){
    if(file){
      setFileBuffer("2");
    }
    problema2();
  }
  else if(what == "3"){
    if(file){
      setFileBuffer("3");
    }
    problema3();
  }
  else if(what == "4"){
    if(file){
      setFileBuffer("4");
    }
    problema4();
  }
  else if(what == "5"){
    if(file){
      setFileBuffer("5");
    }
    problema5();
  }
  else if(what == "6"){
    if(file){
      setFileBuffer("6");
    }
    problema6();
  }
}

// Codigo divertido para leer input de un archivo al ejecutar un problema
void setFileBuffer(std::string filename){
  std::ifstream file;
  std::string s;
  file.open("inputs/" + filename + ".txt");

  std::string temptext;
  std::stringstream ss;

  if (file.is_open()) {
    while (!file.eof()) {
      std::getline(file, temptext);
      s = s + temptext;
    }
  }
  file.close();

  std::reverse(s.begin(), s.end());
  ss << s;
  char readedChar;

  readedChar = ss.get();
  while(readedChar != -1){
    std::cin.putback(readedChar);
    readedChar = ss.get();
  }
}
