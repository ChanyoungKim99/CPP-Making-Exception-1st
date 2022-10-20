#include <iostream>

double Divide(double a, double b)
{
	// Callee Side
	if (b == 0)
	{
		std::cerr << "Divide by Zero!" << std::endl;
		// cerr = character�� error�� ��Ÿ���� stream
		// => �α� ���Ͽ� ���� �޼����� ������ �� �ִ�.
		// ���߿� ������ ��Ƽ� ���Ϸ� ���� �� �ִµ�, �� �� �����ϴ�.

		return INFINITY;
		// INFINITY�� ���ѿ� ����� ����̴�.
		// ������ ������ �߸��� ���� �����ְ� �ȴ�.
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

// Runtime-Error�� ��ġ�� �ΰ��� ��� ( Caller Side, Callee Side )

// Caller Side ���� ���� ó���� �Ѵٸ�,
// �Լ��� ����ϴµ� ������ ����������.

// ���� Callee Side���� ���� ó���� �ؾ��Ѵ�.
