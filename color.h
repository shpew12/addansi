#ifndef ADDANSI_COLOR_H_
#define ADDANSI_COLOR_H_

#include <string>
#include <cstdarg>
#include <iostream>

namespace addansi {

template <unsigned int n>
struct BG {
    enum { code = n + 40 };
};

template <unsigned int n>
struct FG {
    enum { code = n + 30 };
};

template <unsigned int n>
struct AT {
    enum { code = n };
};

template <unsigned int n>
struct RM {
    enum { code = n + 20 };
};

template<>
struct RM<1> {
    enum { code = 22 };
};

enum { black,red,green,brown,blue,magenta,cyan,white };
enum { clear,bold,dim,underline=4,blink,highlight=7,reset=10};

const int r = red;
const int y = brown;
const int g = green;
const int b = blue;
const int c = cyan;
const int m = magenta;
const int k = black;
const int w = white;

const int dm = dim;
const int ul = underline;
const int hl = highlight;
const int bo = bold;
const int bk = blink;

#define cl at(clear)

#define W(x) wrap(x) <<

#define fg(x) W(FG<x>::code)
#define bg(x) W(BG<x>::code)
#define at(x) W(AT<x>::code)
#define rm(x) W(RM<x>::code)

#define clendl cl std::endl


std::string wrap(int code){
    return "\e[" + std::to_string(code) + "m";
}

} // namespace addansi

#endif // ADDANSI_COLOR_H_
