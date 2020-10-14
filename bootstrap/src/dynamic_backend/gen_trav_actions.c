#include <stddef.h>
#include <stdio.h>
#include <globals.h>
#include "assert.h"

#include "gen_helpers/out_macros.h"
#include "palm/ctinfo.h"
#include "palm/str.h"
#include "ccn/dynamic_core.h"

void *DGTAallocTravData()
{
    return 0;
}

void DGTAfreeTravData(void *data)
{

}

extern char *current_trav_prefix;
static FILE *fp;
static int indent = 0;
static node_st *ast;

node_st *DGTAast(node_st *node)
{
    fp = globals.fp;
    TRAVchildren(node);
    return node;
}

node_st *DGTAiactions(node_st *node)
{
    return node;
}

node_st *DGTAiphase(node_st *node)
{
    return node;
}

node_st *DGTAitraversal(node_st *node)
{
    return node;
}

node_st *DGTAipass(node_st *node)
{
    TRAVchildren(node);
    return node;
}

node_st *DGTAinode(node_st *node)
{
    fp = globals.fp;
    OUT_FIELD("struct ccn_node *%s%s(struct ccn_node *node)", current_trav_prefix, ID_LWR(INODE_NAME(node)));
    TRAVopt(INODE_NEXT(node));
    return node;
}

node_st *DGTAinodeset(node_st *node)
{
    TRAVchildren(node);
    return node;
}

node_st *DGTAchild(node_st *node)
{
    TRAVchildren(node);
    return node;
}

node_st *DGTAattribute(node_st *node)
{
    TRAVchildren(node);
    return node;
}

node_st *DGTAste(node_st *node)
{

    TRAVchildren(node);
    return node;
}

node_st *DGTAsetoperation(node_st *node)
{

    TRAVchildren(node);
    return node;
}

node_st *DGTAsetliteral(node_st *node)
{

    TRAVchildren(node);
    return node;
}

node_st *DGTAsetreference(node_st *node)
{

    TRAVchildren(node);
    return node;
}

node_st *DGTAienum(node_st *node)
{
    return node;
}

node_st *DGTAid(node_st *node)
{
    return node;
}
