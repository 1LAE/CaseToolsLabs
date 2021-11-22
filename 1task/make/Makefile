# Makefile:
#
#
# [x] 1 Компиляция
# [x] 2 Тестовый запуск
# [x] 3 Установка проекта (копирование в дирректорию)
# [x] 4 Создание дистрибутива
# [x] 5 Создание документации ('cat file1 file2 >manual', 'latex manual.tex', doxygen, 'javadoc *.java', etc)
# [x] 6 Очистка проета (полная / частичная)
# [x] 7 Справка об использовании файла сборки (отдельная цель и в случае неправильно заданной цели)
# [x] 8 Запуск внешних скриптов и утилит (fex: wc)

CC      = g++
CFALGS  = -g -Wall -O3
#SOURCES = main.cpp lib.cpp
SOURCES = *.cpp
#ARGS = `arg="$(filter-out $@,$(MAKECMDGOALS))" && echo $${arg:-${1}}`

# Пункт 1
all: $(SOURCES)
	@ printf "Компиляция программы..."
	@ $(CC) $(CFLAGS) -o program $(SOURCES) 2>compilation_errors.log
	@ printf "\rКомпиляция программы завершена\n"
	@ cat compilation_errors.log

# Пункт 2
test-run: all
	@ sleep 1
	@ printf "Тестовый запуск...\n\n"
	@ sleep 1
	@ ./program <test-input
	@ sleep 1
	@ printf "Завершено\n"

# Пункт 3
# TODO: Сделать создание дирректории "тихим"
install: all documentation
	@ printf "Установка проекта..."
	@ mkdir -p $(filter-out $@, $(MAKECMDGOALS))
	@ cp program input $(filter-out $@, $(MAKECMDGOALS))
	@ printf "\rУстановка проекта завершена\n"

# Пункт 4
tar:
	@ printf "Cоздание дистрибутива проекта..."
	@ tar -czf caseprogram.tar.gz caseprogram.8 *.log *input *.cpp *.h Makefile
	@ printf "\rCоздание дистрибутива проекта завершено\n"

# Пункт 5
documentation:
	@ printf "Установка документации...\n"
	@ sudo mkdir -p /usr/local/man/man8
	@ sudo install -g 0 -o 0 -m 0644 caseprogram.8 /usr/local/man/man8
	@ sudo gzip -f /usr/local/man/man8/caseprogram.8
	@ printf "\rУстановка документации завершена\n"
	@ man caseprogram


# Пункт 6
clean:
	@ printf "Неполная очистка проекта..."
	@ rm -f program
	@ rm -f *.o *~
	@ printf "\rНеполная очистка проекта завершена\n"

uninstall: clean
	@ printf "Деинсталляция зависимостей...\n"
	@ sudo rm -f /usr/local/man/man8/caseprogram.8.gz
	@ printf "\rДеинсталляция зависимостей завершена\n"

# Пункт 7
.DEFAULT:
	@ printf "Неверно заданная цель.\n"
	@ printf "Список доступных целей:\n"
	@ printf "\t- all\n"
	@ printf "\t- test-run\n"
	@ printf "\t- install\n"
	@ printf "\t- tar\n"
	@ printf "\t- clean\n"
	@ printf "\t- uninstall\n"
	@ printf "\t- documentation\n"
	@ printf "\t- exec\n"

# Пункт 8
exec:
	wc *
