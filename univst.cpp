#include <iostream>
#include <string>
#include <vector>

#include "univst.h"


University::University(const std::string &name, const std::string &adress)
{
    m_name = name;
    m_adress = adress;
    //campus.resize(10);
    std::cout << "You have founded " << m_name << "." << std::endl;
}


University::~University()
{
    std::cout << m_name << " was destructed." << std::endl;
}


void University::build(const std::string &n, const int &c)
{
    campus.emplace_back(n, c);
 
}


std::string University::getAdress()
{
    return m_adress;
}

int University::getCapacity() 
{
    int com_capacity = 0;
    for (auto& d: campus)
        com_capacity += d.getCapacity();

    return com_capacity;
}

std::string University::getName() 
{
    return m_name;
}

std::string University::operator&()
{
    return m_adress;
}

/**********************************************/

Dormitory::Dormitory(const std::string &name, const int &capacity): 
    m_name(name), m_capacity(capacity) 
{
    std::cout << "You have built " << m_name << std::endl; 
}

Dormitory::Dormitory(const Dormitory &other):
    m_name(other.getName()), m_capacity(other.getCapacity())
{
    std::cout << "You have copied " << m_name << std::endl;
}

Dormitory::Dormitory(Dormitory&& dormitory):
    m_name(dormitory.getName()), m_capacity(dormitory.getCapacity())
{
    std::cout << "You have moved " << m_name << std::endl;
}

Dormitory::~Dormitory()
{
    std::cout << m_name << " was destructed." << std::endl;
}
    
std::string Dormitory::getName()    const
{
    return m_name;
}

int Dormitory::getCapacity()    const
{
    return m_capacity;
}    

