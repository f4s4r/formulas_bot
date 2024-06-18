
#include <iostream>
#include <string>
#ifndef INCLUDE_GROUP_H_
#define INCLUDE_GROUP_H_

class Group {
    std::string group_name;
    int64_t tg_id;
    int64_t owner_id;
    public:
        Group();

        Group(const Group &other);

        Group(std::string name, int64_t id);

       ~Group();

        void set_group_name(const std::string &name);

        void set_tg_id(int64_t id);

        void set_owner_id(int64_t id);

        std::string get_group_name() const;

        int64_t get_tg_id() const;
        
        int64_t get_owner_id() const;
};

#endif //INCLUDE_GROUP_H_
