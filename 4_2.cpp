#include<iostream>
#include<string>
#include<cstring>

class Book
{
  public:
  	std::string bookname;
 	double price;
    int number;
  
    Book(std::string name, double p, int num)
    {
      this->bookname=name;
      this->price=p;
      this->number=num;
    }
  
    void display()
    {
      std::cout<<bookname<<" "<<price<<" "<<number<<std::endl;
    }

    void borrow()
    {
      number--;
    }

    void restore()
    {
      number++;
    }
};

int main()
{
	char name[20]="C++";
	Book book1(name,23.5,3);
	strcpy(name,"Data Structure");
	Book book2(name,28.8,7);
	book1.borrow();
	book1.display();
	book2.restore();
	book2.display();
	return 0;
}