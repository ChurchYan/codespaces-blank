// 39. Write a program to create a customer's bill for a company. The company sells only five different products: TV, VCR, Remote Controller, CD Player, and Tape Recorder. The unit prices are $400.00, $220, $35.20, $300.00, and $150.00, respectively. The program must read the quantity of each piece of equipment purchased from the keyboard. It then calculates the cost of each item, the subtotal, and the total cost after an 8.25% sales tax.

// The input data consist of a set of integers representing the quantities of each item sold. These integers must be input into the program in a user-friendly way; that is, the program must prompt the user for each quantity as shown below. The numbers in boldface show the user’s answers.

// - How Many TVs Were Sold? **3**
// - How Many VCRs Were Sold? **5**
// - How Many Remote Controllers Were Sold? **1**
// - How Many CDs Were Sold? **2**
// - How Many Tape Recorders Were Sold? **4**

// The format for the output is shown in Figure 3-13.

// ### Figure 3-13: Output format for project 29

// | QTY | DESCRIPTION       | UNIT PRICE | TOTAL PRICE |
// |-----|-------------------|------------|-------------|
// | xx  | TV                | 400.00     | xxxxx.xx    |
// | xx  | VCR               | 220.00     | xxxxx.xx    |
// | xx  | REMOTE CTRLR      | 35.20      | xxxxx.xx    |
// | xx  | CD PLAYER         | 300.00     | xxxxx.xx    |
// | xx  | TAPE RECORDER     | 150.00     | xxxxx.xx    |
// |     |                   | **SUBTOTAL** | xxxxx.xx    |
// |     |                   | **TAX**     | xxxxx.xx    |
// |     |                   | **TOTAL**   | xxxxx.xx    |

// Use either defined constants or memory constants for the unit prices and the tax rate. Use integer variables to store the quantities for each item. Use floating-point variables to store the total price for each item, the bill subtotal, the tax amount, and the total amount of the bill. Run your program twice with the following data:

// - **SET 1** → 2 1 4 1 2
// - **SET 2** → 3 0 2 0 2 1