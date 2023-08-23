#include <iostream>
using namespace std;
int main(){

    /*
    for(size_t i{0} ; i < 100000 ; ++i){
        //std::cout << "i : " << i << std::endl;
    }
    std::cout << "Done!" << std::endl;
    */

   size_t i{0}; // Iterator

   while(i < 100000){
        // std::cout << "i : " << i << std::endl; 
        ++i;     
   }
   cout << i << endl;
   std::cout << "Done!" << std::endl;
   
    return 0;
}