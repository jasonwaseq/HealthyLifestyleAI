#ifndef LINEARREGRESSION_H
#define LINEARREGRESSION_H

#include <vector>

class LinearRegression {
public:
    LinearRegression();
    void fit(const std::vector<double>& x, const std::vector<double>& y);
    double predict(double x);
    void printModel();  // To show the model parameters

private:
    double m_slope;
    double m_intercept;
};

#endif // LINEARREGRESSION_H
