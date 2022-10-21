# Question 1: (A)
  You are asked to write a program that calculates the distance in kilometers between two points on the world whose latitude and longitude values are known.
  Latitude and longitude values must be in radians. For this divide the values by 180/PI or 57.29577951.
   The distance formula for Point A(x1,y1) and Point B(x2,y2)
   
    d = r * acos(sin(x1)sin(x2) + cos(x1)cos(x2)cos(y2-y1))
   
   r is referred Radius of the World. It is taken by 6378.137 km.
   Make sure written program has to include <br/>
    • Function declaration and definition <br/>
    • Function calling <br/>
    • Call by reference and value example for a function separately <br/>
    • Driver program to test <br/>
    
   Make the necessary functions and definitions inside the program to work and produce the following sample output.
   
    Point A:
    Latitude: 39.93
    Longtitude: 32.85
    Point B:
    Latitude: 41.03
    Longtitude:28.97
    The distance between Point A and B is 350.571km
    
# Question 2: (B)
  You are asked to write a tip calculation program.
  The tip will be determined according to the entered account amount, the number of people receiving the tip and the tip rate.
  When the number of people is not specified, the number will be considered as 1.
  When the tip rate is not specified, it will be accepted as 10 percent.
  Considering the sample output of the program given below write overloaded functions that are necessary.
  
  Also this program has to include
   • Function declaration and definition <br/>
   • Function calling <br/>
   • Overloaded functions <br/>
   • Driver program to test <br/>

    Enter account amount: 125
    Enter tip rate: -1 // when tip rate is not specified user can enter -1
    Number of person: -1 // when the number of person received tip isn’t specified can enter -1 Account: 125 ->tip(10%,1 person): 12.5
    
   Another sample output:
    
    Enter account amount: 125
    Enter tip rate: 12
    Number of person: -1 // when the number of person received tip isn’t specified can enter -1 Account: 125 ->tip(12%, 1 person): 15

  
