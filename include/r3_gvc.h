/*
 * r3_gvc.h
 * Copyright (C) 2014 c9s <c9s@c9smba.local>
 *
 * Distributed under terms of the MIT license.
 */
#ifndef R3_GVC_H
#define R3_GVC_H

#include <gvc.h>

void r3_tree_build_ag_nodes(Agraph_t * g, Agnode_t * ag_parent_node, const node * n, int node_cnt);

int r3_tree_render_dot(const node * tree);

int r3_tree_render_file(const node * tree, const char * format, const char * filename);

#endif /* !R3_GVC_H */
