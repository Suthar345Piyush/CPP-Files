#include<iostream>
using namespace std;

class Hero {

  private: // if any value is in private class then we can use getters and setters to read and manipulate it 
  int health;// when class is created automatically constructer is created

  public:
  char level;

  void print(){
    cout<< level << endl;
  }

  int getHealth(){
    return health;
  }

  char getLevel(){
    return level;
  };

  void getHealth(int h){
    health = h;
  }

  void getLevel(char ch){
    level = ch;
  }

};

int main(){
    // create an object
   Hero h1;
   h1.getHealth(49);
   cout << "Hero health is: " << h1.getHealth() << endl;
   h1.getHealth(70);
   h1.getLevel('A');



    cout << "The health of hero: " << h1.getHealth() << endl;
    cout << "The level of hero: " << h1.getLevel() << endl;
   

    return 0;
}


// Constructer and Destructer


#include<iostream>
using namespace std;

class Car {

  private:
  string brand;
  int year;

  public:
   Car(){
    brand = "unknown";
    year = 0;
   }

   Car(string b , int y ){
    brand = b;
    year = y;
   }

   string getBrand(){
    return brand;
   }

   int getYear(){
    return year;
   }

   
};

int main(){

  Car car1;
  Car car2("Suzuki" , 2010);

  cout << "The brand of car is: " <<  Car.getBrand() << endl;
  cout << "The year of car is: " <<  Car.getYear() << endl;

  return 0;
}
