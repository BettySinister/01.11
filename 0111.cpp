#include <iostream>
using namespace std;

#define MIN(a,b) a < b ? a : b
#define MAX(a,b) a > b ? a : b
#define SQUARE(x) ((x) * (x))
// #define POWER(x,n) - не помогло даже погуглить :(
#define ODD(x) ((x) % 2 == 1) ? true : false
#define EVEN(x) ((x) % 2 == 0) ? true : false


int main() {
	cout << (MIN(-5, 3)) << endl;
	cout << (MAX(150, 0)) << endl;
	cout << (SQUARE(8)) << endl << endl;
	//cout << (POWER(8,3)) << endl;
	cout << (ODD(26)) << endl;
	cout << (EVEN(26)) << endl;
}