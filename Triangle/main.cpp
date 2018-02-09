// This program calculates the side and angles of a triangle
#include "stdafx.h"
#include <iostream>
#include <cmath>


int main()
{
	int choice{};

	std::cout << "If you only know 2 angles of the triangle, enter 1." << std::endl;
	std::cout << "If you only know 2 angles, 1 side, and the side is not adjacent to the angles, enter 2." << std::endl;
	std::cout << "If you only know 2 angles, 1 side, and the side is adjacent to the angles, enter 3." << std::endl;
	std::cout << "If you only know 2 sides and the included angle, enter 4." << std::endl;
	std::cout << "If you only know 2 sides and one angle that is not the included angle, enter 5." << std::endl;
	std::cout << "If you know all 3 sides but no angles, enter 6." << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> choice;

	switch (choice)
	{ 
	case 1: 
		double angle_A;
		double angle_B;
		double angle_C;
		double sum_angles;
		double side_a;
		double side_b;
		double side_c;
		
			std::cout << "Enter angle 1: ";
			std::cin >> angle_A;
			std::cout << "Enter angle 2: ";
			std::cin >> angle_B;
			sum_angles = angle_A + angle_B;
			if ((sum_angles <= 0) || (sum_angles >= 180))
				std::cout << "Unsolvable." << std::endl;
			else
				angle_C = 180 - sum_angles;
				std::cout << "If angle 1 is " << angle_A << " degrees, and angle 2 is " << angle_B 
						  << " degrees, then the unknown angle is " << angle_C << " degrees." << std::endl;
				angle_A = angle_A * 3.14159 / 180.0; //Converts angle_A from degrees to radians
				angle_B = angle_B * 3.14159 / 180.0; //Converts angle_B from degrees to radians
			break;

	default: std::cout << "Incorrect Choice.";
	}
 return 0;
}

