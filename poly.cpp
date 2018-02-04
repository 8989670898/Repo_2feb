#include<iostream>	
using namespace std;
class animal
{
	public:
		void eat(){
			cout<<"eating...";
		}
};
class dog: public animal
	   {
		   public:
			   void eat()
			   {
				   cout<<"Eating bread...";
			   }
	   };
int main(void){
	dog d = dog();
	d.eat;
	return 0;
}
