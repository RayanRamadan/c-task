#include<iostream>
using namespace std;
const int MAX_SIZE =100;
class stack {
int top ;
int item [MAX_SIZE];
public: 
   stack(): top(-1){}
  void push (int element)
} 
  if (top >= MAX_SIZE -1)
}
cout <<" stack full on push";
{
else { top ++; item [top]=Element ;}
{
  bool isEmpty ()
   {return top < 0;}
   void pop ()
   }
   if (isEmpty())
   cout << "stack empty on pop ";
   else 
   top -- ;
{
void pop (int & Element)
}
   if (isEmpty)
   cout <<"stack empty on pop ";
else 
Element =item[top]
   top--;
{
{
   void get top (int & stack top )
}
   if (isEmpty())
  cout <<"stack empty on pop ";
  else 
  stacktop =item[top]
cout << stacktop <<endl;
{
  void print (){
  cout <<"[";
  for (int != top; i>=0; i--)}
   cout <<item [i]<<" ";
{
  cout <<"]";
  cout << endl;}
 ;{

int main(){
   stack s ;
   s.push(5);
   s.push(10);
   s.push(15);
   s.push(20);
   // int y=0;
   s.gettop(y);
    
    return 0;
}