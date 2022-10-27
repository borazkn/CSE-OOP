# Question 1: (A)
  Q1. Implement the class given in the diagram below. Make the necessary function
  definitions. You are expected to write a program that will be processed according
  to the menu in the sample outputs. You must perform these operations using the
  class you defined. <br/>
  
  <b>Option 1:</b> The user should be asked all the information one by one. The user must
  enter the product information in order. <br/>
  <b>Option 2:</b> User must enter a new stock information to update stock. Necessary
  updates should be made according to entered stock. <br/>
  <b>Option 3:</b> The user must enter a new price information to update the price.
  Accordingly, necessary updates should be made. <br/>
  <b>Option 4:</b> Only the code of the product should be shown to the user. <br/>
  <b>Option 5:</b> All information of the product should be shown to the user. <br/>
  <b>Option 6:</b> Exit the program. <br/>
  
  You should restrict the user to select other options without entering any product
  information. If there is no product, nothing can be updated or displayed. <br/>
  
   <h2>Product</h2>
     
     productCode : string
     brand : string
     price : double
     name : string
     stock : int
     
     
     Product()
     Product(string string double string int)
     getProductCode() : string
     setProductCode(string)
     getBrand() : string
     setBrand(string)
     getPrice() : double
     setPrice(double)
     getName() : string
     setName(string)
     getStock() : int
     setStock(int)
     display()
     
   
   Sample Output:
    
    *******************************
    1.Enter product information
    2.Update stock
    3.Uptadde price
    4.Display product code
    5.Display all info
    6.Exit
    *******************************
    
    
    *******************************
    1.Enter product information
    2.Update stock
    3.Uptadde price
    4.Display product code
    5.Display all info
    6.Exit
    *******************************
    --->1
    Enter product code:56474
    Brand:A
    Name:Dress
    Price:346
    Stock:5
    *******************************
