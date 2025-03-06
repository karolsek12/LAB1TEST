#include "rome.hpp"
#include <string>
#include <vector>

namespace rome{


    Province create_province(std::string name){
        Province p;
        p.name = name;
        p.cities = std::vector<std::string>();

        return p;
    }

    void add_city(Province* province, std::string city){
        province->cities.push_back(city);

    }

    std::string description(Province* province){
        std::string concat ="";
            concat+= province->name;
            concat+= " ";
        for(int i = 0;i<province->cities.size();i++){
            concat+= province->cities[i];
            concat+= " ";
        }
        return concat;
    }

}