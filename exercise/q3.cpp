#include <iostream>
#include <math.h>

#define r 6378.137
#define VAL 57.29577951

using namespace std;

double calculate_d(double x1, double x2, double y1, double y2){
    
    double d;
    
    d = r * acos(sin((x1 / VAL)) * sin((x2 / VAL)) + cos((x1 / VAL)) * cos((x2 / VAL)) * cos((y2-y1) / VAL));

    return d;
}

int main()
{
    double x1, x2, y1, y2, d;
    
    cout << "Point A:\n";
    cout << "Latitude: ";
    cin >> x1;
    cout << "Longtitude: ";
    cin >> y1;
    
    cout << "Point B:\n";
    cout << "Latitude: ";
    cin >> x2;
    cout << "Longtitude: ";
    cin >> y2;
    
    d = calculate_d(x1, x2, y1, y2);
    
    cout << "The distance between Point A and B is " << d << "km" << endl;
    
    return 0;
}
