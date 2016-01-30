//
//  main.cpp
//  Simulazione
//
//  Created by Gabriele on 30/01/16.
//  Copyright © 2016 Gabriele. All rights reserved.
//

#include <iostream>
#include <grid.h>

int main(int argc, const char * argv[])
{
    
    grid l_grid({0,0},{8,8});
    //set points
                     l_grid(1,0) = 1;
                                      l_grid(2,1) = 1;
    l_grid(0,2) = 1; l_grid(1,2) = 1; l_grid(2,2) = 1;
	//state 0
	std::cout << l_grid.to_string();

	l_grid.go_to(17);
	std::cout << l_grid.to_string();
	l_grid.go_to(18);
	std::cout << l_grid.to_string();
	l_grid.go_to(19);
	std::cout << l_grid.to_string();
	l_grid.go_to(20);
	std::cout << l_grid.to_string();

	auto e_h_17 = l_grid.get_history_edges(17);
	auto e_h_18 = l_grid.get_history_edges(18);
	auto e_h_19 = l_grid.get_history_edges(19);
	auto e_h_20 = l_grid.get_history_edges(20);
    
    return 0;
}