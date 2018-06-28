#include <iostream>
using namespace std;
//enum SIZE = (VERTICAL, HORIZONAL);
namespace  V
{
	enum VERTICAL{ TOP = 5, CENTER = 10, BOTTOM = 15 };
}
namespace  H
{
	enum HORIZONAL{ LEFT = 5, CENTER = 10, RIGHT = 15 };
}
using namespace H;
using namespace V;
void checkVERTICAL(int size)
{
	switch (size)
	{
	case TOP:
		printf("TOP is %d\n", TOP);
		break;
	case V::CENTER:
		printf("CENTER is %d\n", V::CENTER);
		break;
	case BOTTOM:
		printf("BOTTOM is %d\n", BOTTOM);
		break;
	default:
		printf("UNKNOWN: %d", size);
		break;
	}
}
void checkHORIZONAL(int size)
{
	switch (size)
	{
	case LEFT:
		printf("LEFT is %d\n", LEFT);
		break;
	case H::CENTER:
		printf("CENTER is %d\n", H::CENTER);
		break;
	case RIGHT:
		printf("RIGHT is %d\n", RIGHT);
		break;
	default:
		printf("UNKNOWN: %d", size);
		break;
	}
}
void main()
{ 
	int kt=10;
	checkVERTICAL(kt);
	int  kt2=15;
	checkHORIZONAL(kt2);
	system("pause");


}