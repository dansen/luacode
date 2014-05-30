//
//  main.cpp
//  Transform
//
//  Created by dansen on 13-3-18.
//
//

#include <iostream>
#include <string>
#include <fstream>

bool needTransform(const std::string & line){
    return (line.find("*((LUA_FUNCTION*)") != -1); ;
}

void transform(std::string & line){
    std::string tmp;
    
    for(int i=0; i<line.size(); ++i){
        if(line[i] == '='){
            tmp += (" = (LUA_FUNCTION)toluafix_ref_function");
            size_t n = line.find("(tolua_S");
            
            for(size_t j=n; j<line.size()-2; ++j){
                tmp += line[j];
            }
            tmp += ";";
            break;
        }else{
            tmp += line[i];
        } 
    }
    
    line = tmp;
}

bool needErase(const std::string & line){
    int n = 0;
    if(line.find("tolua_isvaluenil") != -1){
        ++n;
    }
    if(line.find("!tolua_isusertype") != -1){
        ++n;
    }
    if(line.find("LUA_FUNCTION") != -1){
        ++n;
    }
    return n==3;
}

int main(int argc, const char * argv[])
{
    std::ifstream ifs("BSToLua.cpp");
    std::ofstream ofs("_BSToLua.cpp");
    
    std::string line;
    int lineNo = 0;
    
    while(std::getline(ifs, line)&&++lineNo){
        
        if(needTransform(line)){
            std::cout<<lineNo<<"(transform):"<<line<<std::endl;
            transform(line);
        }
        if(needErase(line)){
            std::cout<<lineNo<<"(erase):"<<line<<std::endl;
        }else{
            ofs << line <<std::endl;
        }
    }
    system("mv _BSToLua.cpp BSToLua.cpp");
    return 0;
}

