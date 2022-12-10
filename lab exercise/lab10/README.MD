# Question
You are expected to implement Computer and Tablet classes according to the given diagrams
and explanations. Necessary changes can be made according to needs. Test your program with
the given main function and compare your output with the sample output.
<br/>

```
Computer
*screenSize : float
*storage : int
*os : string

computer()
computer(float, int, string)
~computer()
computer(const computer&)
getScreenSize() const : float& const
getStorage() const : int& const
getOs() const: string& const
setScreenSize(float) : void
setStorage(int) : void
setOs(string) : void
displayComputer() = 0 : void
```
^
<br/>
|
<br/>
|
<br/>
|

```
*wirelessType : string
*battery : string

tablet()
tablet(float, int, string, string, string)
tablet(const tablet&)
~tablet()
setBattery(string) : void
setWirelessType(string) : void
getBattery() const : const string&
getWirelessType() const : const string&
displayComputer() : void
```

```
int main()
{
    cout << "*****Tablet 1*****" << endl;
    Tablet samsung(10, 64, "Android 11", "Bluetooth", "1 Lithium Polymer");
    samsung.displayComputer();
    
    cout << "*****Pointer Tablet*****" << endl;
    Computer *ptrtablet = new Tablet(8, 32, "Android 9 Pie", "Wi-Fi", "1 CR123A");
    ptrtablet->displayComputer();
    
    delete ptrtablet;
    
    cout << "*****Tablet 2 Copy Constructor*****" << endl;
    Tablet samsung2 = samsung;
    samsung2.displayComputer();
    
    return 0;
}

```
