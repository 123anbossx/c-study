#include <iostream>
using namespace std;
class Circle {
    private:
      int x;
      int y;
      int radius;
    public:
      void setXYandRadius(int x,int y,int radius){
        this->x = x;
        this->y = y;
        this->radius = radius;
      };
      string getRelationship( int &spotX, int &spotY){
         int distValue = pow(spotX,2) + pow(spotY,2);
         int radiusValue = pow(this->radius,2);
         if(distValue>radiusValue){
             return "点在圆外";
         }else if(distValue==radiusValue){
             return "点在圆上";
         }else{
            return "点在圆内";
         }
      }
};
class Spot{
    private:
      int x;
      int y;
    public:
      void setXY(int x,int y){
        this->x= x;
        this->y= y;
      };
      int getX(){
         return this->x;
      }
      int getY(){
         return this->y;
      }
};
int main(){
    Circle a;
    Spot b;
    a.setXYandRadius(1,1,3);
    b.setXY(3,4);
    int spotX = b.getX();
    int spotY = b.getY();
   cout<<a.getRelationship(spotX,spotY)<< endl;
    return 0;
}