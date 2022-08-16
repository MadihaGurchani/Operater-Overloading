#include <iostream>

using namespace std;

class MathClass
{
    private: 
        int number;
    public:
          MathClass()
          {
              number = 0;
          }
          MathClass(int x){
              number = x;
          }
          MathClass operator +(MathClass m)
          {
              MathClass temp;
              temp.number = number+m.number;
              return temp;
          }
          void Display(){
              cout<<"Result: "<<number<<endl;
          }
};
int main()
{
   MathClass first(4),second(2),result;
   result = first + second;
   result.Display();
    return 0;
}
