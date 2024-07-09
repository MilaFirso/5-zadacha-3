#include <iostream> 
#include <string> 

// Класс обычной фигуры 
class Figura
{
protected:
    std::string name = "Фигура";
    int value = 0;
public:
    Figura()
    {
        int value = 0; //количество сторон
        std::string name;
    }

    std::string get_name()
    {
        return name;
    };
    int get_value()
    {
        return value;
    }
    virtual void pravilno()
    {
        if (value == 0)
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Не правильная" << std::endl;
        }

    };
    virtual void print_info()
    {

        std::cout << name << " : " << std::endl;
        pravilno();
        std::cout << "Количество сторон: " << value << std::endl;
        std::cout << '\n';

    };

};

//Класс треугольник 
class Treug :public Figura

{
protected:
    int a = 10;
    int b = 20;
    int c = 30;
    int A = 50;
    int B = 60;
    int C = 70;
    std::string name = "Треугольник";
    int value = 3;

public:
    Treug()
    {
        int value;
        std::string name;
    }
    Treug(int a, int b, int c, int A, int B, int C)
    {
        this->name = "Треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;

    }
    void pravilno() override
    {
        if ((value == 3) && (A + B + C == 180))
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Не правильная" << std::endl;
        }

    };

    void print_info() override
    {
        std::cout << name << " : " << std::endl;
        pravilno();
        std::cout << "Количество сторон: " << value << std::endl;
        std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << std::endl;
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << std::endl;
        std::cout << '\n';
    };

};

//Функция печати 
void print_info(Figura* a)
{
    a->print_info();
};

//Класс прямоугольный треугольник 
class Treug_pryamoyg :public Treug
{
protected:
    std::string name = "Прямоугольный треугольник";
public:
    Treug_pryamoyg()
    {
        std::string name = "Прямоугольный треугольник";
        this->C = 90;
    }

    Treug_pryamoyg(int a, int b, int c, int A, int B, int C)
    {
        this->name = "Прямоугольный треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = 90;

    }
    void pravilno() override
    {
        if (C == 90)
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Не правильная" << std::endl;
        }

    };

    void print_info() override
    {
        std::cout << name << " : " << std::endl;
        pravilno();
        std::cout << "Количество сторон: " << value << std::endl;
        std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << std::endl;
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << std::endl;
        std::cout << '\n';
    };

};

// Класс равнобедренный треугольник 
class Treug_ravnobed :public Treug
{
protected:
    std::string name = "Равнобедренный треугольник";
public:
    Treug_ravnobed()
    {
        std::string name = "Равнобедренный треугольник:";
        this->c = a;
    }

    Treug_ravnobed(int a, int b, int c, int A, int B, int C)
    {
        this->name = "Равнобедренный треугольник:";
        this->a = a;
        this->b = b;
        this->c = a;
        this->A = A;
        this->B = B;
        this->C = C;

    }
    void pravilno() override
    {
        if ((a = c) && (A + C))
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Не правильная" << std::endl;
        }

    };

    void print_info() override
    {
        std::cout << name << " : " << std::endl;
        pravilno();
        std::cout << "Количество сторон: " << value << std::endl;
        std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << std::endl;
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << std::endl;
        std::cout << '\n';
    };

};

//Класс равносторонний треугольник 
class Treug_ravnostor :public Treug
{
protected:
    std::string name = "Равносторонний треугольник";

public:
    Treug_ravnostor()
    {
        std::string name = "Равносторонний треугольник:";
        this->c = a;
        this->b = a;
        this->A = B;
        this->C = B;
    }

    Treug_ravnostor(int a, int b, int c, int A, int B, int C)
    {
        this->name = "Равносторонний треугольник:";
        this->a = a;
        this->B = B;


    }
    void pravilno() override
    {
        if ((a = b = c) && (A = B = C = 60))
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Не правильная" << std::endl;
        }

    };
    void print_info() override
    {
        std::cout << name << " : " << std::endl;
        pravilno();
        std::cout << "Количество сторон: " << value << std::endl;
        std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << std::endl;
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << std::endl;
        std::cout << '\n';
    };

};

//Класс четырехугольник
class Cheterexyg :public Figura
{
protected:
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int A = 150;
    int B = 60;
    int C = 70;
    int D = 80;
    std::string name = "Четырёхугольник:";
    int value = 4;

public:
    Cheterexyg()
    {
        std::string name;
        int value;
    }
    Cheterexyg(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = a;
        this->B = B;
        this->C = C;
        this->D = D;
        this->name = "Четырёхугольник:";
    }

    void pravilno() override
    {
        if ((value == 4) && ((A + B + C + D) == 360))
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Не правильная" << std::endl;
        }

    };
    void print_info() override
    {
        std::cout << name << " : " << std::endl;
        pravilno();
        std::cout << "Количество сторон: " << value << std::endl;
        std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
        std::cout << "Углы: A = " << A << " B = " <<
            B << " C = " << C << " D = " << D << std::endl;
        std::cout << '\n';
    };
};

//Класс прямоугольник 
class Pryamoyg :public Figura
{
protected:
    int a = 10;
    int b = 20;
    int c = 10;
    int d = 20;
    int A = 90;
    int B = 90;
    int C = 90;
    int D = 90;
    std::string name = "Прямоугольник:";
    int value = 4;

public:
    Pryamoyg()
    {
        std::string name;
        int value;
    }
    Pryamoyg(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->name = "Прямоугольник:";
    }
    void pravilno() override
    {
        if ((a = c) && (b = d) && (A = B = C = D = 90))
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Не правильная" << std::endl;
        }

    };
    void print_info() override
    {
        std::cout << name << " : " << std::endl;
        pravilno();
        std::cout << "Количество сторон: " << value << std::endl;
        std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
        std::cout << '\n';
    };
};

//Класс квадрат 
class Kvadrat :public Pryamoyg
{
protected:

    std::string name = "Квадрат:";

public:
    Kvadrat()
    {
        std::string name;
        this->a = b;
        this->c = d;

    }
    Kvadrat(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->b = b;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->name = "Прямоугольник:";
    }

    void pravilno() override
    {
        if ((a = c = b = d) && (A = B = C = D = 90))
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Не правильная" << std::endl;
        }

    };
    void print_info() override
    {
        std::cout << name << " : " << std::endl;
        pravilno();
        std::cout << "Количество сторон: " << value << std::endl;
        std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
        std::cout << '\n';
    };
};

//Класс параллелограмм 
class Parallelog :public Figura
{
protected:
    int a = 20;
    int b = 30;
    int c = 20;
    int d = 30;
    int A = 30;
    int B = 40;
    int C = 30;
    int D = 40;
    std::string name = "Параллелограмм:";
    int value = 4;

public:
    Parallelog()
    {
        std::string name;
        int value;
    }
    Parallelog(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->name = "Параллелограмм:";
    }
    void pravilno() override
    {
        if ((a = c) && (b = d) && (A = C) && (B = D))
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Не правильная" << std::endl;
        }

    };
    void print_info() override
    {
        std::cout << name << " : " << std::endl;
        pravilno();
        std::cout << "Количество сторон: " << value << std::endl;
        std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
        std::cout << '\n';
    };
};

//Класс ромб 
class Romb :public Parallelog
{
protected:

    std::string name = "Ромб:";

public:
    Romb()
    {
        std::string name;
        this->a = b;
        this->c = d;

    }
    Romb(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->b = b;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->name = "Ромб:";
    }

    void pravilno() override
    {
        if ((a = c = b = d) && (A = C) && (B = D))
        {
            std::cout << "Правильная" << std::endl;
        }
        else
        {
            std::cout << "Не правильная" << std::endl;
        }

    };
    void print_info() override
    {
        std::cout << name << " : " << std::endl;
        pravilno();
        std::cout << "Количество сторон: " << value << std::endl;
        std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
        std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
        std::cout << '\n';
    };
};
int main()
{
    setlocale(LC_ALL, "rus");
    system("chcp 1251");

    Figura figura;
    print_info(&figura);

    Treug treug;
    print_info(&treug);

    Treug_pryamoyg treug_pryamoyg;
    print_info(&treug_pryamoyg);

    Treug_ravnobed treug_ravnobed;
    print_info(&treug_ravnobed);

    Treug_ravnostor treug_ravnostor;
    print_info(&treug_ravnostor);

    Cheterexyg сheterexyg;
    print_info(&сheterexyg);

    Pryamoyg pryamoyg;
    print_info(&pryamoyg);

    Kvadrat kvadrat;
    print_info(&kvadrat);

    Parallelog parallelog;
    print_info(&parallelog);

    Romb romb;
    print_info(&romb);

    return 0;

}
