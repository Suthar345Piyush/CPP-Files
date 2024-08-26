//Encapsulation:

#include<iostream>
using namespace std;

class Student{
  private:
   string name;
   int age;
   int rollno;


   public:
    int getRollno() {
      return this -> rollno;
    }
};


int main(){

   Student s1;
   cout << "student s1s2" << endl;

}

// Inheritance:

#include<iostream>
#include<string>
using namespace std;

class Human{
  public: 
   int age;
   int height;
   int weight;


   public: 
    int getAge(){
      return this -> age;
    }

     int  getHeight(){
      return this -> height;
     }

     int getWeight(){
      return this -> weight;
     }
};

// if any attribute of parent class is in private  and  we want that attribute to be in child class as a public then that attribute wan't be acssesible in child class (public)
   
    

    class Male : public Human {
      public: 
       string color;

       void sleep(){
         cout << "Male are sleeping"<< endl;
       }
    
};


int main(){
    Male object1;

    object1.age = 4;
    object1.height = 5;
    object1.color =  "red";
    object1.weight = 6;


    cout<< object1.age << endl;
    cout << object1.height << endl;
    cout<< object1.color << endl;
    cout << object1.weight << endl;
    return 0;
}


// Inheritance have some types :
// 1. Single level inheritance = normal inheritance
// 2. Multilevel inheritance = one parent class through which child1 is inherited and then chlid2 inherited from child1.
// 3. Multiple inheritance = one parent class then another class and then  a new class want to inheritedf from both of the classes before
// 4. Hierarchial inheritance = two child class has their one commen parent class to inheritance
// 5. Hybrid Inheritance = combination of more than two types of inheritance
