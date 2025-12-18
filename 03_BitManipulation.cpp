// # include<bitset> // header to use bit functions
// # include<iostream>
// using namespace std;

// int main(){

//     // ways to initialize a bitset
//     bitset<8> myBitSet = 0b0000'0101; // 8 size means there's room for 8 bits or 8 flags
//     bitset<8> myBitSet1 = 0b00000101; // 8 size means there's room for 8 bits or 8 flags

//     bitset<8> bits{ 5 }; // Initializes with the decimal value 5
//     cout << bits << endl; // Output: 00000101

//     bitset<8> bits1 {"00000101"} ; // Initializes from a string of '0's and '1's
//     cout << bits1 << endl; // Output: 00000101

//     // 0x05 in hex is 5 in decimal, which is 00000101 in binary
//     bitset<8> bits2{ 0x05 };
//     cout << bits2 << endl; // Output: 00000101

//     bitset<8> bits3; // All bits are 0 by default
//     bits3.set(0);         // Sets the bit at index 0 to 1
//     bits3.set(2);         // Sets the bit at index 2 to 1
//     cout << bits3 << endl; // Output: 00000101

//     // { some useful functions available in bitset }

//     bits3.set(4); // set's the 4th position of the bits3 stream
//     cout << bits3 << endl;
//     cout << "The bit at 0th position is : " << bits3.test(0) << endl; // queries whether 0th bit is 1 or 0
//     bits3.flip(1); // flips the bit at 1th position to 0 if it's 1 and vice-versa
//     cout << bits3 << endl;
//     // bits3.reset(4); // resets the bit at 4th position to 0
//     cout << bits3 << endl;
//     cout << bits3.count() << endl; // prints the number of set bits
//     cout << bits3.size() << endl; // prints the number of bits in bitset
//     cout << bits3.all() << endl; // if all the bits are set it returns true i.e. 1 or else it returns false i.e. 0

//     // bitset often uses 4 bytes or 8 bytes depending on the machine even though it only needs 1byte i.e. 8bits to store, so it is not memory efficient
//     cout << sizeof(bits3) << endl;

//     // also we can't get or set multiple bits at once using bitset header

//     // << and >> these operators are used for both input and output also as right and left shift operators, it decides its task by seeing the type of operands it is oeprating on
//     // if the type of the operand is integral type then it performs shifting and if there's cout written in left then it performs input/output operation

//     // unsigned int x = {0b0001}; // suggested to use bitset on unsigned integer

//     bitset<4> x {0b0001};
//     bitset<4> x1 {0b0111};
//     cout << x << 1 << endl; // this will print 00011 as it just print's and doesn't perform any shifting operations
//     cout << (x << 1) << endl; // this will print 0010 as it performs left shift
//     cout << (x >> 1) << endl; // this will print 0000 as it performs right shift

//     x <<= 1; // equivalent  to x = x << 1
//     cout << x << endl;

//     // The not operator ~

//     bitset<8> x2 {0b0010}; // x1 will be 0000 0010 the zeroes will be padded
//     cout << x2 << endl;
//     cout << ~x2 << endl; // it will flip all the bits and prints 1111 1101

//     // And operator & , or operator |

//     cout << (x & x1) << endl; // performs and of (0001 & 0111) = (0001)
//     cout << (x | x1) << endl; // performs or of (0001 & 0111) = (0111)

//     // The xor operator ^ : if both bits are same it evaluates to 0 and for different bits it evaluates to 1

//     cout << (x ^ x1) << endl; // performs xor of (0001 ^ 0111) = (0110)

//     /* NOTE :  CONSIDER THE BINARY NUMBER 1011 0100 IF THE COMPILER CONSIDERS IT AS A BINARY NUMBER THEN THE VALUE WOULD BE 180 AND IF THE COMPILER CONSIDERS IT AS
//      * A NUMBER IN ITS 2'S COMPLEMENT FORM THEN THE VALUE WOULD BE -76. HOW WILL THE COMPILER KNOW WHEN TO PRINT WHAT.
//      * IF THE TYPE OF THE INT IS UNSIGNED INT THEN THE COMPILER WILL KNOW THAT ITS A PURE BINARY NUMBER SO IT PRINTS 180 AND IF THE TYPE OF IT IS SIGNED INT THEN THE COMPILER WILL KNOW THAT ITS IN 2'S COMPLEMENT FORM AND SO IT PRINTS THE VALUE -76 */



// }
