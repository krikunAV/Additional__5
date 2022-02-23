#include <iostream>
#include "Header.h"
using namespace std;
using namespace kk;

int main()
{
	int sequence[N];
	long long len;
	cin >> len;
	Input(sequence, len);
	Function(sequence, len);
	Output(sequence);
	return 0;

}

