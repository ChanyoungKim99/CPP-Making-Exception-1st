#include <iostream>

double Divide(double a, double b)
{
	// Callee Side
	if (b == 0)
	{
		std::cerr << "Divide by Zero!" << std::endl;
		// cerr = character를 error로 나타내는 stream
		// => 로그 파일에 에러 메세지를 저장할 수 있다.
		// 나중에 에러만 모아서 파일로 만들 수 있는데, 이 때 유용하다.

		return INFINITY;
		// INFINITY는 무한에 가까운 상수이다.
		// 하지만 여전히 잘못된 값을 돌려주게 된다.
	}
	return a / b;
}

int main()
{
	double x;
	double y;

	std::cin >> x >> y;

	// Caller Side
	/*
	if (y == 0)
	{
		std::cerr << "divide by zero!" << std::endl;
	}
	
	else
	{
		std::cout << Divide(x, y) << std::endl;
	}
	*/

	std::cout << Divide(x, y) << std::endl;

	double mine = Divide(x, y);
	mine = mine * mine;
	return 0;
}

// Runtime-Error를 고치는 두가지 방법 ( Caller Side, Callee Side )

// Caller Side 에서 예외 처리를 한다면,
// 함수를 사용하는데 굉장히 불편해진다.

// 따라서 Callee Side에서 예외 처리를 해야한다.
