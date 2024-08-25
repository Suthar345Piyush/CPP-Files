// Contructors

// #include<iostream>
// using namespace std;
// class Complex {
  
//   int a,b ;
//   public: 
//   Complex(void); // constructer decleartion 
//   void  printNumber(){
//     cout << "Your number is: " << a << "+" << b << "i" <<endl;
//   }
// };
// Complex :: Complex(void){  // default constructer 
//   a =10;
//   b = 5;
// } 
// int main (){
//   Complex c1,c2,c3;
//   c1.printNumber();
//   c2.printNumber();
//   c3.printNumber();
//   return 0;
// }


// Parametrized , default contructors = it can take more then one parameters

// #include<iostream>
// using namespace std;
// class Complex{
//   int a , b;

//   public:

//    Complex (int,int);

//    void printNumber(){
//     cout << "Your number is: " << a << "+" << b << "i" << endl;
//    }
// };
// Complex :: Complex(int x, int y){
//    a = x;
//    b = y;
// }

// int main(){

//   // Implicit call
//   Complex  a(10,5);
//     a.printNumber();

//   Complex b = Complex(2,7);
//     b.printNumber();
  

//   return 0;
// }



// Constructor overloading:

// #include<iostream>
// using namespace std;

// class Complex{
//   int a, b ;

//   public: 
//    Complex(){
//     a= 0;
//     b =0;
//    }

//    Complex(int x){
//     a = x;
//     b = 0;
//    }

//    Complex(int x , int y ){
//     a = x;
//     b = y;
//    }

//    void printNumber(){
//     cout << "Your number is : " << a << "+" << b << "i" << endl;
//    }
// };


// int main(){

//   Complex c1;
//   c1.printNumber();

//   Complex c2(5);
//   c2.printNumber();

//   Complex c3(7,8);
//     c3.printNumber();
  



//   return 0;
// }


// constructors with default arguments

// #include<iostream>
// using namespace std;

// class Simple{
//   int data1;
//   int data2;
//   int data3;

//   public:
//     Simple(int a , int b = 4, int c = 5){
//       data1 = a;
//       data2 = b;  // here b = 4 and c = 5 is default arguments
//       data3 = c;
//     }

//     void printData(); 
// };

// void Simple::printData(){
//   cout << "The value of data1, data2 and data3 is "<< data1 << " , " << data2 << " and " << data3 <<endl;
// }

// int main(){
//    Simple s(12, 15);
//    s.printData();

//    return 0;
// }

// Dynamic initialization of data in constructors

// #include<iostream>
// using namespace std;

// class BankDeposit{
//   int principal;
//   int years;
//   float interestRate;
//   float returnValue;


// public:
 
//   BankDeposit(){};
//   BankDeposit(int p , int y, float r); // r will be like 0.04
//   BankDeposit(int p, int y, int r); // r will be like  50
//   void show();

// };

// BankDeposit :: BankDeposit(int p, int y, float r)

// {
//   principal =  p;
//   years = y;
//   interestRate = r;
//   returnValue = p;

//   for( int i = 0; i < y; i++){
//     returnValue = returnValue * (1+interestRate);
//   }
// }

// BankDeposit :: BankDeposit(int p, int y, int r)

// {
//   principal =  p;
//   years = y;
//   interestRate = float(r)/100;
//   returnValue = p;

//   for( int i = 0; i < y; i++){
//     returnValue = returnValue * (1+interestRate);
//   }
// }
// void BankDeposit :: show(){
//   cout << endl <<"Principal amt was "<< principal <<
//   ". Return value after " << years << "years is " << returnValue << endl; 
// }

// int main(){
//   BankDeposit bd1, bd2, bd3;
//   int p, y;
//   float r;
//   int R;


//   cout << "Enter the value of p y and r"<< endl;
//   cin >> p >> y >> r;
//   bd1 = BankDeposit(p,y,r);
//   bd1.show();

//   cout << "Enter the value of p y and R" << endl;
//   cin >> p >> y >> R;
//   bd2 = BankDeposit(p, y , R);
//   bd2.show();


//   return 0;
// }
 

// copy constructor in cPP
#include<iostream>
using namespace std;
class MyClass {
private:
    int* data;
public:
    MyClass(int value) : data(new int(value)) {}
    
    // Copy constructor
    MyClass(const MyClass& other) : data(new int(*other.data)) {}
    
    ~MyClass() { delete data; }
};