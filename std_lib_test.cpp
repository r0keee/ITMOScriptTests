#include <lib/interpreter.h>
#include <gtest/gtest.h>


TEST(StandartLibSuite, NumberTests) {
    std::string code = R"(
        x = 4
        print(abs(x))
        print(sqrt(x))
        print(rnd(4))
    )";
    std::string expected = "42";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_TRUE(output.str()[0] == '4' && output.str()[1] == '2');
    ASSERT_TRUE(output.str()[2] == '0' || output.str()[2] == '1' || output.str()[2] == '2' || output.str()[2] == '3');
}