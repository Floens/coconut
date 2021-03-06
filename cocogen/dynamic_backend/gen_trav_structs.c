
#include "gen_helpers/out_macros.h"
#include "ccn/dynamic_core.h"
#include "gen_helpers/format.h"
#include "globals.h"

static node_st *ast;

node_st *DGTDSast(node_st *node)
{
    ast = node;
    TRAVchildren(ast);
    return node;
}

node_st *DGTDSitraversal(node_st *node)
{
    int indent = 0;
    FILE *fp = globals.fp;
    if (ITRAVERSAL_DATA(node)) {
        OUT_STRUCT("data_%s", ID_LWR(ITRAVERSAL_IPREFIX(node)));
        TRAVdo(ITRAVERSAL_DATA(node));
        OUT_STRUCT_END();
    }
    TRAVopt(ITRAVERSAL_NEXT(node));
    return node;
}


node_st *DGTDSitravdata(node_st *node)
{
    FILE *fp = globals.fp;
    int indent = 0;
    if (ITRAVDATA_TYPE(node) == AT_link) {
        OUT_FIELD("node_st *%s", ID_ORIG(ITRAVDATA_NAME(node)));
    } else if (ITRAVDATA_TYPE(node) == AT_user) {
        AST_USES_UNSAFE(ast) = true;
        OUT_FIELD("%s %s", ID_ORIG(ITRAVDATA_TYPE_REFERENCE(node)), ID_ORIG(ITRAVDATA_NAME(node)));
    } else {
        OUT_FIELD("%s %s", FMTattributeTypeToString(ITRAVDATA_TYPE(node)), ID_ORIG(ITRAVDATA_NAME(node)));
    }
    TRAVopt(ITRAVDATA_NEXT(node));
    return node;
}

