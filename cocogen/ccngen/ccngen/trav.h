#pragma once
#include "ast.h"
node_st *TRAVlifetimes(node_st *node);
node_st *TRAVinodes(node_st *node);
node_st *TRAVdata(node_st *node);
node_st *TRAViactions(node_st *node);
node_st *TRAVipasses(node_st *node);
node_st *TRAVinodesets(node_st *node);
node_st *TRAVreference(node_st *node);
node_st *TRAVtarget(node_st *node);
node_st *TRAVbegin(node_st *node);
node_st *TRAVstable(node_st *node);
node_st *TRAVgate_func(node_st *node);
node_st *TRAVend(node_st *node);
node_st *TRAVunpacked(node_st *node);
node_st *TRAVichildren(node_st *node);
node_st *TRAVVals(node_st *node);
node_st *TRAVnext(node_st *node);
node_st *TRAVname(node_st *node);
node_st *TRAVleft(node_st *node);
node_st *TRAVtype_reference(node_st *node);
node_st *TRAViphases(node_st *node);
node_st *TRAVright(node_st *node);
node_st *TRAViattributes(node_st *node);
node_st *TRAViprefix(node_st *node);
node_st *TRAVexpr(node_st *node);
node_st *TRAVtarget_func(node_st *node);
node_st *TRAVenums(node_st *node);
node_st *TRAVitraversals(node_st *node);
