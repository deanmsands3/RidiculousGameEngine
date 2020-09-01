//
// Created by dean on 2/13/20.
//

#include "Sandbox.h"
#include <pybind11/embed.h> // everything needed for embedding
#include <iostream>

namespace py = pybind11;
using namespace py::literals;


Sandbox::Sandbox():Drawable(){
    py::scoped_interpreter guard{}; // start the interpreter and keep it alive
    auto global = py::dict(py::module::import("__main__").attr("__dict__"));
    auto locals = py::dict("name"_a="World", "number"_a=42);
    py::exec(R"(
        local = dict(locals())
        message = f"Hello, {local['name']}! The answer is {local['number']}!"
    )",
    global, //py::globals(),
    locals);

    auto message = locals["message"].cast<std::string>();
    std::cout << message;

    _star_texture.loadFromFile("star.png");
    star_sprite.setTexture(_star_texture);
    star_sprite.setOrigin(100, 100);
    star_sprite.setPosition(100, 100);
}

void Sandbox::draw(sf::RenderTarget& target, sf::RenderStates states) const{
    target.draw(star_sprite, states);
}

void Sandbox::tick() {
    star_sprite.rotate(1.0);
}

Sandbox::~Sandbox() = default;


