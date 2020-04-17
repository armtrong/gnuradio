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

#include <gnuradio/wavelet/squash_ff.h>
// pydoc.h is automatically generated in the build directory
#include <squash_ff_pydoc.h>

void bind_squash_ff(py::module& m)
{

    using squash_ff    = ::gr::wavelet::squash_ff;


    py::class_<squash_ff, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<squash_ff>>(m, "squash_ff", D(squash_ff))

        .def(py::init(&squash_ff::make),
           py::arg("igrid"),
           py::arg("ogrid"),
           D(squash_ff,make)
        )
        



        ;




}






