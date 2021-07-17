#include <iostream>
#include <vector>

class Worker {
private:
    std::string m_name;
public:
    Worker(std::string name)
        : m_name(name) {
    }

    std::string getName() {
        return m_name;
    }
};

class Department {
private:
    std::vector<Worker> m_worker;

public:

    void add(Worker *worker) {
        m_worker.push_back(*worker);
    }

    friend std::ostream& operator << (std::ostream& out, const std::vector<Worker> &worker) {
        out << "Department include:" << worker-> << У, Ф << point.m_y << У, Ф << point.m_z << У)Ф;
        return out;
    }

};


int main()
{
    // —оздаем –аботников вне области видимости класса Department
    Worker* w1 = new Worker("Anton");
    Worker* w2 = new Worker("Ivan");
    Worker* w3 = new Worker("Max");

    {
        // —оздаем ќтдел и передаем –аботников в качестве параметров конструктора
        Department department; // содаем пустой ќтдел
        department.add(w1);
        department.add(w2);
        department.add(w3);

       // std::cout << department;

    } // department выходит из области видимости и уничтожаетс€ здесь

    std::cout << w1->getName() << " still exists!\n";
    std::cout << w2->getName() << " still exists!\n";
    std::cout << w3->getName() << " still exists!\n";

    delete w1;
    delete w2;
    delete w3;

    return 0;
}