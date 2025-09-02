
#ifndef ML_ALGORITHMS_IN_C_PLUS_LINEARREGRESSION_H
#define ML_ALGORITHMS_IN_C_PLUS_LINEARREGRESSION_H
#include <vector>


class LinearRegression {
public:
    void fit(std::vector<double>& x, std::vector<double>& y);
    double predict(double x);

private:
    double slope_{0.0};
    double intercept_{0.0};
};


#endif