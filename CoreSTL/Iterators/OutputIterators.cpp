//Output iterator is just opposite to the input iterator:
//move operation in output iterator

// template
// OutputIterator move(InputIterator first, InputIterator last, OutputIterator result)

// {
//   while(first != last){
//     *result = std:: move(*first);
//     ++result;
//     ++first;
//   }

//   return result;
// }
//in output iterator you can modified the value of the existing iterator

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){


  vector<int> v = {1, 2,  4, 5, 7, 8};

  vector<int> :: iterator itrr;

  for(itrr = v.begin(); itrr != v.end(); ++itrr){


    *itrr = 5;

    cout << *itrr << " ";

  }

  return 0;
}