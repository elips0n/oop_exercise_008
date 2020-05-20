
#ifndef OOP_TRAPEZ_H
#define OOP_TRAPEZ_H
#include <cmath>
#include <iostream>
#include "point.h"
#include "figure.h"

struct Trapez : figure{

    point a1,a2,a3,a4;

    point center() const {
        double x,y;
        x = (a1.x + a2.x + a3.x + a4.x ) / 4;
        y = (a1.y + a2.y + a3.y + a4.y ) / 4;
        point p(x,y);
        return p;
    }
    void print(std::ostream& os) const {
        os << "trapez "<< a1 <<" "<< a2 <<" "<< a3 <<" "<< a4  <<"\n";
    }

    void printFile(std::ofstream &of) const {
        of << "trapez "<< a1 <<" "<< a2 <<" "<< a3 <<" "<< a4  <<"\n";
    }

    double area() const {
        return (-0.5) * ((a1.x*a2.y + a2.x*a3.y + a3.x*a4.y + a4.x*a1.y) - ( a1.y*a2.x + a2.y*a3.x + a3.y*a4.x + a4.y*a1.x ));
    }

    Trapez(std::istream& is) {
        is >> a1 >> a2 >> a3 >> a4 ;
    }

    Trapez(std::ifstream& is) {
        is >> a1 >> a2 >> a3 >> a4 ;
    }
};


#endif //OOP_TRAPEZ_H
