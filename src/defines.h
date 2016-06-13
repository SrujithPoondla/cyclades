#ifndef _DEFINES_
#define _DEFINES_

#include <gflags/gflags.h>
#include <iostream>
#include "Model/Model.h"
#include "Datapoint/Datapoint.h"
#include "DatasetReader.h"

DEFINE_string(data_file, "blank", "Input data file.");
DEFINE_int32(n_epochs, 100, "Number of passes of data in training.");
DEFINE_int32(n_threads, 2, "Number of threads in parallel during training.");
DEFINE_double(learning_rate, .001, "Learning rate.");
DEFINE_bool(cyclades, true, "Cyclades training if true, Hogwild training if false.");

#endif
