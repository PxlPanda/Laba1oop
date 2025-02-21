**laba1oop**

# Первоначально решил разбораться с github CLI, создал репозиторий через консоль. `gh repo create laba1oop --public`

## создал _README.md_ `echo "#laba1oop" > README.md`

## написал основной код, закоммитил, забыл .gitignore для файлов сборки, создал его, закоммитил еще раз.

## Попробовал собрать проект, начал разбираться, что нужно писать в _CMakelists.txt_, попутно разобрался с тем, какой у меня компилятор, поправил синтаксические ошибки, из-за которых проект не собирался. Добавил папку build в gitignore, нашел исполняемый файл, проверил, что вывод есть и верный

### Далее добавил функцию возведения в квадрат в _ветке features_, закоммитил, изменил форматирование вывода результатов в _ветке main_ --> слил две ветки, разрешил конфликт форматирования и количества выводимых результатов.

---

**История коммитов**
>9acbe2c (HEAD -> main, origin/main) Merge branch 'feature-utils'
>0203dd4 fx: Update main output message in main branch
>19ff90f (origin/feature-utils, feature-utils) feat: Add squaring function to>utils
>9ebcfb9 Initial commit: CMake project setup + gitignore
>961da41 Initial commit: CMake project setup