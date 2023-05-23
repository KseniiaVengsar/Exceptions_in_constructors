// Exceptions_in_constructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <exception>
#include <string>
#include <iostream>
#include "MyException.h"
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Rhombus.h"
#include "Parallelogram.h"
#include "Square.h"
#include "Rectangle.h"
#include "Quadrangle.h"
#include "Equilateral_triangle.h"
#include "Isosceles_triangle.h"



int main() {
    setlocale(LC_ALL, "RU");
    try {
        Triangle* triangle = new Triangle(60, 60, 60, 60, 60, 60);
        print_info(triangle);
        delete triangle;
        std::cout << std::endl;
    }
    catch (const std::exception& exep) {
        std::cout << "Исключение: " << exep.what() << std::endl;
    }

    try {
        Right_triangle* right_triangle = new Right_triangle(1, 2, 90, 90, 90, 90);
        print_info(right_triangle);
        delete right_triangle;
        std::cout << std::endl;
    }
    catch (const std::exception& exep) {
        std::cout << "Исключение: " << exep.what() << std::endl;
    }
    try {
        Isosceles_triangle* isosceles_triangle =
            new Isosceles_triangle(20, 20, 30, 30);
        print_info(isosceles_triangle);
        delete isosceles_triangle;
        std::cout << std::endl;
    }
    catch (const std::exception& exep) {
        std::cout << "Исключение: " << exep.what() << std::endl;
    }

    try {
        Equilateral_triangle* equilateral_triangle = new Equilateral_triangle(1, 2);
        print_info(equilateral_triangle);
        delete equilateral_triangle;
        std::cout << std::endl;
    }
    catch (const std::exception& exep) {
        std::cout << "Исключение: " << exep.what() << std::endl;
    }

    try {
        Quadrangle* quadrangle = new Quadrangle(1, 2, 3, 4, 5, 6, 7, 8);
        print_info(quadrangle);
        delete quadrangle;
        std::cout << std::endl;
    }
    catch (const std::exception& exep) {
        std::cout << "Исключение: " << exep.what() << std::endl;
    }

    try {
        Rectangle* rectangle = new Rectangle(1, 2, 3);
        print_info(rectangle);
        delete rectangle;
        std::cout << std::endl;
    }
    catch (const std::exception& exep) {
        std::cout << "Исключение: " << exep.what() << std::endl;
    }
    try {
        Square* square = new Square(1, 2);
        print_info(square);
        delete square;
        std::cout << std::endl;
    }
    catch (const std::exception& exep) {
        std::cout << "Исключение: " << exep.what() << std::endl;
    }

    try {
        Parallelogram* parallelogram = new Parallelogram(1, 2, 3, 4);
        print_info(parallelogram);
        delete parallelogram;
        std::cout << std::endl;
    }
    catch (const std::exception& exep) {
        std::cout << "Исключение: " << exep.what() << std::endl;
    }

    try {
        Rhombus* rhombus = new Rhombus(1, 2, 3);
        print_info(rhombus);
        delete rhombus;
        std::cout << std::endl;
    }
    catch (const std::exception& exep) {
        std::cout << "Исключение: " << exep.what() << std::endl;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
