#include <string>
#include <cstdarg>

using namespace std;

template <unsigned int n>
struct bg {
    enum { code = n + 40 };
};

template <unsigned int n>
struct fg {
    enum { code = n + 30 };
};

template <unsigned int n>
struct attr {
    enum { code = n };
};

template <unsigned int n>
struct cancel {
    enum { code = n + 20 };
};

template <unsigned int n>
struct bright {
    enum { code = n + 8 };
};

#define CLEAR       0
#define BOLD        1
#define DIM         2
#define UNDERLINE   4
#define BLINK       5
#define HIGHLIGHT   7
#define RESET       10

#define d dim 
#define u underline
#define h highlight 
#define cl clear 
#define re reset
#define bo bold
#define bk blink 

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

#define WRAP(x) wrap(x)
#define FG(x) WRAP(fg<x>::code)
#define BG(x) WRAP(bg<x>::code)
#define AT(x) WRAP(attr<x>::code)
#define CL(x)  WRAP(cancel<x>::code)
#define BT(x)  WRAP(bright<x>::code)

string wrap(int code) {
    return "\e["+to_string(code)+"m";
}

