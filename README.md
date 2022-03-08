# Config Reader

This is a simple config reader.

## Create CFG config
```C++
CFG *config = new CFG();
``` 

## Load config file
If config file is not existed, will create one named Config.cfg.
```C++
config->cfgRead();  //use default name "Config.cfg"
config->cfgRead();  //use user-define name
```
## Add Item
Acceptable item value includes integer, double and string.
Nothing return.
```C++
config->add("ItemName", value);
```

## Remove Item
Nothing return.
```C++
config->rm("ItemName");
```

## Modify Item's value
Supported value type is same as "add".
If modifying success, will return true.
```C++
config->modify("ItemName", value_new);
```

## Get value
Before got value, supposed to indicate value type.
And return indicated type.
```C++
int value = config->get<int>("ItemName1");
double value = config->get<double>("ItemName2");
std::string value = config->get<std::string>("ItemName3");
```
