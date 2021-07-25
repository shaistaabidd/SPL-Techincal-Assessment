#include <iostream>
#include <map>
using namespace std;
template <typename MapHash> // template

bool HashMapFun(MapHash z, MapHash a) // Hash Map Function
{
    if((z.size() == a.size()) && (equal(z.begin(), z.end(), a.begin()))) // check if two hash maps 
    {
        return true;                                                    //are equal or not..
    }
    else
    {
        return false;
    }
}


int main() {
    map<char, int> z, a;
    z['a'] = 1, z['b'] = 2, z['c'] = 3;     // Hash map 1...
    a['c'] = 3, a['b'] = 2, a['a'] = 1;     // Hash map 2..
    
    cout<<"***Checking The EQUALITY of two Maps***\n";
    cout << "  z={a:1,b:2,c:3}    a={c:3,b:2,a:1} Output : ";
    cout<<HashMapFun(z, a) <<"\n";          // Function call to check EQUALITY..
                                                                
                                                                
                                            // Another Example..                    
    z['a'] = 1, z['b'] = 2, z['d'] = 3;     // Hash Map 1..
    a['x'] = 3, a['c'] = 2, a['a'] = 1;     // Hash Map 2..
    
    cout<<"***Checking The EQUALITY of two Maps***\n";
    cout << "  z={a:1,b:2,d:3}    a={x:3,c:2,a:1} Output : ";
    cout<< HashMapFun(z, a) << "\n";        // Function call to check EQUALITY..

}


//Yes we can use this method to return how many elements match between two maps..
// but the above function will return bool value if matching between two maps are found. It will match 
// all keys and value of first map with second map. If match is found, it will return true otherwise
// it will return false.. But this function will not return that how many elements are matched between two maps..
// To return count of elements matched between between two maps, we need to implement another function..