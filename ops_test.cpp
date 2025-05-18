#include <lib/interpreter.h>
#include <gtest/gtest.h>


TEST(OpsTestSuite, NumTests) {
    std::string code = R"(
        x = 7
        y = 2
        print(7 % 2)
        print(7 + 2)
        print(7 - 2)
        print(7 * 2)
        print(7 / 2)
        print(7 < 2)
        print(7 > 2)
        print(7 == 2)
    )";

    std::string expected = "195143.5falsetruefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}