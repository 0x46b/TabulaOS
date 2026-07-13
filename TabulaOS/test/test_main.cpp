#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int main(int argc, char **argv)
{
  doctest::Context context;

  // BEGIN:: PLATFORMIO REQUIRED OPTIONS
  context.setOption("success", true);     // Reports successful tests
  context.setOption("no-exitcode", true); // Do not return non-zero code on failed test case
  // END:: PLATFORMIO REQUIRED OPTIONS

  // YOUR CUSTOM DOCTEST OPTIONS
  context.setOption("abort-after", 5);    // stop test execution after 5 failed assertions
  context.setOption("order-by", "name");  // sort the test cases by their name

  context.applyCommandLine(argc, argv);
  return context.run();
}