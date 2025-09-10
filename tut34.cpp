#include<iostream>
using namespace std;

class base{
    protected:
       int a;
    private:
       int b;

};
/*for a protected member:
              public dervaituion  private       protected 
1. private    not inherited      not inherited  not inherited
2. protected  protected          private               protected
3. public     public            private        protected
*/
class derived:protected base{
   
};
int main(){

return 0;
}