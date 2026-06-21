cmake_minimum_required(VERSION 4.1)
project(C_plus_plus_CodeBeauty_course)

set(CMAKE_CXX_STANDARD 20)

add_executable(C_plus_plus_CodeBeauty_course main.cpp)
add_executable(wordEncryptor wordEncryptorASCII.cpp)
add_executable(if_else_stat if_else_statements/if_else_stat1.cpp
        if_else_statements/if_else_stat2.cpp)
add_executable(Operators Operators/Operators1.cpp
        Operators/swapping2Variables.cpp)
add_executable(BMICalculator Side_Projects/BMICalculator.cpp
        Side_Projects/Calculator.cpp)
add_executable(Guess_game Side_Projects/Guess_game.cpp)
add_executable(Calculator Side_Projects/Calculator.cpp)
add_executable(DaysInMonth Side_Projects/DaysInMonth.cpp)
add_executable(while_loop Side_Projects/showAllNumbersdivby3and5.cpp
        Side_Projects/CountDigitsInNumber.cpp
        Side_Projects/ReverseOrderOfNumber.cpp
        Side_Projects/PinCheckingAttempts.cpp)
add_executable(for_loop Side_Projects/Factorial.cpp
        Side_Projects/CheckAverageGrade.cpp
        Side_Projects/MultiplicationTable.cpp
        Side_Projects/DrawRectangleStars.cpp
        Side_Projects/DrawTriangle.cpp)
add_executable(functions Functions/function1.cpp
        Functions/CheckPrimeNumber.cpp
        Functions/FunctionsOverFlowViaSmmation.cpp
        Functions/GenericFunctionsExampleSwap.cpp
        Functions/RecursionExampleForSum.cpp)
add_executable(ATMapp Side_Projects/ATMapp.cpp)
