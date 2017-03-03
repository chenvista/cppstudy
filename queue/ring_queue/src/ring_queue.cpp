#include <iostream>
#include "MyQueue.h"
#include "Customer.h"
using namespace std;

int main(void)
{

  MyQueue *p  = new MyQueue(4);

  Customer c1("ryan",30);
  Customer c2("huqq",32);
  Customer c3("qiao",33);

  p -> EnQueue(c1);
  p -> EnQueue(c2);
  p -> EnQueue(c3);

    p-> QueueTraverse();
  Customer c4("",10);
  p->DeQueue(c4);
  p-> QueueTraverse();



  return 0;
}
