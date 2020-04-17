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

#include <gnuradio/blocks/file_source.h>
// pydoc.h is automatically generated in the build directory
#include <file_source_pydoc.h>

void bind_file_source(py::module& m)
{

    using file_source    = ::gr::blocks::file_source;


    py::class_<file_source, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<file_source>>(m, "file_source", D(file_source))

        .def(py::init(&file_source::make),
           py::arg("itemsize"),
           py::arg("filename"),
           py::arg("repeat") = false,
           py::arg("offset") = 0,
           py::arg("len") = 0,
           D(file_source,make)
        )
        




        .def("seek",&file_source::seek,
            py::arg("seek_point"),
            py::arg("whence"),
            D(file_source,seek)
        )


        .def("open",&file_source::open,
            py::arg("filename"),
            py::arg("repeat"),
            py::arg("offset") = 0,
            py::arg("len") = 0,
            D(file_source,open)
        )


        .def("close",&file_source::close,
            D(file_source,close)
        )


        .def("set_begin_tag",&file_source::set_begin_tag,
            py::arg("val"),
            D(file_source,set_begin_tag)
        )

        ;




}






