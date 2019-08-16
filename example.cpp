#include "color.h"

int main() {
   std::cout << at(bo)"beep" << fg(r)"hello in red?" << clendl;
   std::cout << fg(r)"Red text" << clendl;
   std::cout << bg(k)fg(r)"Red text and black background" << clendl;
   std::cout << bg(g)fg(k)"Black text and green background" << clendl;
   std::cout << fg(m)"Magenta text... " << fg(c)"Cyan text" << clendl;
   std::cout << fg(c)"Cyan text... " << at(ul)"Cyan text that's underlined... " << rm(ul)"No longer underlined but still cyan" << clendl;
   std::cout << "No bold... " << at(bo)"Bold bold bold... " << rm(bo)"no more bold" << clendl;
   std::cout << at(bk)"Blink " << fg(c)"blink " << bg(g)fg(k)"blink... " << rm(bk)rm(hl)"No blink." << clendl;
   std::cout << fg(m)bg(k)at(bo)"Some text..." << at(hl)"Highlighted text..." << rm(hl)"Not highlighted" << clendl;
   std::cout << at(dm)"Half-bright as usual... " << rm(dm)"can you tell the difference?" << clendl;
   return 0;
}
