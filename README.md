# Алгоритмы и Структуры Данных (группа 9384)

## Таблица текущего состояния сдачи работ

| ##  | Фамилия Имя              | Github               | lab1 | lab2 | lab3 | lab4 | lab5 | CW  | Итог |
| --- | ------------------------ | -------------------- | ---- | ---- | ---- | ---- | ---- | --- | ---- |
| 1   | ~~Анкудинов Константин~~ |                      |      |      |      |      |      |     |      |
| 2   | ~~Головатюк Кирилл~~     |                      |      |      |      |      |      |     |      |
| 3   | Гурин Семён              | SimonGyrin           |  1   |      |      |      |      |     |      |
| 4   | Давыдов Дмитрий          | Dmitrydavka          |  3   |   3  |      |      |      |     |      |
| 5   | ~~Доля Вячеслав~~        |                      |      |      |      |      |      |     |      |
| 6   | Звега Александр          | zipzap666            |  3   |   5  |      |      |      |     |      |
| 7   | ~~Ильич Богдан~~         |                      |      |      |      |      |      |     |      |
| 8   | ~~Конев Вадим~~          |                      |      |      |      |      |      |     |      |
| 9   | ~~Курилюк Кирилл~~       |                      |      |      |      |      |      |     |      |
| 10  | ~~Мазин Сергей~~         |                      |      |      |      |      |      |     |      |
| 11  | Мосин Константин         | KonstantM            |  5   |  5   |  5   |  5   |      |     |      |
| 12  | Николаев Александр       | EFFECT322            |  1   |      |      |      |      |     |      |
| 13  | Нистратов Дмитрий        | dmnistratov          |  5   |  4   |  3   |      |      |     |      |
| 14  | Прашутинский Кирилл      | kirja1980            |  2   |      |      |      |      |     |      |
| 15  | ~~Руденко Семён~~        |                      |      |      |      |      |      |     |      |
| 16  | Сос**е**дков Кирилл      | sosedkov-kirill      |  5   |  5   |  5   |  5   |      |  +2 |      |

## Правила работы с репозиторием (прочитайте внимательно!)

 - Для начала работы каждый студент делает форк (fork) репозитория на свой GitHub аккаунт.
Каждый студент работает строго в своей директории firstname/ , где firstname - название директории в соотвтествии с вашей фамилией в таблицей, начинающаяся со строчой буквы. Работа в чужих директориях строго-настрого запрещается.

> Как сделать так, чтобы этого не произошло? Не надо синхронизировать свой репозиторий с master-веткой origin-репозитория. Не надо делать fetch-и с origin-репозитория или тем более fork-ов ваших коллег. Сделали один раз fork -- с ним и работаете, в своей директории. На надо удалять никаких файлов: ни чужих, ни своих с других веток, например. Не надо выполнять merge своих веток лишний раз, ибо это просто излишне. Работаете вы в отдельных ветках для каждой из лабораторных. Все это -- настоятельные советы, которые должны нивелировать возможность конфликтов при работе. Большая просьба их соблюдать, уважая время и труд ваших коллег.

- Для каждой лабораторной требуется создавать отдельную директорию lab#, где # - номер - лабораторной от 1 до 5.  Для курсовой создается директория cw. Пример устройства корневой директории курса:

```
.
├── efremov
│   ├── lab1
│   │   ├── report.pdf
│   │   ├── report.odt
│   │   ├── main.c
│   │   └── makefile
│   └── lab2
│   │   ├── report.pdf
│   │   ├── report.odt
│   │   ├── main.c
│   │   └── makefile
├── ivanova
│   ├── lab1
│   │   ├── report.pdf
│   │   ├── report.odt
│   │   ├── data_structures.h
│   │   ├── main.cpp
│   │   └── makefile
│   └── lab2
│   │   ├── report.pdf
│   │   ├── report.odt
│   │   ├── data_structures.h
│   │   ├── main.cpp
│   │   └── makefile
└── README.md
```

- Внутри должны находиться:
    - Исходный код лабораторных программ;
    - makefile для создания исполняемого модуля;
    - Отчет в формате pdf по шаблону с [сайта университета](https://etu.ru/ru/studentam/dokumenty-dlya-ucheby/). Отчеты, оформленные иначе приниматься не будут. Не тратьте наше общее время.

> На всякий случай, каковы требования к оформлению: 14й шрифт Times New Roman (или похожий, например, свободный шрифты Linux Libertine или Liberation Serif), 1.5 строки интервал, красная строка; заголовки должны иметься для каждого из разделов докумета, имеют такой же 14pt шрифт, выделяются жирным; обязательные разделы: цель работы, ход выполнения, ответы на вопросы (пожалуйста, пишите сами формулировки вопросов перед ответами!), выводы; копирование текста методички в отчет вовсе не требуется; все изображения и листинги должны быть информативные (пример неинформативного скриншота: скриншот всего рабочего стола с открытым FAR-ом посреди какого-то представления исполняемого модуля. Как сделать информативнее: уменьшить размер изображения до тех размеров, в которые помещается ровно тот участок представления, который что-то отображает (например, границу PSP), подчеркнуть, выделить требуемый участок изображения) пронумерованы и подписаны тем же 14pt обычным шрифтом, выровненным по центру (Пример: Рисунок 2 -- Представление сегмента стека в памяти.), на рисунок, раз уж вы его представили, вы где-то должны ссылаться (иначе зачем он нужен вообще?). Страницы нумеруются в нижней части документа, по центру (если используете шаблон с сайта вуза, все уже сделано за вас). Пожалуйста, соблюдайте эти не сложные требования к оформлению: их так гораздо проще как писать (имеется четкая структура, все эти требования по-умолчанию уже есть в вузовском шаблоне), так и проверять.

- Для каждой лабораторной создается отдельная новая ветка (branch) из master-ветви с названием вида < firstname_lab# >, где firstname - фамилия (аналогично названию вашей личной директории), а # - номер работы, тоже со строчной буквы). Пример создания ветви и перехода на нее:
```
git checkout master
git checkout -b efremov_lab1
```

- Для сдачи лабораторной работы создается пул-реквест (pull-request) из вашей ветки с лабораторной работой в master-ветку общего репозитория курса. В начале заголовка пул-реквеста пишется "[READY] ", после - Фамилия латиницей, после - lab#. (Пример: [READY] Efremov lab1). Формат важен, так как для разбора ваших pull request используется поиск по ключевым словам.

- Для сдачи работы требуется закрытый pull request со слиянием (merge) вашей ветки в общий репозиторий. В таком случае работа считается проверенной.
- Если имеются какие-либо нарекания к предложенным студентом файлам, то все замечания пишутся проверяющим в комментарии пул-реквеста, а так же изменяется префикс заголовка на [WIP].
- Напоминание: коммиты в ветку, которую студент отправляет на пул-реквест отображаются в самом пул-реквесте. Делать новый пул-реквест не надо.
- Закончив исправления, студент пишет об этом отдельным комментарием, указывая, возможно, пояснения к исправлениям, а так же меняет префикс заголовка пул-реквеста снова на [READY], тем самым показывая, что его работа готова к повторному просмотру.
- Курс лабораторных считается завершенным полностью, если в основном репозитории находятся директории всех 5 лабораторных работ студента, а так же курсовой.

## Балло-рейтинговая система

Все работы в практическом курсе считаются из 5 баллов, включая курсовой проект. Суммарно можно набрать, соответственно, 30 баллов. Оценка за лабораторную ставится исходя от даты сдачи: за каждую следующую неделю после срока снимается один балл. Таким образом рекомендуется сдавать в срок, заранее и делать сразу хорошо. На одну лабораторную отводится 2 недели, следовательно, по датам, можно получить следующую таблицу оценки работ:

| Даты  | lab1  | lab2  | lab3  | lab4  | lab5  |
| ----- | ----- | ----- | ----- | ----- | ----- |
| 17.09 |   5   |   5   |   5   |   5   |   5   |
| 24.09 |   5   |   5   |   5   |   5   |   5   |
| 01.10 |   5   |   5   |   5   |   5   |   5   |
| 08.10 |   3   |   5   |   5   |   5   |   5   |
| 15.10 |   2   |   4   |   5   |   5   |   5   |
| 22.10 |   1   |   3   |   5   |   5   |   5   |
| 29.10 |   0   |   2   |   4   |   5   |   5   |
| 05.11 |  -1   |   1   |   3   |   5   |   5   |
| 12.11 |  -2   |   0   |   2   |   4   |   5   |
| 19.11 |  -3   |  -1   |   1   |   3   |   5   |
| 26.11 |  -4   |  -2   |   0   |   2   |   4   |
| 03.12 |  -5   |  -3   |  -1   |   1   |   3   |
| 10.12 |  -6   |  -4   |  -2   |   0   |   2   |
| 17.12 |  -7   |  -5   |  -3   |  -1   |   1   |
| 24.12 |  -8   |  -6   |  -4   |  -2   |   0   |
| 31.12 |  -9   |  -7   |  -5   |  -3   |  -1   |

## Требования к лабораторным работам

В целом, все инструкции приведены в файле [lab_requirements.pdf](_docs/lab_requirements.pdf). Резюмируя:

- Отчет должен быть оформлен на основании шаблона университета (см. выше). Опционально среди моих репозиториев есть шаблон LaTeX, если кому-то надо.
- Должен содержать в себе раздел "Цель работы", в котором приводится досимвольно описание задания для вашего варианта. Номер варианта указывается в начале раздела.
- Должен быть раздел "Анализ задачи", в котором рассматривается поставленная задача, описывается логика построения алгоритма решения, приветствуется псевдокод. Формируются описания структур данных и сигнатуры функций.
- Должен быть раздел "Реализация", в котором приводится с пояснениями реализация наиболее важных функций в спроектированым вами решении. Для примера, код для обмена двух чисел -- не интересная реализация, а функция добавления элемента в бинарное дерево поиска -- интересная. Те, функции, которые работают со структурой данных или реализуют непосредственно алгоритм (рекурсии, сортировки) -- интересные. Тривиальные функции инициализации, ввода-вывода, перевода данных между форматами -- не интересные. Если чего-то в отчете не будет из интересного -- я об этом сообщу лично.
- Программа должна корректно работать. В качестве проверки обязателен раздел "Тестирование", в котором проверяются общие и граничные случаи входных данных. Для этого перед группой тестов, рассматривающих какой-то общий набор тестов (например, как сортировка справляется с разным количеством элементов: -1, 0, 1, N, N/2, N+1) требуется написать **что** вы тестируете, а потом привести пример запуска ваших программ на иллюстрирующих описанные тестовые случаи в виде таблички. Пример (\n тут потому что маркдаун):

| # теста | input.txt                | output.txt                                |
| ------- | ------------------------ | ----------------------------------------- |
| 1       | -1\n 1 2 3               | Ошибка: некорректное количество элементов |
| 2       | 1\n 2                    | 2                                         |
| 3       | 0\n                      |                                           |
| 4       | 5\n 5 4 3 2 1            | 1 2 3 4 5                                 |
| 5       | 10\n 9 8 7 6 5 4 3 2 1 0 | 0 1 2 3 4 5 6 7 8 9                       |
| 6       | 11\n 1 1 1 1 1 1 1 1 1 1 | Ошибка: некорректное количество элементов |
- Отчет завершается выводом о проделанной работе (что реализовали, какие результаты показал алгоритм/структура данных) и приложение с кодом.

### Уточнения по 3й работе (деревья!)

Обратите внимание, что варианты выбирать надо из файла [doc_lab3.pdf](_docs/doc_lab3.pdf)! Каждую лабораторную можно выполнить в двух вариантах:
- дерево на основе массива;
- дерево на основе связанного списка.

Важно указать в варианте какую структуру данных вы реализуете. Сами же структуры данных обязательно реализовывать в виде нормального шаблонного класса C++ без лапши на Си, без char-ов внутри вместо шаблонов. Строго

```
template <class T>
class Tree {
public:
    Tree();
    ...
    ~Tree()
}
```
Вывод представления (изображения) дерева можно делать в консоли. Учтите, что в курсовой потребуется GUI на Qt, так что, возможно, сейчас - самое лучшее время начать пробовать рисовать деревья на QGraphicsScene в QGraphicsView.

### Уточнения по 4й работе (сортировки!)

Обратите внимание, что варианты выбирать надо из файла [doc_lab4.pdf](_docs/doc_lab4.pdf)!

- **Важно!** В процессе сортировки обязательно на каждом шаге выводить что на что меняется и **почему** в процессе выполнения. Просто вывести отсортированный массив не засчитывается!
- В анализе задачи нужно указать достоинства и недостатки алгоритма, сравнить с 2-3 другими алгоритмами.
- Функции сортировки должны быть шаблонными по типу сортируемых элементов, компаратором может быть указатель на функцию (так себе) или std::function.

## Курсовой проект

### Общие сведения

Курсовой проект выдается 12-19 ноября, когда по графику сдается 5я лабораторная работа. Оценивается так же из 5 баллов по объему и качеству проделанной работы. Оценивается с 0 до 5, где 0 -- не показанный курсовой проект, 2 -- незачтенный, а все что больше -- итоговая оценка, которая после выставляется отдельно в ведомость.

### Требования к курсовому проекту

(ToDo: ближе к ноябрю, когда будут уточнены темы и требования)

## Посещение
| ##  | Фамилия Имя          | 24.09 | 01.10 |
| --- | -------------------- | ----- | ----- |
| 1   | Анкудинов Константин |   +   |   +   |
| 2   | Головатюк Кирилл     |       |       |
| 3   | Гурин Семён          |   +   |   +   |
| 4   | Давыдов Дмитрий      |   +   |   +   |
| 5   | Доля Вячеслав        |   +   |   +   |
| 6   | Звега Александр      |   +   |   +   |
| 7   | -Ильич Богдан-       |       |       |
| 8   | Конев Вадим          |       |       |
| 9   | Курилюк Кирилл       |       |   +   |
| 10  | Мазин Сергей         |   +   |       |
| 11  | Мосин Константин     |   +   |   +   |
| 12  | Николаев Александр   |   +   |   +   |
| 13  | Нистратов Дмитрий    |   +   |   +   |
| 14  | Пращутинский Кирилл  |   +   |   +   |
| 15  | Руденко Семён        |       |       |
| 16  | Соседков Кирилл      |   +   |   +   |
