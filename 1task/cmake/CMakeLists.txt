cmake_minimum_required(VERSION 3.1)

# [Х] Компиляция проекта
# [X] Тестовый запуск
# [X] Установка (deploy / install)
# [X] Создание дистрибутива
# [X] Создание документации
# [X] Очистка проекта
# [X] Справка об использовании файла сборки
# [X] Запуск внешних скриптов или утилит

#Project name
project(CaseProgram)

#Installing project
find_library(PTHREAD_LIBRARY pthread)
find_library(PCRE_LIBRARY pcre)

include_directories(include)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(CaseProgram src/main.cpp src/lib.cpp)

target_link_libraries(CaseProgram ${PTHREAD_LIBRARY} ${PCRE_LIBRARY})

#Installing project
install(TARGETS CaseProgram DESTINATION ~/tmp/casetools/)
install(FILES documentation/caseprogram.8 DESTINATION /usr/local/man/man8/)

#Testing project
enable_testing()
include(CTest)
set(TEST_TIMEOUT 2)
add_test(NAME FirstTest COMMAND "./CaseProgram")
add_test(NAME SecondTest COMMAND "./CaseProgram")
set_tests_properties(FirstTest SecondTest
    PROPERTIES
    TIMEOUT ${TEST_TIMEOUT}
)


set(CPACK_PACKAGE_NAME "CaseProgram")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "vermakov@cs.petrsu.ru")
set(CPACK_PACKAGE_DIRECTORY "../packages")
set(CPACK_PACKAGE_DESCRIPTION "The most stupid program ever written")
set(CPACK_GENERATOR "DEB")
include(CPack)
