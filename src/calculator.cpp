
#include "calculator.hpp"
#include <stdexcept>
#include <cmath>
#include <limits>
// Basic arithmetic
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is undefined.");
    }
    return a / b;
}
// Powers, roots and logarithms
double power(double a, double b) {
    return std::pow(a, b);
}
double nth_root(double a, int n) {
    if (n == 0) {
        throw std::invalid_argument("Root degree cannot be zero.");
    }

    if (a == 0 && n < 0) {
        throw std::invalid_argument("Zero cannot have a negative root degree.");
    }

    if (a < 0) {
        if (n % 2 == 0) {
            throw std::invalid_argument("Even root of a negative number is undefined.");
        }

        return -std::pow(-a, 1.0 / n);
    }

    return std::pow(a, 1.0 / n);
}
double log_base(double a, double b) {
    if (a <= 0 || b <= 0 || b == 1) {
        throw std::invalid_argument("Invalid logarithm arguments.");
    }
    return std::log(a) / std::log(b);
}
double natural_log(double a) {
    if (a <= 0) {
        throw std::invalid_argument("Natural logarithm requires a positive number.");
    }
    return std::log(a);
}
// Trigonometry (angles in radians)
double sine(double a) {
    return std::sin(a);
}
double cosine(double a) {
    return std::cos(a);
}
double tangent(double a) {
    const double epsilon = 1e-12;

    if (std::abs(std::cos(a)) < epsilon) {
        throw std::invalid_argument("Tangent is undefined near this angle.");
    }

    return std::tan(a);
}
double cotangent(double a) {
    const double epsilon = 1e-12;
    double sin_value = std::sin(a);

    if (std::abs(sin_value) < epsilon) {
        throw std::invalid_argument("Cotangent is undefined near this angle.");
    }

    return std::cos(a) / sin_value;
}
// Inverse trigonometry
double arcsine(double a) {
    if (a < -1 || a > 1) {
        throw std::invalid_argument("Arcsine input must be between -1 and 1.");
    }
    return std::asin(a);
}

double arccosine(double a) {
    if (a < -1 || a > 1) {
        throw std::invalid_argument("Arccosine input must be between -1 and 1.");
    }
    return std::acos(a);
}
double arctangent(double a) {
    return std::atan(a);
}
double arccotangent(double a) {
    return std::atan2(1.0, a);
}