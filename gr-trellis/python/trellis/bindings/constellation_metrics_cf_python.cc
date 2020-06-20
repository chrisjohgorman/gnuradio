/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(constellation_metrics_cf.h) */
/* BINDTOOL_HEADER_FILE_HASH(d8c12ea63f1709f9a22696b10e739d94)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/trellis/constellation_metrics_cf.h>
// pydoc.h is automatically generated in the build directory
#include <constellation_metrics_cf_pydoc.h>

void bind_constellation_metrics_cf(py::module& m)
{

    using constellation_metrics_cf = ::gr::trellis::constellation_metrics_cf;


    py::class_<constellation_metrics_cf,
               gr::block,
               gr::basic_block,
               std::shared_ptr<constellation_metrics_cf>>(
        m, "constellation_metrics_cf", D(constellation_metrics_cf))

        .def(py::init(&constellation_metrics_cf::make),
             py::arg("constellation"),
             py::arg("TYPE"),
             D(constellation_metrics_cf, make))


        ;
}