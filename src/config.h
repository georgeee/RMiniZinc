#define PKG_MZN 50

#ifndef PKG_MZN
  #define MZN_2 10
#elif ~(~PKG_MZN + 0) == 0 && ~(~PKG_MZN + 1) == 1
    #define MZN_2 20
#else
    #define MZN_3 30
#endif
