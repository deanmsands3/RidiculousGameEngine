//
// Created by dean on 2/13/20.
//

#include "Sandbox.h"
//#include <pybind11/embed.h> // everything needed for embedding

//namespace py = pybind11;

Sandbox::Sandbox():Drawable(){
//    py::scoped_interpreter guard{}; // start the interpreter and keep it alive
//
//    py::print("Hello, World!"); // use the Python API
//    py::print("This is a test!"); // use the Python API
    _star.loadFromFile("star.png");
    star.setTexture(_star);
    star.setOrigin(100,100);
    star.setPosition(100,100);
}

void Sandbox::draw(sf::RenderTarget& target, sf::RenderStates states) const{
    target.draw(star, states);
}

void Sandbox::tick() {
    star.rotate(1.0);
}
