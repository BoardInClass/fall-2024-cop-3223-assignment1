#include <stdio.h>
#include <math.h>
#define PI 3.14159

//Function to get user input
void askForUserInput(double *first_point_x, double *second_point_x, double *first_point_y, double *second_point_y)  {
    //Save user data to variables
    printf("What is the X value of the first point? ");
    scanf("%lf", first_point_x);
    printf("What is the X value of the second point? ");
    scanf("%lf", second_point_x);
    printf("What is the Y value of the first point? ");
    scanf("%lf", first_point_y);
    printf("What is the Y value of the second point? ");
    scanf("%lf", second_point_y);

    //Print results that were passed from scan
    printf("Point #1 Entered: x1 = %.2f, y1 = %.2f\n", *first_point_x, *first_point_y);
    printf("Point #2 Entered: x2 = %.2f, y2 = %.2f\n", *second_point_x, *second_point_y);
}

//Function to calculate the distance between two points
double calculateDistance(){
    double first_point_x = 0;
    double second_point_x = 0;
    double first_point_y = 0;
    double second_point_y = 0;
    askForUserInput(&first_point_x,&second_point_x,&first_point_y,&second_point_y);

    //Use point distance formula with user given points
    double total_distance = sqrt(pow(first_point_x - second_point_x, 2) + pow(first_point_y - second_point_y, 2));
    printf("The distance between the two points is: %.2f\n", total_distance);

    return total_distance;
}

//Function to calculate perimeter
double calculatePerimeter(){
    double first_point_x = 0;
    double second_point_x = 0;
    double first_point_y = 0;
    double second_point_y = 0;

    //Use formula for perimeter (circumference???) with the distance between the points

    //(I am assuming this is correct, seeing as both points represent 
    //diameter already, according to the pdf...and it is mathematically impossible
    //to calculate area/perimeter of two points on a line.)
    
    double perimeter = calculateDistance() * PI;
    printf("The perimeter of the city encompassed by your request is, %.2f,\n",perimeter);
return 5;
//5 because unclear on whether I am doing this as intended. 
}

//Function to calculate area
double calculateArea(){
    double first_point_x = 0;
    double second_point_x = 0;
    double first_point_y = 0;
    double second_point_y = 0;

    //Use formula for area to calculate the area of the difference between both diameters.
    double area = (calculateDistance()/2) * PI;
    printf("The area of the city encompassed by your request is, %.2f,\n",area);
return 5;
}

//Function to calculate width (radius??)
double calculateWidth(){
    double first_point_x = 0;
    double second_point_x = 0;
    double first_point_y = 0;
    double second_point_y = 0;

    double width = calculateDistance()/2;
    printf("The width of the city encompassed by your request is, %.2f,\n",width);
return 1;
}

//Function to calculate height (also radius??)
double calculateHeight(){
    double first_point_x = 0;
    double second_point_x = 0;
    double first_point_y = 0;
    double second_point_y = 0;

    double height = calculateDistance()/2;
    printf("The height of the city encompassed by your request is, %.2f,\n",height);
return 1;
}

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
