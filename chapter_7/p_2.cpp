#include <iostream> 

double * golfScoresInput(); 

double calcAverage(const double * scores, int scoresNumber); 

void displayScores(const double * scores, int scoresNumber, double average); 

int main() 
{ 
    double * scores; 
    double average = 0; 
    scores = golfScoresInput(); 
    average = calcAverage(scores, 10); 
    displayScores(scores, 10, average); 
    return 0; 
} 

double * golfScoresInput() 
{ 
    double * scores = new double[10]; 
    std::cout << "Please enter your golf scores, at most ten scores. Enter q to stop." << std::endl;
    double temp; 
    std::cin >> temp;
    
    for(int i = 0; i < 10; i ++ )
    {
        if(temp) 
        {
            scores[i] = temp;
        }
        std::cin >> temp;
    }
    return scores;
}

double calcAverage(const double * scores, int scoresNumber)
{
    double sum = 0;
    for(int i = 0; i < scoresNumber ; i++)
    {
        sum +=  scores[i];
    }
    return sum / scoresNumber;
}

void displayScores(const double * scores, int scoresNumber, double average)
{
    std::cout << "Your golf scores are: " << std::endl;
    for(int i = 0; i < scoresNumber; i++)
    {
        std::cout << scores[i] << std::endl;
    }
    std::cout << "Your average scores is: " << average << std::endl;
} 
