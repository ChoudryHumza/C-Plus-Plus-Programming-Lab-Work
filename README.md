# C++ Programming Lab Work


**Lab 1 - Jan 28**
Write a C++ program as follows:
1. Prompt the user to enter 10 numbers
2. Print the maximum number
3. Print the minimum number
4. Print the average

**Lab 2 - Jan 30**
1. Create a class named Computer
    - Separate declaration from implementation (i.e. Header and CPP files)
2. Add the following private member variables
    - an int variable named year
    - a string variable named model
    - a string variable named purpose
3. Add the following public functions:
    - Default constructor which sets numeric members to -1 and string members to the empty string
    - Destructor to print "Removing instance from memory"
    - A non-default constructor to set the year and model variables only. The "purpose" variable should be set to the empty string.
    - A non-default constructor to set all THREE member variables.
    - Accessor and Mutators for all THREE member variables

**Lab 3 - Feb 4**
1. Create a class named Inventory
    - Separate declaration from implementation (i.e. Header and CPP files)
2. Add the following private member variables
   - a int variable named itemNumber
   - an int variable named quantity
   - a double variable named cost
   - a double variable named totalCost. Total cost is defined as quantity X cost.
   - updateTotalCost() which takes no arguments and sets the values of the variable totalCost.
3. Add the following public functions:
   - Accessor and Mutators for all private member variables
   - getTotalCost which returns the value of totalCost       
   - Default constructor which sets all the member variables to 0. Finally, call the updateTotalCost function.
   - A non-default constructor which accepts an item’s number, quantity, and cost as arguments. This constructor must calls the mutator functions to set the values of the appropriate member variables. Finally, call the updateTotalCost function.
4. Write a main():
   - Create an instance of type Inventory using the default constructor.
   - Prompt the user to enter an itemNumber, cost, and quantity.
   - Use the mutator methods to update itemNumber, cost, and quantity.
   - Using the accessor functions, print the values of itemNumber, cost, quantity, and totalCost.
   - Create a new instance of type Inventory using the non-default constructor.
   - Using the accessor functions, print the values of itemNumber, cost, quantity, and totalCost.


**Lab 4 - Feb 6**
Redo lab 3 and change the Inventory class to a struct.
1. Keep the default and non-default constructors
2. Your struct does not need the accessors and mutators since all variables are public by default.
3. Remove the totalCost variable; instead, make the updateTotalCost() return quantity X cost
4. Write a main():
   - Create an instance of type Inventory using the default constructor.
   - Prompt the user to enter an itemNumber, cost, and quantity.
   - Update itemNumber, cost, and quantity.
   - Print the values of itemNumber, cost, quantity, and totalCost.
   - Create a new instance of type Inventory using the non-default constructor.
   - Print the values of itemNumber, cost, quantity, and totalCost.


**Lab 5 - Feb 11**
1. Prompt the user enter 5 names. Store the values in an array.
2. Prompt the user enter 5 grades. Store the values in an array.
3. Print each name and their corresponding grade.
4. Compute the maximum grade and print the corresponding name.
5. Compute the average grade and print:
    a. The average
    b. Number of grades below the average
    c. Number of grades above the average.
Sample Input:
  Enter 5 names: John Graham Marlon Roseanne Jamee
  Enter 5 grades: 55.32 79.88 61.15 80.33 14.96
 Sample Output:
  John: 55.32
  Graham: 79.88
  Marlon: 61.15
  Roseanne: 80.33
  Jamee: 14.96
  Max:
     Roseanne: 80.33
  Average: 52.328
  Below average: 2
  Above average: 3


**Lab 6 - Feb 13**
Modify Lab 5 and use vectors instead of arrays

**Lab 7**
Implement a class called ArrayDemo with the following members: 
1.	𝑎𝑟𝑟, an integer array of size 10. Do not initialize the array just yet 
2.	𝑝𝑡𝑟𝐴𝑟𝑟, an integer pointer. Set the pointer to point to the array above 
3.	A default constructor to initialize the array using the pointer 𝑝𝑡𝑟𝐴𝑟𝑟 ONLY. Initialize the array’s 
subscript to the square value of each subscript. You may use the 𝑝𝑜𝑤 function in the 𝑐𝑚𝑎𝑡h header ... 
012345... 
4.	𝑎𝑟𝑟𝑎𝑦𝐴𝑑𝑑𝑟𝑒𝑠𝑠, a method that prints the memory address of both 𝑎𝑟𝑟 and 𝑝𝑡𝑟𝐴𝑟𝑟 
5.	𝑎𝑟𝑟𝑎𝑦𝑉𝑎𝑙𝑢𝑒, a method that prints the values of both 𝑎𝑟𝑟 and 𝑝𝑡𝑟𝐴𝑟𝑟 
6.	𝑠𝑢𝑏𝑠𝑐𝑟𝑖𝑝𝑡𝐴𝑑𝑑𝑟𝑒𝑠𝑠, accepts one parameter of type 𝑖𝑛𝑡 and prints the memory address of the 
subscript once using 𝑎𝑟𝑟 and once using 𝑝𝑡𝑟𝐴𝑟𝑟. 
7.	𝑣𝑎𝑙𝑢𝑒𝐵𝑦𝑆𝑢𝑏𝑠𝑐𝑟𝑖𝑝𝑡, accepts one parameter of type 𝑖𝑛𝑡 and prints the value of the subscript once 
using 𝑎𝑟𝑟 and once using 𝑝𝑡𝑟𝐴𝑟𝑟 
8.	𝑣𝑎𝑙𝑢𝑒𝐵𝑦𝐴𝑟𝑖𝑡h𝑚𝑒𝑡𝑖𝑐, accepts one parameter of type 𝑖𝑛𝑡 and prints the value of the subscript 
using 𝑝𝑡𝑟𝐴𝑟𝑟 and pointer arithmetic. First increment 𝑝𝑡𝑟𝐴𝑟𝑟 then print the value of the subscript. Remember to reset the value of the 𝑝𝑡𝑟𝐴𝑟𝑟 for subsequent calls 
Sample output using the provided test 𝑚𝑎𝑖𝑛. Note that the memory values shown here will be different for different runs. 

**Lab 8**
Note: 𝒅𝒐 𝒏𝒐𝒕 use global variables. Only use 𝒍𝒐𝒄𝒂𝒍 function variables. 
Write a program with the following: 
1.	𝑒𝑥𝑝𝑎𝑛𝑑𝐴𝑟𝑟(), a function which accepts an array parameter and expands the array by 50%. The function deallocates any old dynamic memory and returns the newly created array. i.e. 𝑛𝑒𝑤𝑆𝑖𝑧𝑒 = 𝑜𝑙𝑑𝑆𝑖𝑧𝑒 ∗ 1.5 
2.	𝑔𝑒𝑡𝑀𝑎𝑥, a function which accepts an array parameter and returns the largest element in the array. 
3.	𝑔𝑒𝑡𝐴𝑣𝑔, a function which accepts an array parameter and returns the average of all elements. 
4.	𝑚𝑎𝑖𝑛, performs the following: 
1.	Create a dynamic array of size 5 and type double 
2.	Prompt the user to enter values into the array. The prompt should continue until a negative 
number is entered 
3.	During the entry process, if the array is filled, expand the array by calling the 𝑒𝑥𝑝𝑎𝑛𝑑𝐴𝑟𝑟() 
function 
4.	Display the maximum value in the array by calling 𝑔𝑒𝑡𝑀𝑎𝑥() 
5.	Display the average values in the array by calling 𝑔𝑒𝑡𝐴𝑣𝑔() 

**Lab 9**
Implement the following three classes: 
I. 𝐼𝑛𝑛𝑒𝑟𝐶𝑖𝑟𝑐𝑙𝑒 with the following members: 
1.	𝑑𝑖𝑎𝑚𝑒𝑡𝑒𝑟, a private member of type 𝑑𝑜𝑢𝑏𝑙𝑒 
2.	𝑛𝑎𝑚𝑒, a private member of type 𝑠𝑡𝑟𝑖𝑛𝑔 
3.	𝑠𝑒𝑡𝐼𝑛𝑛𝑒𝑟𝐶𝑖𝑟𝑐𝑙𝑒𝐼𝑛𝑓𝑜(𝐼𝑛𝑛𝑒𝑟𝐶𝑖𝑟𝑐𝑙𝑒, 𝑑𝑜𝑢𝑏𝑙𝑒, 𝑠𝑡𝑟𝑖𝑛𝑔), a friend function to change the values of 𝑑𝑖𝑎𝑚𝑒𝑡𝑒𝑟 and 𝑛𝑎𝑚𝑒 
4.	𝑔𝑒𝑡𝐼𝑛𝑛𝑒𝑟𝑅𝑎𝑑𝑖𝑢𝑠(𝐼𝑛𝑛𝑒𝑟𝐶𝑖𝑟𝑐𝑙𝑒), a friend function and a member of the 
class 𝐶𝑜𝑛𝑐𝑒𝑛𝑡𝑟𝑖𝑐𝐶𝑖𝑟𝑐𝑙𝑒𝑠. It returns the 𝑟𝑎𝑑𝑖𝑢𝑠 

II.	𝑂𝑢𝑡𝑒𝑟𝐶𝑖𝑟𝑐𝑙𝑒 with the following members: 
1.	𝑑𝑖𝑎𝑚𝑒𝑡𝑒𝑟, a private member of type 𝑑𝑜𝑢𝑏𝑙𝑒 
2.	𝑛𝑎𝑚𝑒, a private member of type 𝑠𝑡𝑟𝑖𝑛𝑔 
3.	𝑠𝑒𝑡𝑂𝑢𝑡𝑒𝑟𝐶𝑖𝑟𝑐𝑙𝑒𝐼𝑛𝑓𝑜(𝑂𝑢𝑡𝑒𝑟𝐶𝑖𝑟𝑐𝑙𝑒, 𝑑𝑜𝑢𝑏𝑙𝑒, 𝑠𝑡𝑟𝑖𝑛𝑔), a friend function to change the values of 𝑑𝑖𝑎𝑚𝑒𝑡𝑒𝑟 and 𝑛𝑎𝑚𝑒 
4.	𝑔𝑒𝑡𝑂𝑢𝑡𝑒𝑟𝑅𝑎𝑑𝑖𝑢𝑠(𝑂𝑢𝑡𝑒𝑟𝐶𝑖𝑟𝑐𝑙𝑒), a friend function and a member of the 
class 𝐶𝑜𝑛𝑐𝑒𝑛𝑡𝑟𝑖𝑐𝐶𝑖𝑟𝑐𝑙𝑒𝑠. It returns the 𝑟𝑎𝑑𝑖𝑢𝑠 
III.	𝐶𝑜𝑛𝑐𝑒𝑛𝑡𝑟𝑖𝑐𝐶𝑖𝑟𝑐𝑙𝑒𝑠 with the following two members: 
a. 𝑔𝑒𝑡𝐼𝑛𝑛𝑒𝑟𝑅𝑎𝑑𝑖𝑢𝑠(𝐼𝑛𝑛𝑒𝑟𝐶𝑖𝑟𝑐𝑙𝑒), a friend function of class 𝐼𝑛𝑛𝑒𝑟𝐶𝑖𝑟𝑐𝑙𝑒𝑠. It returns the class’ 𝑟𝑎𝑑𝑖𝑢𝑠 Inner 
b. 𝑔𝑒𝑡𝑂𝑢𝑡𝑒𝑟𝑅𝑎𝑑𝑖𝑢𝑠, a friend function of class 𝑂𝑢𝑡𝑒𝑟𝐶𝑖𝑟𝑐𝑙𝑒𝑠(𝑂𝑢𝑡𝑒𝑟𝐶𝑖𝑟𝑐𝑙𝑒). It returns the 􏰠􏰡􏰢􏰣􏰤􏰞􏰤􏰥 
class’ 𝑟𝑎𝑑𝑖𝑢𝑠  Use the following test code: 
InnerCircle c1;
OuterCircle c2;
ConcentricCircles c3;
setInnerCircleInfo(c1, 100, "The inner circle"); setOuterCircleInfo(c2, 150, "The outer circle"); 
cout << "Inner circle's radius = " << c3.getInnerRadius(c1) << endl; cout << "Outer circle's radius = " << c3.getOuterRadius(c2) << endl; 


**Lab 10**
Implement a class called Person with the following members: 
1. 𝑛𝑎𝑚𝑒, a private variable of type 𝑠𝑡𝑟𝑖𝑛𝑔 2. 𝑎𝑔𝑒, a private variable of type 𝑖𝑛𝑡 
3.	Default constructor to set name to "" and age to 0 
4.	Non-default constructor which accepts two parameters for name and age 
5.	A copy constructor 
6.	The post-increment operator 
7.	The pre-decrement operator 
8.	The insertion and extraction stream operators << and >> 


**Lab 11 - Mar 20**
I. Create the class Item with the following members:
    1. id, a protected variable of type int
    2. name, a protected variable of type string
    3. price, a protected variable of type double
    4. a public non-default constructor which accepts three parameters to initialize the variables above

II. Create the class Chair. The class publicly inherits from Item and has the following members
    1. numLegs, a private variable of type int
    2. a non-default constructor to initialize numLegs, id, name, and price
    3. accessors and mutators for numLegs
    4. an int conversion constructor to convert from an int to a type of class Chair.
    5. a string conversion operator which returns a string consisting of the values of id, name, price, and int with spaces between the values
    6. overloaded output stream operator
    7. overloaded input stream operator

III. Write test code to create an instance of type Chair and test all members


**Lab 12**
Create the following C++ program: 
1.	Open the file called 𝑔𝑟𝑎𝑑𝑒𝑠. 𝑐𝑠𝑣 
2.	Print an error message if the file cannot be opened. 
3.	If the file was opened successfully: 
a. Skip the first line as it contains the header.
b. Compute the average and count the number of rows in the file 
 Hint: in order to extract the grade from each line, assume that the grade starts at position 9. Use the 𝑠𝑒𝑒𝑘𝑔 method to skip the unwanted characters. 
4.	Write the 𝑠𝑢𝑚, 𝑐𝑜𝑢𝑛𝑡, and 𝑎𝑣𝑒𝑟𝑎𝑔𝑒 to a file called 𝑅𝑒𝑠𝑢𝑙𝑡𝑠. 𝑡𝑥𝑡 such that: 
1.	The label column is right justified in a column of length 10. Use the character ′@′ as the fill 
character. 
2.	Use precision 2 except for the 𝑐𝑜𝑢𝑛𝑡. Make 𝑐𝑜𝑢𝑛𝑡’𝑠 precision equal to 0. 
5.	Your output file, 𝑅𝑒𝑠𝑢𝑙𝑡𝑠. 𝑡𝑥𝑡, should look as follows. 
@@@@@Sum: 1618.89 @@@Count: 20 @@@@@Avg: 80.94 

#Lab 13
1.	Create a struct called 𝑇𝑒𝑠𝑡𝑆𝑐𝑜𝑟𝑒 with the following members: 
1.	𝑖𝑛𝑡 𝑠𝑡𝑢𝑑𝑒𝑛𝑡𝐼𝑑 
2.	𝑑𝑜𝑢𝑏𝑙𝑒 𝑛𝑢𝑚𝑒𝑟𝑖𝑐 
2.	Create an array of type 𝑇𝑒𝑠𝑡𝑆𝑐𝑜𝑟𝑒 and size 1 
3.	Inside of your 𝑚𝑎𝑖𝑛( ): 
1.	Create an array called 𝑎𝑟𝑟𝑆𝑐𝑜𝑟𝑒 of type 𝑇𝑒𝑠𝑡𝑆𝑐𝑜𝑟𝑒 and size 100 
2.	Prompt the user to enter 100 values to populate the array 𝑎𝑟𝑟𝑆𝑐𝑜𝑟𝑒. Use the provided test 
lines. You can copy and paste the lines directly in the command prompt screen. 
3.	Write the array 𝑎𝑟𝑟𝑆𝑐𝑜𝑟𝑒 to a file called 𝑎𝑟𝑟𝑆𝑐𝑜𝑟𝑒. 𝑏𝑖𝑛 
2. Crate a function called 𝑔𝑒𝑡𝑅𝑒𝑐𝑜𝑟𝑑. The function takes one input parameter of type 𝑖𝑛𝑡. The function will: 
1.	Open the file 𝑎𝑟𝑟𝑆𝑐𝑜𝑟𝑒. 𝑏𝑖𝑛 and read the 𝑖􏰞􏰟 value from the file. For example, the function call: 
o	  𝑔𝑒𝑡𝑅𝑒𝑐𝑜𝑟𝑑(0) will return the 1st entry from the file. 
o	  𝑔𝑒𝑡𝑅𝑒𝑐𝑜𝑟𝑑(9) will return the 10th entry from the file. ... 
2.	Use the 𝑠𝑒𝑒𝑘 method to skip unwanted bytes. 
Test Code: 
for (int i = 0; i < 10; ++i) {
getRecord(i);
cout << "Entry# " << i << ": " << testScore[0].studentId << ", " << testScore[0].numeric << endl; 
} 


**Lab 14**
1.	Write a recursive function called 𝑟𝑒𝑐𝑢𝑟𝑠𝑖𝑣𝑒𝐺𝐶𝐷 to compute GCD. 
2.	Write an iterative function called 𝑖𝑡𝑒𝑟𝑎𝑡𝑖𝑣𝑒𝐺𝐶𝐷 to compute GCD. 
3.	Write a recursive function called 𝑟𝑒𝑐𝑢𝑟𝑠𝑖𝑣𝑒𝑆𝑢𝑚 to compute the sum of two numbers. 
4.	Write an iterative function called 𝑖𝑡𝑒𝑟𝑎𝑡𝑖𝑣𝑒𝑆𝑢𝑚to compute the sum of two numbers. 
Test Code: 
cout << "iterative GCD(420, 96) = " << iterGCD(420, 96) << endl;
cout << "recursive GCD(420, 96) = " << recursiveGCD(420, 96) << endl; 
cout << "iterative GCD(54, 1) = " << iterGCD(54, 1) << endl;
cout << "recursive GCD(54, 1) = " << recursiveGCD(54, 1) << endl; 
cout << "iterative GCD(54, 1) = " << iterGCD(42, 56) << endl;
cout << "recursive GCD(54, 1) = " << recursiveGCD(42, 56) << endl; 
cout << "iterative Sum(0, 3) = " << iterSum(0, 3) << endl;
cout << "recursive Sum(0, 3) = " << recursiveSum(0, 3) << endl; 

**Lab 15**
1.	Write a recursive function called 𝑟𝑒𝑐𝐶𝑜𝑝𝑦 to copy items from one array to the other. 
2.	Write an iterative function called 𝑖𝑡𝑒𝑟𝑅𝑒𝑣𝑃𝑟𝑖𝑛𝑡 to print an array in reverse order. 
3.	Write a recursive function called 𝑟𝑒𝑐𝑅𝑒𝑣𝑃𝑟𝑖𝑛𝑡 to print an array in reverse order. 

**Lab 16**
1.	Multiplication can be implemented as repetitive addition. For example, 9 × 5 = 9 + 9 + 9 + 9 + 9. Write a recursive function that performs multiplies two numbers 𝑋 × 𝑌 and returns the result using recursive addition. 
2.	A palindromic string is a string that can be read from right-to-left or from left-to-right. For example,𝐴,𝐴𝐵𝐴,𝐴𝐵𝐶𝐷𝐶𝐵𝐴 are all palindromic string; but𝐴𝐵,𝐶𝐷𝐷 are not. Write a recursive function which returns true if the string is palindromic, or false otherwise. 
3.	Two arrays are equal, if they contain similar values in their corresponding positions. Write a recursive function which returns true if two arrays contain the same values in the same order. The function should accept at least 4 parameters, array1 (type int), size1 (the size of the first array), array2 (type int), size2 (the size of the 2nd array). You may add any number additional parameters to complete your implementation. 

**Lab 17**
1.	Write a class called 𝑪𝒊𝒓𝒄𝒍𝒆 with the following members: 
1.	𝑛𝑎𝑚𝑒, a variable of type 𝑠𝑡𝑟𝑖𝑛𝑔 
2.	𝑟𝑎𝑑𝑖𝑢𝑠, a variable of type 𝑑𝑜𝑢𝑏𝑙𝑒 
3.	𝑛𝑜𝑛 − 𝑑𝑒𝑓𝑎𝑢𝑙𝑡 constructor to initialize both variable members 
4.	𝑠𝑢𝑟𝑓𝑎𝑐𝑒𝐴𝑟𝑒𝑎, a method that returns the surface area (2 × 𝜋 × 𝑟􏰚) 
5.	𝑜𝑝𝑒𝑟𝑎𝑡𝑜𝑟 <<, which prints the value of name and the surface area. 
6.	𝑑𝑒𝑠𝑡𝑟𝑢𝑐𝑡𝑜𝑟, which prints "𝐷𝑒𝑎𝑙𝑙𝑜𝑐𝑎𝑡𝑖𝑛𝑔 𝐶𝑖𝑟𝑐𝑙𝑒′𝑠 𝑑𝑦𝑛𝑎𝑚𝑖𝑐 𝑚𝑒𝑚𝑜𝑟𝑦" 
2.	Write a class called 𝑪𝒚𝒍𝒊𝒏𝒅𝒆𝒓 with the following members: 
1.	h𝑒𝑖𝑔h𝑡, a variable of type 𝑑𝑜𝑢𝑏𝑙𝑒 
2.	𝑛𝑜𝑛-𝑑𝑒𝑓𝑎𝑢𝑙𝑡 constructor to initialize all three variable members (height, name, and radius) 
3.	𝑠𝑢𝑟𝑓𝑎𝑐𝑒𝐴𝑟𝑒𝑎, a method with returns the cylinder’s surface area (2 × 𝜋 × 𝑟 × h + 2 ×< 
𝑏𝑎𝑠𝑒 𝑐𝑙𝑎𝑠𝑠 𝑠𝑟𝑢𝑓𝑎𝑐𝑒 𝑎𝑟𝑒𝑎 >) 
4.	𝑑𝑒𝑠𝑡𝑟𝑢𝑐𝑡𝑜𝑟, which prints "𝐷𝑒𝑎𝑙𝑙𝑜𝑐𝑎𝑡𝑖𝑛𝑔 𝐶𝑦𝑙𝑖𝑛𝑑𝑒𝑟′𝑠 𝑑𝑦𝑛𝑎𝑚𝑖𝑐 𝑚𝑒𝑚𝑜𝑟𝑦" 

**Lab 19**
I.	Write a class called 𝑁𝑒𝑤𝑆𝑡𝑟𝑖𝑛𝑔 that is derived from the string class. The class has the following: 
1.	A non-default constructor that receives a string object (by value) and passes it on to the base class constructor. 
2.	The function 𝑐h𝑎𝑟 𝑜𝑝𝑒𝑟𝑎𝑡𝑜𝑟[ ](𝑖𝑛𝑡) which returns the character at the specified position parameter. If the position parameter, is outside the bounds of the string, throw an exception with string value "Index out-of-bounds". 
3.	An 𝑖𝑛𝑡 conversion operator which converts the string to an int. The operator checks all the characters in the string, if they are all numeric, it converts the string to an 𝑖𝑛𝑡 using the function 𝑠𝑡𝑜𝑖( ). If at least one of the characters is not numeric, raise an exception with integer value 999. 
II.	Write a test 𝑚𝑎𝑖𝑛( ) which creates an instance of 𝑁𝑒𝑤𝑆𝑡𝑟𝑖𝑛𝑔 and tests both operators. Your code should include 𝑡𝑟𝑦 − 𝑐𝑎𝑡𝑐h blocks for each test. Your 𝑚𝑎𝑖𝑛( ) should contain a test for both operators. You will need to have two 𝑡𝑟𝑦 − 𝑐𝑎𝑡𝑐h blocks. 

**Lab 20**
Consider the following template class 
template<class T>
             class Shape {
                 protected:
                     T x;
                 public:
                     Shape(T x)
{ this->x = x; } virtual ~Shape()   {    }
virtual string getInfo()=0;  
}; 
Implement class IntShape which inherits from class 𝑆h𝑎𝑝𝑒 with an 𝑖𝑛𝑡 template type. The 
class 𝐼𝑛𝑡𝑆h𝑎𝑝𝑒 has one private variable called 𝑛𝑎𝑚𝑒 of type 𝑠𝑡𝑟𝑖𝑛𝑔. The function 𝑔𝑒𝑡𝐼𝑛𝑓𝑜( ) returns the value of 𝑛𝑎𝑚𝑒. Additional functions may be required, add them as you see fit. 
Implement a template function 𝑔𝑒𝑡𝑀𝑎𝑥( ). The function returns the maximum of the two parameters. The function’s header is as follows, where 𝑇2 is a template that must be declared. 
Test Code. 

**Lab 21**
Implement a class named 𝐷𝑖𝑠𝑡𝑂𝑏𝑗. Start by adding the following 𝑃𝑈𝐵𝐿𝐼𝐶 members: 
Write a distance, a variable member of type double.
Non-default constructor which receives a value in order to initialize the variable distance. Input stream operator to read a value from the command line into the variable distance. 
𝑓𝑜𝑟(𝑖𝑛𝑡𝑖 = 0; 𝑖 < 25; ++𝑖) {    
𝐷𝑖𝑠𝑡𝑂𝑏𝑗 𝑐(−1);  𝑐𝑖𝑛 >> 𝑐; 
𝑚𝑦𝑉𝑒𝑐. 𝑝𝑢𝑠h_𝑏𝑎𝑐𝑘(𝑐); 
}
test 𝑚𝑎𝑖𝑛 as follows:
Create a vector to hold instances of type 𝐷𝑖𝑠𝑡𝑂𝑏𝑗
Use the following 𝑓𝑜𝑟 loop to read values from the command prompt. Test input values are provided below. 


Use the STL 𝑠𝑜𝑟𝑡 function from the algorithm header file
Print the values of the 𝑣𝑒𝑐𝑡𝑜𝑟. Notice that the values are now sorted.
Use the STL 𝑓𝑖𝑛𝑑 function to search for a 𝐷𝑖𝑠𝑡𝑂𝑏𝑗 once with 𝑑𝑖𝑠𝑡𝑎𝑛𝑐𝑒 of 11.11 and once with 𝑑𝑖𝑠𝑡𝑎𝑛𝑐𝑒 of 73.9. Note that the 𝑓𝑖𝑛𝑑 function accepts 3 arguments, 𝑎 𝑠𝑡𝑎𝑟𝑡 𝑖𝑡𝑒𝑟𝑎𝑡𝑜𝑟, 𝑎𝑛 𝑒𝑛𝑑 𝑖𝑡𝑒𝑟𝑎𝑡𝑜𝑟, and 𝑎𝑛 𝑜𝑏𝑗𝑒𝑐𝑡 of type 𝐷𝑖𝑠𝑡𝑂𝑏𝑗. The 𝑓𝑖𝑛𝑑 function returns an object of type iterator.
If the value is found, print 𝐹𝑂𝑈𝑁𝐷. If the value is not found, print 𝑁𝑂𝑇 𝐹𝑂𝑈𝑁𝐷 

**Lab 22 - May 8**
Convert the classes to template classes

