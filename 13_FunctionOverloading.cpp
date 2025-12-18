// #include<iostream>
// using namespace std;

// int add( int x, int y ){
//     return x + y;
// }

// int add( int x, int y, int z ){
//     return x + y + z;
// }

// double add( double x, double y ){
//     return x + y;
// }

// int printInt( int x ){
//     return x;
// }

// int printInt(char x) = delete; // compiler will throw error

// int main(){

//     // all the functions have same name but are not the same so they are called overloaded functions
//     cout << add(5,6) << endl;
//     cout << add(5,6,7) << endl;
//     cout << add(5.6,3.4) << endl;

//     // metrics for creating a overloaded function are :
//     // number of parameters
//     // type of parameters

//     // IF THERE IS NO EXACT MATCH OF THE DATA TYPES IN THE FUNCTION CALL AND FUNCTION PARAMETERS THEN THE COMPILER TRIES TO CONVERT THE ARGUMENTS IN THE FUNCTION CALL AND THEN CHECK FOR MATCHES :
//     // STEP 1 :
//     // LVALUE TO RVALUE
//     // QUALIFICATIONS CONVERSION (E.G. NON-CONST TO CONST)
//     // NON-REFERENCE TO REFERENCE CONVERSIONS

//     // STEP 2 :
//     // IT WILL TRY TO MATCH BY APPLYING NUMERIC PROMOTIONS(CONVERTION OF NARROWER TYPE TO WIDER DATA TYPES TO THE ARGUMENTS)

//     // STEP 3 :
//     // IT WILL TRY TO MATCH BY APPLYING NUMERIC CONVERSIONS I.E. FROM CHAR TO DOUBLE

//     /* THERE MIGHT BE CASES OF AMBIGUOUS MATCHES I.E. FUNCTION CALL MATCHING WITH 2 OR MORE FUNCTIONS
//      * TO AVOID THIS WE CAN EXPLICITLY CAST THE TYPE OF THE ARGUMENT TO THE DESIRED TYPE WHICH IS ALREADY DEFINED AS A FUNCTION ARGUMENT
//      * */

//     cout << printInt(5) << endl; // this will call the printInt function
//     // cout << printInt('a') << endl; // even this will call the printInt function and it matches the argument by numeric conversions but if we dont want this to happen then we can use delete keyword then the compilation will be halted i.e. the compiler will throw error
// }
