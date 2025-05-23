#include <lib/interpreter.h>
#include <gtest/gtest.h>


TEST(NumArithmeticOpsSuite, NumSum) {
    std::string code = R"(
        print(7 + 2)
    )";

    std::string expected = "9";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumArithmeticOpsSuite, NumMinus) {
    std::string code = R"(
        print(7 - 2)
    )";

    std::string expected = "5";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumArithmeticOpsSuite, NumMultiply) {
    std::string code = R"(
        print(7 * 2)
    )";

    std::string expected = "14";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumArithmeticOpsSuite, NumDivide) {
    std::string code = R"(
        print(9 / 3)
        print(9 / 2)
    )";

    std::string expected = "34.5";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumArithmeticOpsSuite, NumMod) {
    std::string code = R"(
        print(7 % 2)
    )";

    std::string expected = "1";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumArithmeticOpsSuite, NumPower) {
    std::string code = R"(
        print(2 ^ 4)
    )";

    std::string expected = "16";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrArithmethicOpsSuite, StrConcatenation) {
    std::string code = R"(
        print("bao" + "bab")
    )";

    std::string expected = "baobab";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrArithmethicOpsSuite, StrSuffixDecrease) {
    std::string code = R"(
        print("baobab" - "bab")
    )";

    std::string expected = "bao";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrArithmethicOpsSuite, StrRepeat) {
    std::string code = R"(
        print("baobab" * 3)
    )";

    std::string expected = "baobabbaobabbaobab";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(ListArithmethicOpsSuite, ListConcatenation) {
    std::string code = R"(
        print([1, 2, 3] + [4, 5, 6])
    )";

    std::string expected = "[1, 2, 3, 4, 5, 6]";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(ListArithmethicOpsSuite, ListRepeat) {
    std::string code = R"(
        print([1, 2, 3] * 2)
    )";

    std::string expected = "[1, 2, 3, 1, 2, 3]";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumEquationOps, NumGreater) {
    std::string code = R"(
        print(7 > 2)
        print(2 > 7)
    )";

    std::string expected = "truefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumEquationOps, NumLess) {
    std::string code = R"(
        print(2 < 7)
        print(2 < 1)
    )";

    std::string expected = "truefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumEquationOps, NumGreaterOrEqual) {
    std::string code = R"(
        print(7 >= 7)
        print(7 >= 2)
        print(2 >= 7)
    )";

    std::string expected = "truetruefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumEquationOps, NumLessOrEqual) {
    std::string code = R"(
        print(7 <= 7)
        print(2 <= 7)
        print(2 <= 1)
    )";

    std::string expected = "truetruefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumEquationOps, NumEqual) {
    std::string code = R"(
        print(7 == 7)
        print(7 == 2)
    )";

    std::string expected = "truefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumEquationOps, NumNotEqual) {
    std::string code = R"(
        print(7 != 2)
        print(7 != 7)
    )";

    std::string expected = "truefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrEquationOps, StrGreater) {
    std::string code = R"(
        print("def" > "abc")
        print("abc" > "def")
    )";

    std::string expected = "truefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrEquationOps, StrLess) {
    std::string code = R"(
        print("abc" < "def")
        print("def" < "abc")
    )";

    std::string expected = "truefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrEquationOps, StrGreaterOrEqual) {
    std::string code = R"(
        print("def" >= "def")
        print("def" >= "abc")
        print("abc" >= "def")
    )";

    std::string expected = "truetruefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrEquationOps, StrLessOrEqual) {
    std::string code = R"(
        print("def" <= "def")
        print("abc" <= "def")
        print("abc" <= "a")
    )";

    std::string expected = "truetruefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrEquationOps, StrEqual) {
    std::string code = R"(
        print("abc" == "abc")
        print("abc" == "def")
    )";

    std::string expected = "truefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrEquationOps, StrNotEqual) {
    std::string code = R"(
        print("abc" != "def")
        print("abc" != "abc")
    )";

    std::string expected = "truefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(ListEquationOpsSuite, ListEqual) {
    std::string code = R"(
        print([1, 2, 3] == [1, 2, 3])
        print([1, 2, 3] == [4, 5, 6])
    )";

    std::string expected = "truefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(ListEquationOpsSuite, ListNotEqual) {
    std::string code = R"(
        print([1, 2, 3] != [1, 2, 3])
        print([1, 2, 3] != [4, 5, 6])
    )";

    std::string expected = "falsetrue";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(BoolLogicOpsSuite, BoolAnd) {
    std::string code = R"(
        print(true and true)
        print(false and false)
        print(true and false)
    )";

    std::string expected = "truefalsefalse";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(BoolLogicOpsSuite, BoolOr) {
    std::string code = R"(
        print(true or true)
        print(false or false)
        print(true or false)
    )";

    std::string expected = "truefalsetrue";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(BoolLogicOpsSuite, BoolNot) {
    std::string code = R"(
        print(not true)
        print(not false)
    )";

    std::string expected = "falsetrue";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumAssignmentSuite, NumAssign) {
    std::string code = R"(
        x = 2
        print(x)
    )";

    std::string expected = "2";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumAssignmentSuite, NumPlusAssign) {
    std::string code = R"(
        x = 2
        x += 2
        print(x)
    )";

    std::string expected = "4";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumAssignmentSuite, NumMinusAssign) {
    std::string code = R"(
        x = 2
        x -= 2
        print(x)
    )";

    std::string expected = "0";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumAssignmentSuite, NumMultiplyAssign) {
    std::string code = R"(
        x = 2
        x *= 3
        print(x)
    )";

    std::string expected = "6";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumAssignmentSuite, NumDivideAssign) {
    std::string code = R"(
        x = 2
        x /= 2
        print(x)
    )";

    std::string expected = "1";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumAssignmentSuite, NumModAssign) {
    std::string code = R"(
        x = 2
        x %= 2
        print(x)
    )";

    std::string expected = "0";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(NumAssignmentSuite, NumPowerAssign) {
    std::string code = R"(
        x = 2
        x ^= 3
        print(x)
    )";

    std::string expected = "8";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrAndListIndexing, StrIndexing) {
    std::string code = R"(
        y = "123"
        print(y[0])
    )";

    std::string expected = "1";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrAndListIndexing, ListIndexing) {
    std::string code = R"(
        y = [1, 2, 3]
        print(y[0])
    )";

    std::string expected = "1";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrAndListIndexing, ListSlicingWithoutStart) {
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

TEST(StrAndListIndexing, ListSlicingWithoutEnd) {
    std::string code = R"(
        x = [1, 2, 3]
        print(x[1:])
    )";

    std::string expected = "[2, 3]";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrAndListIndexing, ListSlicing) {
    std::string code = R"(
        x = [1, 2, 3]
        print(x[1:2])
    )";

    std::string expected = "[2]";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrAndListIndexing, ListSlicingCopy) {
    std::string code = R"(
        x = [1, 2, 3]
        print(x[:])
    )";

    std::string expected = "[1, 2, 3]";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrAndListIndexing, StrSlicingWithoutStart) {
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

TEST(StrAndListIndexing, StrSlicingWithoutEnd) {
    std::string code = R"(
        x = "123"
        print(x[1:])
    )";

    std::string expected = "23";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrAndListIndexing, StrSlicing) {
    std::string code = R"(
        x = "123"
        print(x[1:2])
    )";

    std::string expected = "2";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}

TEST(StrAndListIndexing, StrSlicingCopy) {
    std::string code = R"(
        x = "123"
        print(x[:])
    )";

    std::string expected = "123";

    std::istringstream input(code);
    std::ostringstream output;

    ASSERT_TRUE(interpret(input, output));
    ASSERT_EQ(output.str(), expected);
}
