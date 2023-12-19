#include "QueueList.h"
#include "../gtest/gtest.h"

TEST(TQueueList, can_create_QueueList)
{
  ASSERT_NO_THROW(TQueueList<int> qe);
}

TEST(TQueueList, create_empty_QueueList)
{
  TQueueList<int> qe;

EXPECT_EQ(true, qe.IsEmpty());
}

TEST(TQueueList, create_isfull_QueueList)
{
  TQueueList<int> Q;

  EXPECT_EQ(false, Q.IsFull());
}

TEST(TQueueList, can_push)
{
  TQueueList<int> Q;

  ASSERT_NO_THROW(Q.Push(3));
}

TEST(TQueueList, can_get_elem)
{
  TQueueList<int> Queue;
  Queue.Push(4);
  Queue.Push(2);
  Queue.Push(1);

  EXPECT_EQ(4, Queue.Get());
}

TEST(TQueueList, cant_get_if_empty)
{
  TQueueList<int> Q;

  ASSERT_ANY_THROW(Q.Get());
}

TEST(TQueueList, can_copy_QueueList)
{
  TQueueList<int> QueueFirst;
  QueueFirst.Push(1);
  QueueFirst.Push(4);
  QueueFirst.Push(15);

  ASSERT_NO_THROW(TQueueList<int> Q2(QueueFirst));
}

TEST(TQueueList, can_assing_QueueList)
{
  TQueueList<int> Q1;
  Q1.Push(1);
  TQueueList<int> Q2;
  Q2 = Q1;

  EXPECT_EQ(1, Q2.Get());
}

TEST(TQueueList, can_get_count)
{
  TQueueList<int> Q;
  Q.Push(1);
  Q.Push(2);
  EXPECT_EQ(2, Q.GetCount());
}

TEST(TQueueList, DOP_can_get_max_elem_DOP)
{
  TQueueList<int> Q;
  Q.Push(1);
  Q.Push(2);
  Q.Push(5);
  Q.Push(134);
  Q.Push(0);
  Q.Push(2);
  EXPECT_EQ(134, Q.Max_elem());
}

TEST(TQueueList, DOP_can_get_min_elem_DOP)
{
  TQueueList<int> Q;
  Q.Push(1);
  Q.Push(2);
  Q.Push(5);
  Q.Push(134);
  Q.Push(3);
  Q.Push(2);
  EXPECT_EQ(1, Q.Min_elem());
}