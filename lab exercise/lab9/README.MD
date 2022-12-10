# Question
Define the class and functions according to the explanations given below. The Calculate Price function is
not a member function. You must complete the lines specified as comments in the main function given
to you, according to the sample output.
<br/>
float* calculatePrice(string* , int);
<br/>
This function calculates the price of TV according to displayTech and screenSize and returns a pointer. If
displayTech is undefined and screenSize 0, price is 0. If displayTech is LED and screen size greater than
32, price is 12500. For all other conditions, price is 10000.
<br/>

<h3>TV Class:</h3>

```
displayTech : string*
refreshRate : int
connectiviy : string
screenSize : int

tv()
tv(string, string, int, int)
~tv()
display() : void
```
<b>displayTech</b> is a pointer data member. Examples of TV display technology: LCD, LED, QLED etc.
Refresh rate is the number of times per second TV can reset and display an image. It's measured in Hz.
<h4>connectivity:</h4>
• Bluetooth
• Ethernet
• HDMI
• USB
• VGA
• Wi-Fi etc.
<br/>
<b>screenSize:</b> A TV's size refers to its diagonal length, measured from the upper left-hand corner
of the actual TV screen to the lower right-hand corner. Most TV sizes are expressed in inches.
<br/>
<b>display():</b> Method should display all information about TV. In addition, calculatePrice() function
must be called in this method. By calling the calculatePrice function we can get the price and
display it.

```
int main()
{
    TV tv_1;
    cout << "*****1. TV*****" << endl;
    tv_1.display();
    cout << "Price: " << *calculatePrice(tv_1.getDisplayTech(), tv_1.getScreenSize()) << endl;
    
    TV tv_2("LED", "HDMI", 60, 32);
    cout << "*****2. TV*****" << endl;
    tv_2.display();
    cout << "Price: " << *calculatePrice(tv_2.getDisplayTech(), tv_2.getScreenSize()) << endl;
    
    return 0;
}
```
