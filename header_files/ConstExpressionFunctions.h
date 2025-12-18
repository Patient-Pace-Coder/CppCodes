#ifndef CONSTEXPRESSIONFUNCTIONS_H
#define CONSTEXPRESSIONFUNCTIONS_H

// for knowing the usage refer to 49_constexpressionfunctions.cpp and 50_constexpressionfunctions1.cpp
// we are going to prove that constexpr functions are inline by default
constexpr int subtract( int a, int b ){
    return a - b;
}

#endif // CONSTEXPRESSIONFUNCTIONS_H
