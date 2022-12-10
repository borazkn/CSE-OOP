# Question
You are expected to implement the given three classes. Data member and method information is given
for each class. Apart from these, you can add the method you need. You must explain each new method
added by writing comment lines.

<h3>Product:</h3>

```
 Data Members: productCode, brand,name, price, stock
 Methods: display, loadProduct
```
<br/>

<h3>Tech:</h3>

```
Data Members: weight, chargingTime, connectivity
Methods: display, loadProduct
```
<br/>

<h3>Smartwatch:</h3>

```
Data Members: bandMaterial, bandColor,screenSize
Methods: display, loadProduct
```
<br/>

• display functions will shows all information about relevant object. For example if display
function is called for product object, productCode, brand,name, price and stock values are
displayed. For smartwatch object, productCode,brand,name,price,stock,
weight,chargingTime,connectivity, bandMaterial, bandColor,screenSize values will be displayed.
<br/>
• loadProduct functions will ask the user to enter all this information.Ex: For product object, user
should enter product code,brand,name,price,stock information.


```
int main()
{
    Smartwatch sw;
    Tech robotVacuum("125aT13", "IRobot", "Roomba", 12, 8900, 2, 3.5, "Wi-Fi");
    cout << "*****Load Product*****" << endl;
    sw.loadProduct();
    cout << "****Display*****" << endl;
    sw.display();
    cout << "****Display*****" << endl;
    robotVacuum.display();
    cout << "*****Headphone Product Part*****" << endl;
    robotVacuum.Product::display();
    
    return 0;
}
```
