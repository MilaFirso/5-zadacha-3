Задача 3. Фигуры. Методы

В этом задании вы добавите в вашу иерархию классов больше функциональности.

Теперь ваши фигуры должны уметь немного больше:

    выводить информацию о себе;
    проверять правильность своих данных.

Ваши фигуры:

    фигура (количество сторон равно 0);
    треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180);
    прямоугольный треугольник (угол C всегда равен 90);
    равнобедренный треугольник (стороны a и c равны, углы A и C равны);
    равносторонний треугольник (все стороны равны, все углы равны 60);
    четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);
    прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
    квадрат (все стороны равны, все углы равны 90);
    параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
    ромб (все стороны равны, углы A,C и B,D попарно равны).

Вы должны иметь возможность попросить фигуру вывести информацию о себе на консоль, а также узнать, является ли фигура правильной, то есть выполняются ли условия, указанные в списке выше.

Информация о фигуре включает в себя:

    название фигуры;
    количество сторон;
    длины её сторон, если есть;
    величины её углов, если есть;
    является ли фигура правильной.

Задача: спроектировать и реализовать классы, описывающие предметную область. Продемонструйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о фигурах.

Реализуйте методы вывода на консоль и проверки правильности фигуры с помощью виртуальных функций и переопределений. Используйте вызов базовой версии метода.

Ваша задача — работать с экземплярами дочерних классов полиморфно, то есть с помощью указателя на базовый класс.
Пример работы программы
Консоль

Фигура:
Правильная
Количество сторон: 0

Треугольник:
Правильная
Количество сторон: 3
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

Прямоугольный треугольник:
Неправильная
Количество сторон: 3
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=90

Прямоугольный треугольник:
Правильная
Количество сторон: 3
Стороны: a=10 b=20 c=30
Углы: A=50 B=40 C=90

Равнобедренный треугольник:
Неправильная
Количество сторон: 3
Стороны: a=10 b=20 c=10
Углы: A=50 B=60 C=50

Равносторонний треугольник:
Правильная
Количество сторон: 3
Стороны: a=30 b=30 c=30
Углы: A=60 B=60 C=60

Четырёхугольник:
Неправильная
Количество сторон: 4
Стороны: a=10 b=20 c=30 d=40
Углы: A=50 B=60 C=70 D=80

Прямоугольник:
Правильная
Количество сторон: 4
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

Квадрат:
Правильная
Количество сторон: 4
Стороны: a=20 b=20 c=20 d=20
Углы: A=90 B=90 C=90 D=90

Параллелограмм:
Неправильная
Количество сторон: 4
Стороны: a=20 b=30 c=20 d=30
Углы: A=30 B=40 C=30 D=40

Ромб:
Неправильная
Количество сторон: 4
Стороны: a=30 b=30 c=30 d=30
Углы: A=30 B=40 C=30 D=40
