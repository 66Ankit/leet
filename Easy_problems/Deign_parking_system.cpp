// beats 98% 

#include<bits/stdc++.h>
using namespace std;

class ParkingSystem {
public:
    int Big,Med,Small;
    ParkingSystem(int big, int medium, int small) {
        Big=big;
        Med=medium;
        Small=small;
    }
    
    bool addCar(int carType) {
        
        if(carType==1&&Big>0)
            Big--;
        else if(carType==2&&Med>0)
            Med--;
        else if(carType==3&&Small>0)
            Small--;
        else
            return(false);
        
        return(true);
            
    }
};
