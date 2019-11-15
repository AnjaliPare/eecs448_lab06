#include "Test.h"

void Test::isEmptyTest1()
{
  Queue q;
  if (q.isEmpty()==true)
  {
    std::cout<<"\nTest 1: Newly created Queue is empty: PASSED";
  }
  else
  {
    std::cout<<"\nTest 1: Newly created Queue is empty: FAILED";
  }
}

void Test::isEmptyTest2()
{
  Queue q;
  q.enqueue(5);
  if (q.isEmpty()==true)
  {
    std::cout<<"\nTest 2: Enqueing a value makes the Queue not empty: FAILED";
  }
  else
  {
    std::cout<<"\nTest 2: Enqueing a value makes the Queue not empty: PASSED";
  }
}

void Test::isEmptyTest3()
{
  Queue q;
  q.enqueue(5);
  q.dequeue();
  if (q.isEmpty()==true)
  {
    std::cout<<"\nTest 3: Enqueing and then dequeing creates an empty queue: PASSED";
  }
  else
  {
    std::cout<<"\nTest 3: Enqueing and then dequeing creates an empty queue: FAILED";
  }
}



void Test::runTest()
{
  isEmptyTest1();
  isEmptyTest2();
  isEmptyTest3();
  std::cout<<"\n";
}
