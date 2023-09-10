#include <iostream>

#include "Movies.h"


 /*************************************************************************

    Movies no-args constructor

**************************************************************************/

Movies::Movies() {

}

/*************************************************************************

    Movies destructor

**************************************************************************/

Movies::~Movies() {

}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
	 //const because we dont want to alter anything, ref for efficiency
	for (const Movie &movie: movies) {
		if (movie.get_name() == name)
			return false;
	}
	Movie temp{name, rating, watched};
	movies.push_back(temp);

    return true;
}


bool Movies::increment_watched(std::string name) {
	// ref so we can change it
	for (Movie &movie: movies) {
		if (movie.get_name() == name) {
			movie.increment_watched();
			return true;
		}
	}
	return false;

}

void Movies::display() const { // no modification
	if (movies.size() == 0) {
		std::cout << "Sorry, no movies to display\n" << std::endl;
	} else {
		std::cout << "\n===================================" << std::endl;
		for (const auto &movie: movies)
			movie.display();
		std::cout << "\n===================================" << std::endl;
	}
}