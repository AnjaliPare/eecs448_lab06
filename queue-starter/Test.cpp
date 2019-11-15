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
  q.enqueue(1);
  if (q.isEmpty()==true)
  {
    std::cout<<"\nTest 2: Enqueing a value makes the Queue not empty: FAILED";
  }
  else
  {
    std::cout<<"\nTest 2: Enqueing a value makes the Queue not empty: PASSED";
  }
}

void Test::dequeueTest1()
{
  Queue q;
  q.enqueue(1);
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

void Test::dequeueTest2()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.dequeue();
  if (q.peekFront()==2)
  {
    std::cout<<"\nTest 4: Enqueue 1, 2, 3 on empty queue then dequeue then peekFront returns 2: PASSED";
  }
  else
  {
    std::cout<<"\nTest 4: Enqueue 1, 2, 3 on empty queue then dequeue then peekFront returns 2: FAILED";
  }
}

void Test::dequeueTest3()
{
  Queue q;
  try
  {
    q.dequeue();
    std::cout<<"\nTest 5: Dequeue on an empty queue returns an exception: FAILED";
  }
  catch(std::runtime_error &e)
  {
    std::cout<<"\nTest 5: Dequeue on an empty queue returns an exception: PASSED";
  }
}



void Test::runTest()
{
  isEmptyTest1();
  isEmptyTest2();
  dequeueTest1();
  dequeueTest2();
  dequeueTest3();
  std::cout<<"\n";
}
