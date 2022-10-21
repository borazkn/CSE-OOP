# Question 1: (A)
  Imagine you are a seller and sell your products online.
  You have a price list of some products.
  You want to develop a price filtering system for your own application.
  The customer should set a maximum price limit for the products and the products should be listed accordingly.
  For our assignment, after the user enters the maximum price,
  you need to compare the prices of the products you have and print the ones that meet this limit on the screen.
  Organize your program so that it completes the search process in the fewest steps.
  
  <b>HINT</b>:Review the sorting algorithms.
  
    Price List = {250,140,80,70,1200,450,325,500,2450}
   
  Sample Outputs:
   ``` 
    Enter max price for products in catalog:350
    Product found in the given price range. Product price: 70
    Product found in the given price range. Product price: 80
    Product found in the given price range. Product price: 140
    Product found in the given price range. Product price: 250
    Product found in the given price range. Product price: 325
   ``` 
    Enter max price for products in catalog:60
    Sorry! There is no product in the given range.
    

# Question 2: (B)
  You are expected to write a program where you can keep product information in two categories.
  First of all, a menu should appear the user.
  In this menu, the options given in the sample output should be presented.
  After selecting first option, directions should appear regarding the information user need to enter.
  After the process is completed, the menu should be displayed again. The same steps should apply to the second option.
  However, the second option should be planned for another category, fashion.
  When the third and fourth options are selected, the information of all products entered in the relevant category should be displayed.
  In option 5, show the information of all entered products. Organize your program using the struct.
  Assume you have the capacity to save 10 product information in total for 5 products from each category.
  
  The information of the categories is given below.
  
  <b>Tech Product</b> ->product code, brand, model, price, screen size, storage <br/>
  <b>Fashion</b> -> product code, brand, model, price, size, gender
  
    ****************************************
    1. Add new tech product
    2. Add new product to fashion category
    3. Display tech product
    4. Display product of fashion category
    5. Display all products
    6. Exit
