#include <string>
#include <vector>

#include <lib/interpreter.h>
#include <gtest/gtest.h>

TEST(OperationsSuite, ListIndexing) {
    std::string code = R"(
        x = [1, 2, 3]
        print(x[0])
    )";

    std::string expected = "9";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(OperationsSuite, ListSlicing) {
    std::string code = R"(
        x = [1, 2, 3]
        print(x[:2])
    )";

    std::string expected = "[1, 2]";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(OperationsSuite, StringIndexing) {
    std::string code = R"(
        x = "123"
        print(x[0])
    )";

    std::string expected = "1";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(OperationsSuite, StringSlicing) {
    std::string code = R"(
        x = "123"
        print(x[:2])
    )";

    std::string expected = "12";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}
