#include<iostream>

double calulateHarmonicMean(double x, double y);


int main()
{
    double x, y; 
    std::cout << "Please enter the x and y vaules: ";
    std::cin >> x >> y;
    while(x && y) 
    {
       calulateHarmonicMean(x, y);
       
       std::cout << "Please enter other pairs of values, enter 0 quit.";
       std::cin >> x >> y; 
    }
} 
     
double calulateHarmonicMean(double x, double y)
{
    double result = 2.0 * x * y /(x + y);
    std::cout << "The harmonic mean of " << x << " and " << y << " is: " << result << std::endl;
}
   
