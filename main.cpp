#include <iostream>
using namespace std;

//class definition
class Car{
    
    //private area
    private:
        int horsepowers;

    //public area
    public:
        void setHorsepowers(int x) {
            horsepowers = x; //storing it into the horsepower variable of the class
        }
    
        int getHorsepowers() { //access the value of the horsepower variable stored in the private access specifier of the class
            if(horsepowers >= 800){ //unless it's equal or greater than 800 where it will output "Too Much"
            cout << "Too much" << endl;
        }
            return horsepowers;
        }
        

};


int main() {
    int horsepowers;
    cin >> horsepowers;
    //creating the object of class Car
    Car car;
    //setting the value for private member
    car.setHorsepowers(horsepowers);
    //printing the value of private member
    cout << car.getHorsepowers();

    return 0;
}
