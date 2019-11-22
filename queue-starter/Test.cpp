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

/*void Test::isEmptyTest3()
{
  Queue q;
  q.enqueue(1);
  q.dequeue();
  if (q.isEmpty()==true)
  {
    std::cout<<"\nTest 3: Enqueing then dequeing a value makes the queue empty: PASSED";
  }
  else
  {
    std::cout<<"\nTest 3: Enqueing then dequeing a value makes the queue empty: FAILED";
  }
}*/


void Test::dequeueTest1()
{
  Queue q;
  q.enqueue(1);
  q.dequeue();
  if (q.isEmpty()==true)
  {
    std::cout<<"\nTest 4: Enqueing and then dequeing creates an empty queue: PASSED";
  }
  else
  {
    std::cout<<"\nTest 4: Enqueing and then dequeing creates an empty queue: FAILED";
  }
}

void Test::dequeueTest2()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.dequeue();
  if (q.peekFront()==2)
  {
    std::cout<<"\nTest 5: Enqueue 1, 2, then dequeue, peekFront returns 2: PASSED";
  }
  else
  {
    std::cout<<"\nTest 5: Enqueue 1, 2, then dequeue, peekFront returns 2: FAILED";
  }
}

void Test::dequeueTest3()
{
  Queue q;
  try
  {
    q.dequeue();
    std::cout<<"\nTest 6: Dequeue on an empty queue returns an exception: FAILED";
  }
  catch(std::runtime_error &e)
  {
    std::cout<<"\nTest 6: Dequeue on an empty queue returns an exception: PASSED";
  }
}

void Test::dequeueTest4()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.dequeue();
  q.dequeue();
  q.dequeue();
  if (q.isEmpty()==true)
  {
    std::cout<<"\nTest 7: Enqueue a series of numbers and dequeuing all of them gives an empty queue: PASSED";
  }
  else
  {
    std::cout<<"\nTest 7: Enqueue a series of numbers and dequeuing all of them gives an empty queue: FAILED";
  }
}

void Test::dequeueTest5()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.dequeue();

  if (q.peekFront()==3)
  {
    std::cout<<"\nTest 8: Enqueue adds numbers to the front: PASSED";
  }
  else
  {
    std::cout<<"\nTest 8: Enqueue adds numbers to the front: FAILED";
  }
}

void Test::peekFrontTest1()
{
  Queue q;
    q.enqueue(1);
    if(q.peekFront() == 1)
    {
      std::cout<<"\nTest 9: Enqueue a value of 1, peekfront returns 1: PASSED";
    }
    else
    {
      std::cout<<"\nTest 9: Enqueue a value of 1, peekfront returns 1: FAILED";
    }

}

void Test::peekFrontTest2()
{
  Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    if(q.peekFront() == 1)
    {
      std::cout<<"\nTest 10: Enqueue a series of numbers, peekfront should return the first value enqueued: PASSED";
    }
    else
    {
      std::cout<<"\nTest 10: Enqueue a series of numbers, peekfront should return the first value enqueued: FAILED";
    }
}

void Test::peekFrontTest3()
{
  Queue q;
  try
  {
    q.peekFront();
    std::cout<<"\nTest 11: peekFront on an empty queue returns an exception: FAILED";
  }
  catch(std::runtime_error &e)
  {
    std::cout<<"\nTest 11: peekFront on an empty queue returns an exception: PASSED";
  }
}

void Test::enqueueTest1()
{
  Queue q;
  q.enqueue(1);
  if (q.isEmpty()==true)
  {
    std::cout<<"\nTest 12: Enqueing a value makes the Queue not empty: FAILED";
  }
  else
  {
    std::cout<<"\nTest 12: Enqueing a value makes the Queue not empty: PASSED";
  }
}

/*{
  Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    if(q.peekFront() == 1)
    {
      std::cout<<"\nTest 13: Enqueue a series of numbers, peekfront should return the first value enqueued: PASSED";
    }
    else
    {
      std::cout<<"\nTest 13: Enqueue a series of numbers, peekfront should return the first value enqueued: FAILED";
    }
}*/

void Test::enqueueTest3()
{
  Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    if(q.isEmpty() == true)
    {
      std::cout<<"\nTest 13: Enqueue more than one number and queue is not empty: FAILED";
    }
    else
    {
      std::cout<<"\nTest 13: Enqueue more than one number and queue is not empty: PASSED";
    }
}

void Test::deleteTest1()
{

  Queue* q = new Queue();
  q->enqueue(1);
  delete q;
  if (q == nullptr)
  {
    std::cout<< "\nTest 14: destructor sets queue pointer back to null on deletion: PASSED";
  }
  else
  {
    std::cout<< "\nTest 14: destructor sets queue pointer back to null on deletion: FAILED";
  }
}


void Test::runTest()
{
  isEmptyTest1();
  isEmptyTest2();
  //isEmptyTest3();
  dequeueTest1();
  dequeueTest2();
  dequeueTest3();
  dequeueTest4();
  dequeueTest5();
  peekFrontTest1();
  peekFrontTest2();
  peekFrontTest3();
  enqueueTest1();
  //enqueueTest2();
  enqueueTest3();
  deleteTest1();
  std::cout<<"\n";
}
