#include "LinearRegression.h"
#include <iostream>

LinearRegression::LinearRegression() : m_slope(0), m_intercept(0) {}

void LinearRegression::fit(const std::vector<double>& x, const std::vector<double>& y) {
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;
    int n = x.size();
    
    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }

    m_slope = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    m_intercept = (sumY - m_slope * sumX) / n;
}

double LinearRegression::predict(double x) {
    return m_slope * x + m_intercept;
}

void LinearRegression::printModel() {
    std::cout << "Linear Regression Model: y = " << m_slope << "x + " << m_intercept << std::endl;
}
