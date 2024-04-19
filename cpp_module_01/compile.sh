#!/bin/bash

c++ -g -std=c++98 main.cpp ASpell.cpp ATarget.cpp Dummy.cpp Fwoosh.cpp Warlock.cpp -I ASpell.hpp -I ATarget.hpp -I Dummy.hpp -I Fwoosh.hpp
