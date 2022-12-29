#include <iostream>
#include <iomanip>

constexpr float gravity_const{ 9.8 };

double heightOfBall(int time)
{
	return gravity_const * (pow(time, 2) * 0.5);
}

double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double height{};
	std::cin >> height;
	
	return height;
}

void printValues(double heightMeter)
{
	int second{ 0 };
	while (true)
	{
		//tempHeight = tempHeight - heightMeter - heightOfBall(second);
		if (heightMeter - heightOfBall(second) < 0)
		{
			std::cout << std::setprecision(2);
			std::cout << "At " << second << " seconds, the ball is on the ground.\n";
			break;
		}
		else
		{
			std::cout << "At " << second << " seconds, the ball is at height: " << heightMeter - heightOfBall(second) << " meters\n";
		}
		second++;
	}
}

int main()
{
	double heightOfTower{getTowerHeight()};
	printValues(heightOfTower);
	return 0;
}