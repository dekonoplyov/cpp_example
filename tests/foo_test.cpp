#include "cpp_example/foo.h"

#include <gtest/gtest.h>

TEST(SomeTest, SomeCase)
{
    ASSERT_EQ(cpp_example::foo(), 42);
}
