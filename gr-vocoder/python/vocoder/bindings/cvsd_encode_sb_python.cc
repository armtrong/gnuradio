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

#include <gnuradio/vocoder/cvsd_encode_sb.h>
// pydoc.h is automatically generated in the build directory
#include <cvsd_encode_sb_pydoc.h>

void bind_cvsd_encode_sb(py::module& m)
{

    using cvsd_encode_sb    = ::gr::vocoder::cvsd_encode_sb;


    py::class_<cvsd_encode_sb, gr::sync_decimator, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<cvsd_encode_sb>>(m, "cvsd_encode_sb", D(cvsd_encode_sb))

        .def(py::init(&cvsd_encode_sb::make),
           py::arg("min_step") = 10,
           py::arg("max_step") = 1280,
           py::arg("step_decay") = 0.9990234375,
           py::arg("accum_decay") = 0.96875,
           py::arg("K") = 32,
           py::arg("J") = 4,
           py::arg("pos_accum_max") = 32767,
           py::arg("neg_accum_max") = -32767,
           D(cvsd_encode_sb,make)
        )
        




        .def("min_step",&cvsd_encode_sb::min_step,
            D(cvsd_encode_sb,min_step)
        )


        .def("max_step",&cvsd_encode_sb::max_step,
            D(cvsd_encode_sb,max_step)
        )


        .def("step_decay",&cvsd_encode_sb::step_decay,
            D(cvsd_encode_sb,step_decay)
        )


        .def("accum_decay",&cvsd_encode_sb::accum_decay,
            D(cvsd_encode_sb,accum_decay)
        )


        .def("K",&cvsd_encode_sb::K,
            D(cvsd_encode_sb,K)
        )


        .def("J",&cvsd_encode_sb::J,
            D(cvsd_encode_sb,J)
        )


        .def("pos_accum_max",&cvsd_encode_sb::pos_accum_max,
            D(cvsd_encode_sb,pos_accum_max)
        )


        .def("neg_accum_max",&cvsd_encode_sb::neg_accum_max,
            D(cvsd_encode_sb,neg_accum_max)
        )

        ;




}






