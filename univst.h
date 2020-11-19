#ifndef univst
#define univst

#include <string>
#include <vector>


struct University
{
private:
    
    std::string m_name;
    std::string m_adress;
    std::vector<struct Dormitory> campus;

public:

    University(const std::string &name, const std::string &adress);
    ~University();
    
    void build(const std::string &name, const int &capacity);
    std::string getAdress();
    int getCapacity();
    std::string getName();
    
    std::string operator&(); 
};

/**************************************/

struct Dormitory
{

private:

    std::string m_name;

//вместимость общаги
    int m_capacity;

public:

    Dormitory(const std::string &name, const int &capacity);
    Dormitory(const Dormitory &other); 
    Dormitory(Dormitory&& dormitory);
    ~Dormitory();
    std::string getName() const;
    int getCapacity() const;

};

/**************************************/


#endif
