/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2018  Intel Corporation. All rights reserved.
 *
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 */

struct mesh_prov;
struct l_queue;

void initiator_prov_open(struct mesh_prov *prov);
void initiator_prov_close(struct mesh_prov *prov, uint8_t reason);
void initiator_prov_receive(const void *pkt, uint16_t size,
							struct mesh_prov *prov);
void acceptor_prov_open(struct mesh_prov *prov);
void acceptor_prov_close(struct mesh_prov *prov, uint8_t reason);
void acceptor_prov_receive(const void *pkt, uint16_t size,
							struct mesh_prov *prov);
