#pragma once
#include <iostream>
#include <string.h>
#include <map>
#include <fstream>
#include <sstream>

class CFG
{

private:
    std::map<std::string, std::string> config;
    std::string configFileName;

public:
    CFG(){};
    ~CFG(){};

    void cfgRead(std::string configName = "Config.cfg");
    void cfgCreate(std::string configName = "Config.cfg");

    template<typename T>
    T get(std::string key);

    void add(std::string key, int value);
    void add(std::string key, double value);
    void add(std::string key, std::string value);

    void rm(std::string key);

    bool modify(std::string key, int value);
    bool modify(std::string key, double value);
    bool modify(std::string key, std::string value);

    bool isKeyExists(std::string key);

    bool cfgSave();
};

