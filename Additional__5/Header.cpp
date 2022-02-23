#include "Header.h"
#include <iostream>
using namespace std;
namespace kk
{
	void Input(int arr[], long long& len)
	{
		for (int i = 0; i < len; i++)
		{
			cin >> arr[i];
		}
	}
	void Function(int arr[], long long& len)
	{
		for (int i = 0; i < len; i++)
		{
			if (arr[i] > 0)
			{
				int point = 0;
				int p = 0;
				int ch = arr[i];
				int a = 0;
				int b;

				while (ch > 0) {
					ch /= 10;
					p++;
				}
				ch = arr[i];
				for (int j = 0; j < 10; j++) {


					for (int k = 0; k < p; k++) {


						if (j == ch % 10) {
							point++;
						}


						ch /= 10;
						if (point > 1) {
							a += 1;
							break;
						}

					}
					point = 0;
					ch = arr[i];


				}
				/*

								for (int j = 0; j < p -1; j++)
								{
									a = ch % 10;
									b = ch / 10;
									while (b > 0)
									{
										int k = b % 10;

										if (a == k) {
											point++;
										}
										b /= 10;
									}
									ch /= 10;
								}
								cout << point;

								while (b > 0)
								{
									int k = b % 10;
									cout << k << endl;
									if (a == b) {
										point++;
									}
									b /= 10;
								}
								cout << point;*/
				if (a == 0) {
					arr[i] = 0;
				}

				point = 0;
				a = arr[i];
				b = 0;
				p = 0;
				while (a > 0) {
					a /= 10;
					p++;
				}
				int newCh = 0;
				ch = arr[i];

				while (ch > 0) {
					newCh += (ch % 10) * pow(10, p - 1);

					ch /= 10;
					p--;
				}

				if (newCh == arr[i]) {
					arr[length + i] = arr[i];
				}

			}



		}
	}
	void Output(int arr[])
	{

		cout << "[ ";
		for (int i = 0; i < N; i++)
		{
			if (arr[i] > 0)
				cout << arr[i] << " ";
		}
		cout << "]";
	}
}
