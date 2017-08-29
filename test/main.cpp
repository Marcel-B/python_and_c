#include "./gtest/gtest.h"
#include "../sum.h"
namespace
{
int hh(float a, float b)
{
  return 1 + 1;
}

// The fixture for testing class Foo.
class SumTest : public ::testing::Test
{
protected:
  // You can remove any or all of the following functions if its body
  // is empty.

  SumTest()
  {
    // You can do set-up work for each test here.
  }

  virtual ~SumTest()
  {
    // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  virtual void SetUp()
  {
    // Code here will be called immediately after the constructor (right
    // before each test).
  }

  virtual void TearDown()
  {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }

  // Objects declared here can be used by all tests in the test case for Foo.
};

// Tests that the Foo::Bar() method does Abc.
TEST_F(SumTest, MethodBarDoesAbc)
{
  callback_type bar = &hh;
  int *numbs = (int *)malloc(sizeof(int) * 2);
  numbs[0] = 1;
  numbs[1] = 2;
  int foo = test_function(2, numbs, hh);
}

// Tests that Foo does Xyz.
TEST_F(SumTest, DoesXyz)
{
  // Exercises the Xyz feature of Foo.
}

} // namespace

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}