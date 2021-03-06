// This program calculates the side and angles of a triangle
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using std::setprecision;



int main()
{
	int choice{};

	double angle_A;
	double angle_B;
	double angle_C;
	double sum_angles;
	double side_a;
	double side_b;
	double side_c = 1.0;
	double sine_of_angle_A;
	double sine_of_angle_B;
	double sine_of_angle_C;
	double compute_a;
	double compute_b;
	double compute_c;
	double compute_d;
	
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
	case 1: std::cout << "Enter angle 1: ";
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
				angle_C = angle_C * 3.14159 / 180.0; //Converts angle_C from degrees to radians
				sine_of_angle_A = sin(angle_A);
				sine_of_angle_B = sin(angle_B);
				sine_of_angle_C = sin(angle_C);

				side_a = side_c / sine_of_angle_C * sine_of_angle_A;
				side_b = side_c / sine_of_angle_C * sine_of_angle_B;
				std::cout << "Side a is "<< side_a << ", side b is " << side_b << ", and side c is "<< side_c << "." << std::endl;
				std::cout << "All sides are proportional." << std::endl;
			break;
	case 2: std::cout << "Enter angle 1: ";
			std::cin >> angle_A;
			std::cout << "Enter angle 2: ";
			std::cin >> angle_B;
			std::cout << "Enter side 1: ";
			std::cin >> side_c;
			sum_angles = angle_A + angle_B;
			if ((sum_angles <= 0) || (sum_angles >= 180))
				std::cout << "Unsolvable." << std::endl;
			else
				angle_C = 180 - sum_angles;
				std::cout << "If angle 1 is " << angle_A << " degrees, and angle 2 is " << angle_B
				<< " degrees, then the unknown angle is " << angle_C << " degrees." << std::endl;
				angle_A = angle_A * 3.14159 / 180.0; //Converts angle_A from degrees to radians
				angle_B = angle_B * 3.14159 / 180.0; //Converts angle_B from degrees to radians
				angle_C = angle_C * 3.14159 / 180.0; //Converts angle_C from degrees to radians
				sine_of_angle_A = sin(angle_A);
				sine_of_angle_B = sin(angle_B);
				sine_of_angle_C = sin(angle_C);

				side_a = side_c / sine_of_angle_C * sine_of_angle_A;
				side_b = side_c / sine_of_angle_C * sine_of_angle_B;
				std::cout << "Side a is " << side_a << ", side b is " << side_b << ", and side c is " << side_c << "." << std::endl;
				std::cout << "All sides are proportional." << std::endl;
		break;

	case 3: std::cout << "Enter angle 1: ";
			std::cin >> angle_A;
			std::cout << "Enter angle 2: ";
			std::cin >> angle_B;
			std::cout << "Enter side 1: ";
			std::cin >> side_c;
			sum_angles = angle_A + angle_B;
			if ((sum_angles <= 0) || (sum_angles >= 180))
				std::cout << "Unsolvable." << std::endl;
			else
				angle_C = 180 - sum_angles;
				std::cout << "If angle 1 is " << angle_A << " degrees, and angle 2 is " << angle_B
				<< " degrees, then the unknown angle is " << angle_C << " degrees." << std::endl;
				angle_A = angle_A * 3.14159 / 180.0; //Converts angle_A from degrees to radians
				angle_B = angle_B * 3.14159 / 180.0; //Converts angle_B from degrees to radians
				angle_C = angle_C * 3.14159 / 180.0; //Converts angle_C from degrees to radians
				sine_of_angle_A = sin(angle_A);
				sine_of_angle_B = sin(angle_B);
				sine_of_angle_C = sin(angle_C);

				side_a = side_c / sine_of_angle_C * sine_of_angle_A;
				side_b = side_c / sine_of_angle_C * sine_of_angle_B;
				std::cout << "Side a is " << side_a << ", side b is " << side_b << ", and side c is " << side_c << "." << std::endl;
				std::cout << "All sides are proportional." << std::endl;
		break;

	case 4: std::cout << "Enter side 1: ";
			std::cin >> side_a;
			std::cout << "Enter side 2: ";
			std::cin >> side_b;
			std::cout << "Enter angle 1: ";
			std::cin >> angle_A;
			if ((angle_A >= 180) || (angle_A <= 0))
				std::cout << "Unsolvable";
			else
				angle_A = angle_A * 3.14159 / 180.0; //Converts angle_A from degrees to radians
				side_c = sqrt((side_a * side_a + side_b * side_b - 2 * side_a * side_b * cos(angle_A)));
				angle_B = asin((sin(angle_A) / side_a * side_b));
				angle_A = angle_A * 180.0 / 3.14159; //Converts angle_A from radians to degrees
				angle_B = angle_B * 180.0 / 3.14159; //Converts angle_B from radians to degrees
				angle_C = 180 - (angle_A + angle_B);
				std::cout << "Angle A = "<< angle_A << std::endl;
				std::cout << "Angle B = "<< angle_B << std::endl;
				std::cout << "Angle C = "<< angle_C << std::endl;
				std::cout << "Side A = "<< side_a  << std::endl;
				std::cout << "Side B = "<< side_b  << std::endl;
				std::cout << "Side C = "<< side_c  << std::endl;
		break;

	case 5: std::cout << "Enter side 1: ";
			std::cin >> side_a;
			std::cout << "Enter side 2: ";
			std::cin >> side_b;
			std::cout << "Enter angle 1: ";
			std::cin >> angle_A;
			if ((angle_A >= 180) || (angle_A <= 0))
				std::cout << "Unsolvable";
			else
				angle_A = angle_A * 3.14159 / 180.0; //Converts angle_A from degrees to radians
				angle_B = asin((sin(angle_A) / side_a * side_b));
				angle_A = angle_A * 180.0 / 3.14159; //Converts angle_A from radians to degrees
				angle_B = angle_B * 180.0 / 3.14159; //Converts angle_B from radians to degrees
				angle_C = 180 - (angle_A + angle_B);
				std::cout << "Angle A = " << angle_A << " degrees" << std::endl;
				std::cout << "Angle B = " << angle_B << " degrees" << std::endl;
				std::cout << "Angle C = " << angle_C << " degrees" << std::endl;
				angle_A = angle_A * 3.14159 / 180.0; //Converts angle_A from degrees to radians
				side_c = sqrt((side_a * side_a + side_b * side_b - 2 * side_a * side_b * cos(angle_A)));
				std::cout << "Side A = " << side_a << std::endl;
				std::cout << "Side B = " << side_b << std::endl;
				std::cout << "Side C = " << side_c << std::endl;
		break;

	case 6: std::cout << "Enter side 1: ";
			std::cin >> side_a;
			std::cout << "Enter side 2: ";
			std::cin >> side_b;
			std::cout << "Enter side 3: ";
			std::cin >> side_c;			
			compute_a = (side_b * side_b) + (side_c * side_c) - (side_a * side_a);
			compute_b = compute_a / (2 * side_b * side_c);
			angle_A = acos(compute_b);
			angle_A = angle_A * 180.0 / 3.14159; //Converts angle_A from radians to degrees
			compute_c = (side_c * side_c) + (side_a * side_a) - (side_b * side_b);
			compute_d = compute_a / (2 * side_c * side_a);
			angle_B = acos(compute_d);
			angle_B = angle_B * 180.0 / 3.14159; //Converts angle_B from radians to degrees
			angle_C = 180 - (angle_A + angle_B);
			std::cout << setprecision(5) << "Angle A = " << angle_A << " degrees" << std::endl;
			std::cout << "Angle B = " << angle_B << " degrees" << std::endl;
			std::cout << "Angle C = " << angle_C << " degrees" << std::endl;
			std::cout << "Side A = " << side_a << std::endl;
			std::cout << "Side B = " << side_b << std::endl;
			std::cout << "Side C = " << side_c << std::endl;
		break;
	}
 return 0;
}

