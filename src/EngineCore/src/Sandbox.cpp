//
// Created by dean on 2/13/20.
//

#include "Sandbox.h"
#include <pybind11/embed.h> // everything needed for embedding

namespace py = pybind11;

Sandbox::Sandbox(){
    py::scoped_interpreter guard{}; // start the interpreter and keep it alive
    auto global = py::dict(py::module::import("__main__").attr("__dict__"));
    auto local = py::dict();
    py::print("Hello, World!"); // use the Python API
    py::print("This is a test!"); // use the Python API
}