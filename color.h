#include <string>
#include <cstdarg>
#include <iostream>

using namespace std;

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

#define r red
#define y brown
#define g green
#define b blue
#define c cyan
#define m magenta
#define k black
#define w white

#define dm dim
#define ul underline
#define hl highlight
#define bo bold
#define bk blink

#define cl at(clear)

#define W(x) wrap(x) <<

#define fg(x) W(FG<x>::code)
#define bg(x) W(BG<x>::code)
#define at(x) W(AT<x>::code)
#define rm(x) W(RM<x>::code)

#define clendl cl endl


string wrap(int code){
    return "\e[" + to_string(code) + "m";
}
