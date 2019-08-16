#include "color.h"

int main() {
   cout << at(bo)"beep" << fg(r)"hello in red?" << clendl;
   cout << fg(r)"Red text" << clendl;
   cout << bg(k)fg(r)"Red text and black background" << clendl;
   cout << bg(g)fg(k)"Black text and green background" << clendl;
   cout << fg(m)"Magenta text... " << fg(c)"Cyan text" << clendl;
   cout << fg(c)"Cyan text... " << at(ul)"Cyan text that's underlined... " << rm(ul)"No longer underlined but still cyan" << clendl;
   cout << "No bold... " << at(bo)"Bold bold bold... " << rm(bo)"no more bold" << clendl;
   cout << at(bk)"Blink " << fg(c)"blink " << bg(g)fg(k)"blink... " << rm(bk)rm(hl)"No blink." << clendl;
   cout << fg(m)bg(k)at(bo)"Some text..." << at(hl)"Highlighted text..." << rm(hl)"Not highlighted" << clendl;
   cout << at(dm)"Half-bright as usual... " << rm(dm)"can you tell the difference?" << clendl;
   return 0;
}
