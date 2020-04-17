/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/header_format_default.h>
// pydoc.h is automatically generated in the build directory
#include <header_format_default_pydoc.h>

void bind_header_format_default(py::module& m)
{

    using header_format_default    = ::gr::digital::header_format_default;

    py::class_<header_format_default, gr::digital::header_format_base,
        std::shared_ptr<header_format_default>>(m, "header_format_default", D(header_format_default))

        // .def(py::init(&header_format_default::make),
        //    py::arg("access_code"), 
        //    py::arg("threshold"), 
        //    py::arg("bps") = 1 
        // )
        .def_static("make",&header_format_default::make,
           py::arg("access_code"), 
           py::arg("threshold"), 
           py::arg("bps") = 1,
           D(header_format_default,make)
        )
        

        .def("format",&header_format_default::format,
            py::arg("nbytes_in"),
            py::arg("input"),
            py::arg("output"),
            py::arg("info"),
            D(header_format_default,format)
        )
        .def("parse",&header_format_default::parse,
            py::arg("nbits_in"),
            py::arg("input"),
            py::arg("info"),
            py::arg("nbits_processed"),
            D(header_format_default,parse)
        )


        .def("header_nbits",&header_format_default::header_nbits,
            D(header_format_default,header_nbits)
        )


        .def("set_access_code",&header_format_default::set_access_code,
            py::arg("access_code"),
            D(header_format_default,set_access_code)
        )


        .def("access_code",&header_format_default::access_code,
            D(header_format_default,access_code)
        )


        .def("set_threshold",&header_format_default::set_threshold,
            py::arg("thresh") = 0,
            D(header_format_default,set_threshold)
        )


        .def("threshold",&header_format_default::threshold,
            D(header_format_default,threshold)
        )



        ;


} 