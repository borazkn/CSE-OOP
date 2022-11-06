# Question

  Implement the classes whose diagrams are given below. Write a program that can add/remove
  new smart watch and display the whole list using these classes. The menu you should use in the
  program:

  1. Add Smart watch<br/>
  The user should be asked for smart watch information. A new headphone should be
  added to the list with the entered information.
  2. Remove Smart watch<br/>
  Smart watch should be shown to the user. According to the list, the user must enter the
  smart watch number. The relevant smart watch should be removed from the list.
  3. Show Smart watches<br/>
  All information on all smart watches in the list must be displayed.
  4. Exit<br/>

  ```
  SmartWatch
  
  screenSize :float
  bandMaterial :string
  bandColor :string
  connectivityTech :string
  gps :bool
  
  Smartwatch()
  Smartwatch(float,string,string,string)
  ~Smartwatch()
  getScreenSize():float
  setScreenSize(float):void
  getBandMaterial():string
  setBandMaterial(string):void
  getBandColor():string
  setBandColor(string):void
  getConnectivity():string
  setConnectivity(string):void
  getGps():bool
  setGps(bool):void
  display():void
  loadSmartwatch():void
  ```
  
  ```
  List
  
  smartwatches :Smartwatch[]
  size :int
  
  isEmpty():bool
  addNewSmartwatch(Smartwatch):void
  removeSmartwatch(int):void
  displaySmartWatches():void
  List()
  ~List()
