#include <lib/interpreter.h>
#include <gtest/gtest.h>


TEST(TypesTestSuite, IntTest) {
    std::string code = R"(
        x = 1
        y = 2
        z = 3 * x + y
        print(z)
    )";

    std::string expected = "5";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(TypesTestSuite, StringTest) {
    std::string code = R"(
        x = "aboba"
        y = "bobabo"
        z = x + y
        print(z)
    )";

    std::string expected = "abobabobabo";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}


TEST(TypesTestSuite, BoolTest) {
    std::string code = R"(
        x = true
        print(x)
    )";

    std::string expected = "true";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(TypesTestSuite, ListTest) {
    std::string code = R"(
        x = [1, 3, 3, 7]
        print(x)
    )";

    std::string expected = "[1, 3, 3, 7]";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}


TEST(TypesTestSuite, NilTest) {
    std::string code = R"(
        x = nil
        print(x)
    )";

    std::string expected = "nil";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}
