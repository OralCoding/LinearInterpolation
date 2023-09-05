#include <iostream>

double linearInterpolation(double x1, double y1, double x2, double y2,
                           double x) {
  if (x2 - x1 == 0) {
    std::cerr << "x1 and x2 cannot be the same!" << std::endl;
    return 0.0;
  }

  double y = y1 + (y2 - y1) * (x - x1) / (x2 - x1);
  return y;
}

int main() {
  double x1 = 10.0, y1 = 20.0;
  double x2 = 20.0, y2 = 40.0;
  double x = 15.0;

  double result = linearInterpolation(x1, y1, x2, y2, x);

  std::cout << "Linear interpolation result for x=" << x << " is y=" << result
            << std::endl;

  return 0;
}
