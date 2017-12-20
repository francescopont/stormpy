#include "common.h"

#include "core/core.h"
#include "core/result.h"
#include "core/modelchecking.h"
#include "core/bisimulation.h"
#include "core/input.h"
#include "core/analysis.h"
#include "core/counterexample.h"
#include "core/environment.h"

PYBIND11_MODULE(core, m) {
    m.doc() = "core";

#ifdef STORMPY_DISABLE_SIGNATURE_DOC
    py::options options;
//    options.disable_function_signatures();
#endif

    define_core(m);
    define_property(m);
    define_parse(m);
    define_build(m);
    define_export(m);
    define_result(m);
    define_modelchecking(m);
    define_counterexamples(m);
    define_bisimulation(m);
    define_input(m);
    define_graph_constraints(m);
    define_environment(m);
}
