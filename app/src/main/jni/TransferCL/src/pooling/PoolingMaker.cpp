// Copyright Olivier Valery 2017 olivier.valery92 at gmail.com 
// this work is based on DeepCL: a project of Hugh Perkins hughperkins at gmail
//
// This Source Code Form is subject to the terms of the Mozilla Public License, 
// v. 2.0. If a copy of the MPL was not distributed with this file, You can 
// obtain one at http://mozilla.org/MPL/2.0/.


#include "PoolingLayer.h"
#include "PoolingMaker.h"

using namespace std;

Layer *PoolingMaker::createLayer(Layer *previousLayer) {
#if TRANSFERCL_VERBOSE == 1
LOGI( "DeepCL/src/pooling/PoolingMaker.cpp: createLayer");
#endif


    return new PoolingLayer(cl, previousLayer, this);
}

