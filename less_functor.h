//
// Created by Gannon Faul on 5/4/16.
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

namespace CS2312 {
    template <typename T>
    class less {
    public:
        bool operator() (const T &x, const T &y) {return x < y;}

    };

    template <>
    class less <std::string> {
    public:
        bool operator() (const std::string &str1, const std::string &str2) {return str1 < str2;}
    };


    template <>
    class less <const char *> {
    public:
        bool operator() (const char *str1, const char *str2) {return *str1 < *str2;}
    };

}

#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H
