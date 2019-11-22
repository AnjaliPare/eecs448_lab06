/**
*	@file Queue.h
*	@author Anjali Pare
*	@date 2014.04.02
*/

#ifndef TEST_H
#define TEST_H

#include "Queue.h"
#include <stdexcept>
#include <iostream>
//This Queue class can only hold ints
class Test
{
public:
  /**
   * Runs all the tests
   * @param none
   */
  void runTest();
  /**
   * Tests if newly created queue is empty
   * @param none
   */
  void isEmptyTest1();
  /**
   * Tests if on enqueing a number, the queue is no longer empty
   * @param none
   */
  void isEmptyTest2();
  /**
   * Tests if on Enqueing and dequeuing a number, the queue is empty
   * @param none
   */
  void dequeueTest1();
  /**
   * Tests if peekFront returns the right value when 2 numbers are enququed
   * @param none
   */
  void dequeueTest2();
  /**
   * Tests if dequeue is called on an empty queue, a runtime error is thrown
   * @param none
   */
  void dequeueTest3();
  /**
   * Tests if after adding a series of numbers to the queue and dequeing all the numbers, the queue is empty
   * @param none
   */
  void dequeueTest4();
  /**
   * Tests if enqueue is adding elements to the front rather than the back (this is a bug)
   * @param none
   */
  void dequeueTest5();
  /**
   * Tests if after adding a number to the queue, peekFront returns that number
   * @param none
   */
  void peekFrontTest1();
  /**
   * Tests if after adding a series of numbers to the queue, peekFront will return the first element that was enqueued
   * @param none
   */
  void peekFrontTest2();
  /**
   * Tests if peekFront is called on an empty queue, a runtime error is thrown
   * @param none
   */
  void peekFrontTest3();
  /**
   * Tests if after adding a number to the queue, the queue is not empty
   * @param none
   */
  void enqueueTest1();
  /**
   * Tests if enqueue adds to the back of the queue
   * @param none
   */
  void enqueueTest2();
  /**
   * Tests if after adding a series of number to the queue, the queue is not empty
   * @param none
   */
  void enqueueTest3();
  /**
   * Tests if a queue pointer is set to null after destructor is called
   * @param none
   */
  void deleteTest1();


};
#endif

//
