//
//  output.h
//  Iterable
//
//  Created by Adam Lev-Ari on 10/02/2020.
//  Copyright © 2020 Adam Lev-Ari. All rights reserved.
//

#ifndef output_h
#define output_h

#include <utility>
#include <set>
#include <iostream>

template<typename T1, typename T2>
std::ostream& operator<<(std::ostream& out, const std::pair<T1,T2>& pair) {
    out << pair.first << "," << pair.second;
    return out;
}


template<class T>
std::ostream& operator<<(std::ostream& out, const std::set<T>& subset) {
    if (!subset.empty()){
        out << "{";
        bool first=true;
        for (T val: subset) {
           
                if (!first) out << ",";
                first=false;
                out << val;
           
        }
        out << "}\n";
    }
    return out;
}
#endif /* output_h */
