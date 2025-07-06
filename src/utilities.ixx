module;

#include <fmt/format.h>

export module utilities;

export int add_number(int first_parameter, int second_parameter){
    return first_parameter + second_parameter;
}

export void say_hello()
{
    fmt::print("Hello");
    fmt::print("World");

    // int num1 = 5;
    // int num2 = 5;

    int num1{5};
    int num2{6};
    // int result = num1 + num2;
    int result = add_number(num1, num2);

    fmt::println("Result: {}", result);
}

