/*
 *
 * The One Definition Rule (ODR) is a fundamental rule in C++ that states that an object,
 * variable, or function can have only one definition in a program. If you violate this rule,
 * your program will fail to link.
 *
DECLARATIONS VS DEFINTIONS

A declaration introduces a name to the compiler. It tells the compiler that a function,
variable, or class exists somewhere. You can have multiple declarations of the same thing.

Examples:

extern int my_variable; (Variable declaration)

void myFunction(int x); (Function declaration)

class MyClass; (Class declaration)

A definition provides the full implementation. It's where the compiler allocates
memory for a variable or generates the machine code for a function. You can only have one definition of a non-inline,
non-template function or variable in your entire program.

Examples:

int my_variable = 10; (Variable definition)

void myFunction(int x) { ... } (Function definition)

class MyClass { ... }; (Class definition)

Exceptions to the ODR
There are a few exceptions to the ODR where multiple definitions are allowed,
but they must be identical. The linker will then choose one of the definitions.

inline Functions: An inline function can have multiple definitions in different translation units.
Refer inlinefunctions.h for proof

constexpr Functions: These are implicitly inline, so they follow the same rule.
Refer constExpressionFunctions.h for proof

Template Functions: A template function's definition must be available to every translation
unit that uses it, so it's placed in a header file. The compiler only generates one copy of
the code for a specific template specialization.

*/
