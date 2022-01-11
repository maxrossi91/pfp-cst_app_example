/* cst_app - Prefix free parsing compresed suffix tree usage example.
    Copyright (C) 2020 Massimiliano Rossi

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see http://www.gnu.org/licenses/ .
*/
/*!
   \file cst_app.cpp
   \brief cst_app.cpp prefix-free parsing compresed suffix tree example.
   \author Massimiliano Rossi
   \date 20/03/2020
*/

#include <iostream>
#define VERBOSE

#include <pfp_cst.hpp>
#include <malloc_count.h>
#undef max

#include <vector>


using namespace std;
typedef pfp_wt_wm wt_t;
typedef pfp_cst<wt_t>::node_t node;


//get the smallest leaf node position
size_t smallestLeaf(pfp_cst<wt_t> *pf_cst){
    size_t isa = pf_cst->isa(1);
    node sa_test;
    sa_test.l = isa;
    cout<< "sa_test " << pf_cst->locate(sa_test) << endl;
    return 1;
}


int main(int argc, char* const argv[]){
    if (argc < 2){
        std::cout << "Usage: " << argv[0] << "test_file " << endl;
        return 1;
    }
    Args args;
    parseArgs(argc, argv, args);

    // load PFP_CST
    std::cout << "Loading PFP CST"<< std::endl;
    pf_parsing<> pf;
    string filename = args.filename + pf.filesuffix();
    sdsl::load_from_file(pf, filename);
    pfp_cst<> pf_cst(pf);


    size_t n_leaf = pf_cst.size();
    cout << "leaf size: " << n_leaf << endl;
    size_t smallestNode = smallestLeaf(&pf_cst);

    return 1;

}
