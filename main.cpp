#include <iostream>
#include <vector>

#include "univst.h"

/*
 * Забавный баг - когда в вектор campus добавляют вторую и более общагу, создаются и уничтожаются копии предыдущих.
*/
int main()
{
    University MIPT("Phystech", "Dolgoprudniy, Institutskiy per., 9");

    MIPT.build("6ka", 200);
    
    std::cout << "There are " << MIPT.getCapacity() << " students in " << MIPT.getName() << "." << std::endl;
    
    MIPT.build("8ka", 300);
    
    std::cout << "There are " << MIPT.getCapacity() << " students in " << MIPT.getName() << "." << std::endl;

    std::cout << MIPT.getName() << " is in " << &MIPT << "." << std::endl;

    return 0;
}

