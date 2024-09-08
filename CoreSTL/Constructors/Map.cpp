// maps in stl are like containers which is a collection of element in mapped fashion.
//with key value pair collection , not two element have the same key in map.
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    
    map<string , int> maps;

    maps["One"] = 1; // it stores elements as key value pair 
    maps["two"] = 2;
    maps["Three"] = 3;
    maps["Four"] = 4;
   

   map<string , int> :: iterator it = maps.begin();

   while(it != maps.end()){
    cout << "Key: " << it-> first << " " << ',' << "Value: "  << it-> second << endl; //here first gives the key  and second give the  value
    ++it;
   }

}

//impleamenting map of integers:

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

  map<string, int> mapss;

  mapss["One"] = 1;
  mapss["Two"] = 2;
  mapss["Three"] = 3;
  mapss["Four"] = 4;
  mapss["Five"] = 5;

  
  cout << "Key: One, Value: " << mapss["One"] << endl;
   cout << "Key: Two, Value: " << mapss["Two"] << endl;
    cout << "Key: Three, Value: " << mapss["Three"] << endl;
     cout << "Key: Four, Value: " << mapss["Four"] << endl;
   cout << "Key: Five, Value: " << mapss["Five"] << endl;

   if(mapss.count("Four") > 0){
    cout << "Four is present in the mapss" << endl;
   }
   else{
    cout << "Four is not present in the mapss" << endl;
   }

}

//multimap implementation:
//it means we same key with different value 
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

  multimap<string, int> mmp;

  mmp["Ten"] = 10;
  mmp["Ten"] = 20;
  mmp["Thirty"] = 30;
  mmp["Fourty"] = 40;

  cout<< "Key: Ten , Value: " << mmp["Ten"] << endl; 
  cout<< "Key: Ten , Value: " << mmp["Ten"] << endl; 
  cout<< "Key: Thirty , Value: " << mmp["Thirty"] << endl; 
  cout<< "Key: Fourty , Value: " << mmp["Fourty"] << endl; 

  if(mmp.count(50) > 0){
    cout << "The key fifty is present in mmp" << endl;
  }
  else{
    cout << "The key fifty is not present in mmp" << endl;
  }



}
