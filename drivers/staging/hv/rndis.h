/*
 *
 * Copyright (c) 2009, Microsoft Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place - Suite 330, Boston, MA 02111-1307 USA.
 *
 * Authors:
 *   Haiyang Zhang <haiyangz@microsoft.com>
 *   Hank Janssen  <hjanssen@microsoft.com>
 *
 */

#ifndef _RNDIS_H_
#define _RNDIS_H_

/*  Status codes */


#ifndef STATUS_SUCCESS
#define STATUS_SUCCESS				(0x00000000L)
#endif

#ifndef STATUS_UNSUCCESSFUL
#define STATUS_UNSUCCESSFUL			(0xC0000001L)
#endif

#ifndef STATUS_PENDING
#define STATUS_PENDING				(0x00000103L)
#endif

#ifndef STATUS_INSUFFICIENT_RESOURCES
#define STATUS_INSUFFICIENT_RESOURCES		(0xC000009AL)
#endif

#ifndef STATUS_BUFFER_OVERFLOW
#define STATUS_BUFFER_OVERFLOW			(0x80000005L)
#endif

#ifndef STATUS_NOT_SUPPORTED
#define STATUS_NOT_SUPPORTED			(0xC00000BBL)
#endif

#define RNDIS_STATUS_SUCCESS			(STATUS_SUCCESS)
#define RNDIS_STATUS_PENDING			(STATUS_PENDING)
#define RNDIS_STATUS_NOT_RECOGNIZED		(0x00010001L)
#define RNDIS_STATUS_NOT_COPIED			(0x00010002L)
#define RNDIS_STATUS_NOT_ACCEPTED		(0x00010003L)
#define RNDIS_STATUS_CALL_ACTIVE		(0x00010007L)

#define RNDIS_STATUS_ONLINE			(0x40010003L)
#define RNDIS_STATUS_RESET_START		(0x40010004L)
#define RNDIS_STATUS_RESET_END			(0x40010005L)
#define RNDIS_STATUS_RING_STATUS		(0x40010006L)
#define RNDIS_STATUS_CLOSED			(0x40010007L)
#define RNDIS_STATUS_WAN_LINE_UP		(0x40010008L)
#define RNDIS_STATUS_WAN_LINE_DOWN		(0x40010009L)
#define RNDIS_STATUS_WAN_FRAGMENT		(0x4001000AL)
#define RNDIS_STATUS_MEDIA_CONNECT		(0x4001000BL)
#define RNDIS_STATUS_MEDIA_DISCONNECT		(0x4001000CL)
#define RNDIS_STATUS_HARDWARE_LINE_UP		(0x4001000DL)
#define RNDIS_STATUS_HARDWARE_LINE_DOWN		(0x4001000EL)
#define RNDIS_STATUS_INTERFACE_UP		(0x4001000FL)
#define RNDIS_STATUS_INTERFACE_DOWN		(0x40010010L)
#define RNDIS_STATUS_MEDIA_BUSY			(0x40010011L)
#define RNDIS_STATUS_MEDIA_SPECIFIC_INDICATION	(0x40010012L)
#define RNDIS_STATUS_WW_INDICATION		RDIA_SPECIFIC_INDICATION
#define RNDIS_STATUS_LINK_SPEED_CHANGE		(0x40010013L)

#define RNDIS_STATUS_NOT_RESETTABLE		(0x80010001L)
#define RNDIS_STATUS_SOFT_ERRORS		(0x80010003L)
#define RNDIS_STATUS_HARD_ERRORS		(0x80010004L)
#define RNDIS_STATUS_BUFFER_OVERFLOW		(STATUS_BUFFER_OVERFLOW)

#define RNDIS_STATUS_FAILURE			(STATUS_UNSUCCESSFUL)
#define RNDIS_STATUS_RESOURCES			(STATUS_INSUFFICIENT_RESOURCES)
#define RNDIS_STATUS_CLOSING			(0xC0010002L)
#define RNDIS_STATUS_BAD_VERSION		(0xC0010004L)
#define RNDIS_STATUS_BAD_CHARACTERISTICS	(0xC0010005L)
#define RNDIS_STATUS_ADAPTER_NOT_FOUND		(0xC0010006L)
#define RNDIS_STATUS_OPEN_FAILED		(0xC0010007L)
#define RNDIS_STATUS_DEVICE_FAILED		(0xC0010008L)
#define RNDIS_STATUS_MULTICAST_FULL		(0xC0010009L)
#define RNDIS_STATUS_MULTICAST_EXISTS		(0xC001000AL)
#define RNDIS_STATUS_MULTICAST_NOT_FOUND	(0xC001000BL)
#define RNDIS_STATUS_REQUEST_ABORTED		(0xC001000CL)
#define RNDIS_STATUS_RESET_IN_PROGRESS		(0xC001000DL)
#define RNDIS_STATUS_CLOSING_INDICATING		(0xC001000EL)
#define RNDIS_STATUS_NOT_SUPPORTED		(STATUS_NOT_SUPPORTED)
#define RNDIS_STATUS_INVALID_PACKET		(0xC001000FL)
#define RNDIS_STATUS_OPEN_LIST_FULL		(0xC0010010L)
#define RNDIS_STATUS_ADAPTER_NOT_READY		(0xC0010011L)
#define RNDIS_STATUS_ADAPTER_NOT_OPEN		(0xC0010012L)
#define RNDIS_STATUS_NOT_INDICATING		(0xC0010013L)
#define RNDIS_STATUS_INVALID_LENGTH		(0xC0010014L)
#define RNDIS_STATUS_INVALID_DATA		(0xC0010015L)
#define RNDIS_STATUS_BUFFER_TOO_SHORT		(0xC0010016L)
#define RNDIS_STATUS_INVALID_OID		(0xC0010017L)
#define RNDIS_STATUS_ADAPTER_REMOVED		(0xC0010018L)
#define RNDIS_STATUS_UNSUPPORTED_MEDIA		(0xC0010019L)
#define RNDIS_STATUS_GROUP_ADDRESS_IN_USE	(0xC001001AL)
#define RNDIS_STATUS_FILE_NOT_FOUND		(0xC001001BL)
#define RNDIS_STATUS_ERROR_READING_FILE		(0xC001001CL)
#define RNDIS_STATUS_ALREADY_MAPPED		(0xC001001DL)
#define RNDIS_STATUS_RESOURCE_CONFLICT		(0xC001001EL)
#define RNDIS_STATUS_NO_CABLE			(0xC001001FL)

#define RNDIS_STATUS_INVALID_SAP		(0xC0010020L)
#define RNDIS_STATUS_SAP_IN_USE			(0xC0010021L)
#define RNDIS_STATUS_INVALID_ADDRESS		(0xC0010022L)
#define RNDIS_STATUS_VC_NOT_ACTIVATED		(0xC0010023L)
#define RNDIS_STATUS_DEST_OUT_OF_ORDER		(0xC0010024L)
#define RNDIS_STATUS_VC_NOT_AVAILABLE		(0xC0010025L)
#define RNDIS_STATUS_CELLRATE_NOT_AVAILABLE	(0xC0010026L)
#define RNDIS_STATUS_INCOMPATABLE_QOS		(0xC0010027L)
#define RNDIS_STATUS_AAL_PARAMS_UNSUPPORTED	(0xC0010028L)
#define RNDIS_STATUS_NO_ROUTE_TO_DESTINATION	(0xC0010029L)

#define RNDIS_STATUS_TOKEN_RING_OPEN_ERROR	(0xC0011000L)

/* Object Identifiers used by NdisRequest Query/Set Information */
/* General Objects */
#define RNDIS_OID_GEN_SUPPORTED_LIST		0x00010101
#define RNDIS_OID_GEN_HARDWARE_STATUS		0x00010102
#define RNDIS_OID_GEN_MEDIA_SUPPORTED		0x00010103
#define RNDIS_OID_GEN_MEDIA_IN_USE		0x00010104
#define RNDIS_OID_GEN_MAXIMUM_LOOKAHEAD		0x00010105
#define RNDIS_OID_GEN_MAXIMUM_FRAME_SIZE	0x00010106
#define RNDIS_OID_GEN_LINK_SPEED		0x00010107
#define RNDIS_OID_GEN_TRANSMIT_BUFFER_SPACE	0x00010108
#define RNDIS_OID_GEN_RECEIVE_BUFFER_SPACE	0x00010109
#define RNDIS_OID_GEN_TRANSMIT_BLOCK_SIZE	0x0001010A
#define RNDIS_OID_GEN_RECEIVE_BLOCK_SIZE	0x0001010B
#define RNDIS_OID_GEN_VENDOR_ID			0x0001010C
#define RNDIS_OID_GEN_VENDOR_DESCRIPTION	0x0001010D
#define RNDIS_OID_GEN_CURRENT_PACKET_FILTER	0x0001010E
#define RNDIS_OID_GEN_CURRENT_LOOKAHEAD		0x0001010F
#define RNDIS_OID_GEN_DRIVER_VERSION		0x00010110
#define RNDIS_OID_GEN_MAXIMUM_TOTAL_SIZE	0x00010111
#define RNDIS_OID_GEN_PROTOCOL_OPTIONS		0x00010112
#define RNDIS_OID_GEN_MAC_OPTIONS		0x00010113
#define RNDIS_OID_GEN_MEDIA_CONNECT_STATUS	0x00010114
#define RNDIS_OID_GEN_MAXIMUM_SEND_PACKETS	0x00010115
#define RNDIS_OID_GEN_VENDOR_DRIVER_VERSION	0x00010116
#define RNDIS_OID_GEN_NETWORK_LAYER_ADDRESSES	0x00010118
#define RNDIS_OID_GEN_TRANSPORT_HEADER_OFFSET	0x00010119
#define RNDIS_OID_GEN_MACHINE_NAME		0x0001021A
#define RNDIS_OID_GEN_RNDIS_CONFIG_PARAMETER	0x0001021B

#define RNDIS_OID_GEN_XMIT_OK			0x00020101
#define RNDIS_OID_GEN_RCV_OK			0x00020102
#define RNDIS_OID_GEN_XMIT_ERROR		0x00020103
#define RNDIS_OID_GEN_RCV_ERROR			0x00020104
#define RNDIS_OID_GEN_RCV_NO_BUFFER		0x00020105

#define RNDIS_OID_GEN_DIRECTED_BYTES_XMIT	0x00020201
#define RNDIS_OID_GEN_DIRECTED_FRAMES_XMIT	0x00020202
#define RNDIS_OID_GEN_MULTICAST_BYTES_XMIT	0x00020203
#define RNDIS_OID_GEN_MULTICAST_FRAMES_XMIT	0x00020204
#define RNDIS_OID_GEN_BROADCAST_BYTES_XMIT	0x00020205
#define RNDIS_OID_GEN_BROADCAST_FRAMES_XMIT	0x00020206
#define RNDIS_OID_GEN_DIRECTED_BYTES_RCV	0x00020207
#define RNDIS_OID_GEN_DIRECTED_FRAMES_RCV	0x00020208
#define RNDIS_OID_GEN_MULTICAST_BYTES_RCV	0x00020209
#define RNDIS_OID_GEN_MULTICAST_FRAMES_RCV	0x0002020A
#define RNDIS_OID_GEN_BROADCAST_BYTES_RCV	0x0002020B
#define RNDIS_OID_GEN_BROADCAST_FRAMES_RCV	0x0002020C

#define RNDIS_OID_GEN_RCV_CRC_ERROR		0x0002020D
#define RNDIS_OID_GEN_TRANSMIT_QUEUE_LENGTH	0x0002020E

#define RNDIS_OID_GEN_GET_TIME_CAPS		0x0002020F
#define RNDIS_OID_GEN_GET_NETCARD_TIME		0x00020210

/* These are connection-oriented general OIDs. */
/* These replace the above OIDs for connection-oriented media. */
#define RNDIS_OID_GEN_CO_SUPPORTED_LIST		0x00010101
#define RNDIS_OID_GEN_CO_HARDWARE_STATUS	0x00010102
#define RNDIS_OID_GEN_CO_MEDIA_SUPPORTED	0x00010103
#define RNDIS_OID_GEN_CO_MEDIA_IN_USE		0x00010104
#define RNDIS_OID_GEN_CO_LINK_SPEED		0x00010105
#define RNDIS_OID_GEN_CO_VENDOR_ID		0x00010106
#define RNDIS_OID_GEN_CO_VENDOR_DESCRIPTION	0x00010107
#define RNDIS_OID_GEN_CO_DRIVER_VERSION		0x00010108
#define RNDIS_OID_GEN_CO_PROTOCOL_OPTIONS	0x00010109
#define RNDIS_OID_GEN_CO_MAC_OPTIONS		0x0001010A
#define RNDIS_OID_GEN_CO_MEDIA_CONNECT_STATUS	0x0001010B
#define RNDIS_OID_GEN_CO_VENDOR_DRIVER_VERSION	0x0001010C
#define RNDIS_OID_GEN_CO_MINIMUM_LINK_SPEED	0x0001010D

#define RNDIS_OID_GEN_CO_GET_TIME_CAPS		0x00010201
#define RNDIS_OID_GEN_CO_GET_NETCARD_TIME	0x00010202

/* These are connection-oriented statistics OIDs. */
#define RNDIS_OID_GEN_CO_XMIT_PDUS_OK		0x00020101
#define RNDIS_OID_GEN_CO_RCV_PDUS_OK		0x00020102
#define RNDIS_OID_GEN_CO_XMIT_PDUS_ERROR	0x00020103
#define RNDIS_OID_GEN_CO_RCV_PDUS_ERROR		0x00020104
#define RNDIS_OID_GEN_CO_RCV_PDUS_NO_BUFFER	0x00020105


#define RNDIS_OID_GEN_CO_RCV_CRC_ERROR		0x00020201
#define RNDIS_OID_GEN_CO_TRANSMIT_QUEUE_LENGTH	0x00020202
#define RNDIS_OID_GEN_CO_BYTES_XMIT		0x00020203
#define RNDIS_OID_GEN_CO_BYTES_RCV		0x00020204
#define RNDIS_OID_GEN_CO_BYTES_XMIT_OUTSTANDING	0x00020205
#define RNDIS_OID_GEN_CO_NETCARD_LOAD		0x00020206

/* These are objects for Connection-oriented media call-managers. */
#define RNDIS_OID_CO_ADD_PVC			0xFF000001
#define RNDIS_OID_CO_DELETE_PVC			0xFF000002
#define RNDIS_OID_CO_GET_CALL_INFORMATION	0xFF000003
#define RNDIS_OID_CO_ADD_ADDRESS		0xFF000004
#define RNDIS_OID_CO_DELETE_ADDRESS		0xFF000005
#define RNDIS_OID_CO_GET_ADDRESSES		0xFF000006
#define RNDIS_OID_CO_ADDRESS_CHANGE		0xFF000007
#define RNDIS_OID_CO_SIGNALING_ENABLED		0xFF000008
#define RNDIS_OID_CO_SIGNALING_DISABLED		0xFF000009

/* 802.3 Objects (Ethernet) */
#define RNDIS_OID_802_3_PERMANENT_ADDRESS	0x01010101
#define RNDIS_OID_802_3_CURRENT_ADDRESS		0x01010102
#define RNDIS_OID_802_3_MULTICAST_LIST		0x01010103
#define RNDIS_OID_802_3_MAXIMUM_LIST_SIZE	0x01010104
#define RNDIS_OID_802_3_MAC_OPTIONS		0x01010105

#define NDIS_802_3_MAC_OPTION_PRIORITY		0x00000001

#define RNDIS_OID_802_3_RCV_ERROR_ALIGNMENT	0x01020101
#define RNDIS_OID_802_3_XMIT_ONE_COLLISION	0x01020102
#define RNDIS_OID_802_3_XMIT_MORE_COLLISIONS	0x01020103

#define RNDIS_OID_802_3_XMIT_DEFERRED		0x01020201
#define RNDIS_OID_802_3_XMIT_MAX_COLLISIONS	0x01020202
#define RNDIS_OID_802_3_RCV_OVERRUN		0x01020203
#define RNDIS_OID_802_3_XMIT_UNDERRUN		0x01020204
#define RNDIS_OID_802_3_XMIT_HEARTBEAT_FAILURE	0x01020205
#define RNDIS_OID_802_3_XMIT_TIMES_CRS_LOST	0x01020206
#define RNDIS_OID_802_3_XMIT_LATE_COLLISIONS	0x01020207

/* Remote NDIS message types */
#define REMOTE_NDIS_PACKET_MSG			0x00000001
#define REMOTE_NDIS_INITIALIZE_MSG		0x00000002
#define REMOTE_NDIS_HALT_MSG			0x00000003
#define REMOTE_NDIS_QUERY_MSG			0x00000004
#define REMOTE_NDIS_SET_MSG			0x00000005
#define REMOTE_NDIS_RESET_MSG			0x00000006
#define REMOTE_NDIS_INDICATE_STATUS_MSG		0x00000007
#define REMOTE_NDIS_KEEPALIVE_MSG		0x00000008

#define REMOTE_CONDIS_MP_CREATE_VC_MSG		0x00008001
#define REMOTE_CONDIS_MP_DELETE_VC_MSG		0x00008002
#define REMOTE_CONDIS_MP_ACTIVATE_VC_MSG	0x00008005
#define REMOTE_CONDIS_MP_DEACTIVATE_VC_MSG	0x00008006
#define REMOTE_CONDIS_INDICATE_STATUS_MSG	0x00008007

/* Remote NDIS message completion types */
#define REMOTE_NDIS_INITIALIZE_CMPLT		0x80000002
#define REMOTE_NDIS_QUERY_CMPLT			0x80000004
#define REMOTE_NDIS_SET_CMPLT			0x80000005
#define REMOTE_NDIS_RESET_CMPLT			0x80000006
#define REMOTE_NDIS_KEEPALIVE_CMPLT		0x80000008

#define REMOTE_CONDIS_MP_CREATE_VC_CMPLT	0x80008001
#define REMOTE_CONDIS_MP_DELETE_VC_CMPLT	0x80008002
#define REMOTE_CONDIS_MP_ACTIVATE_VC_CMPLT	0x80008005
#define REMOTE_CONDIS_MP_DEACTIVATE_VC_CMPLT	0x80008006

/*
 * Reserved message type for private communication between lower-layer host
 * driver and remote device, if necessary.
 */
#define REMOTE_NDIS_BUS_MSG			0xff000001

/*  Defines for DeviceFlags in struct rndis_initialize_complete */
#define RNDIS_DF_CONNECTIONLESS			0x00000001
#define RNDIS_DF_CONNECTION_ORIENTED		0x00000002
#define RNDIS_DF_RAW_DATA			0x00000004

/*  Remote NDIS medium types. */
#define RNDIS_MEDIUM_802_3			0x00000000
#define RNDIS_MEDIUM_802_5			0x00000001
#define RNDIS_MEDIUM_FDDI				0x00000002
#define RNDIS_MEDIUM_WAN				0x00000003
#define RNDIS_MEDIUM_LOCAL_TALK			0x00000004
#define RNDIS_MEDIUM_ARCNET_RAW			0x00000006
#define RNDIS_MEDIUM_ARCNET_878_2			0x00000007
#define RNDIS_MEDIUM_ATM				0x00000008
#define RNDIS_MEDIUM_WIRELESS_WAN			0x00000009
#define RNDIS_MEDIUM_IRDA				0x0000000a
#define RNDIS_MEDIUM_CO_WAN			0x0000000b
/* Not a real medium, defined as an upper-bound */
#define RNDIS_MEDIUM_MAX				0x0000000d


/* Remote NDIS medium connection states. */
#define RNDIS_MEDIA_STATE_CONNECTED		0x00000000
#define RNDIS_MEDIA_STATE_DISCONNECTED		0x00000001

/*  Remote NDIS version numbers */
#define RNDIS_MAJOR_VERSION			0x00000001
#define RNDIS_MINOR_VERSION			0x00000000


/* NdisInitialize message */
struct rndis_initialize_request {
	u32 req_id;
	u32 major_ver;
	u32 minor_ver;
	u32 max_xfer_size;
};

/* Response to NdisInitialize */
struct rndis_initialize_complete {
	u32 req_id;
	u32 status;
	u32 major_ver;
	u32 minor_ver;
	u32 dev_flags;
	u32 medium;
	u32 max_pkt_per_msg;
	u32 max_xfer_size;
	u32 pkt_alignment_factor;
	u32 af_list_offset;
	u32 af_list_size;
};

/* Call manager devices only: Information about an address family */
/* supported by the device is appended to the response to NdisInitialize. */
struct rndis_co_address_family {
	u32 address_family;
	u32 major_ver;
	u32 minor_ver;
};

/* NdisHalt message */
struct rndis_halt_request {
	u32 req_id;
};

/* NdisQueryRequest message */
struct rndis_query_request {
	u32 req_id;
	u32 oid;
	u32 info_buflen;
	u32 info_buf_offset;
	u32 dev_vc_handle;
};

/* Response to NdisQueryRequest */
struct rndis_query_complete {
	u32 req_id;
	u32 status;
	u32 info_buflen;
	u32 info_buf_offset;
};

/* NdisSetRequest message */
struct rndis_set_request {
	u32 req_id;
	u32 oid;
	u32 info_buflen;
	u32 info_buf_offset;
	u32 dev_vc_handle;
};

/* Response to NdisSetRequest */
struct rndis_set_complete {
	u32 req_id;
	u32 status;
};

/* NdisReset message */
struct rndis_reset_request {
	u32 reserved;
};

/* Response to NdisReset */
struct rndis_reset_complete {
	u32 status;
	u32 addressing_reset;
};

/* NdisMIndicateStatus message */
struct rndis_indicate_status {
	u32 status;
	u32 status_buflen;
	u32 status_buf_offset;
};

/* Diagnostic information passed as the status buffer in */
/* struct rndis_indicate_status messages signifying error conditions. */
struct rndis_diagnostic_info {
	u32 diag_status;
	u32 error_offset;
};

/* NdisKeepAlive message */
struct rndis_keepalive_request {
	u32 req_id;
};

/* Response to NdisKeepAlive */
struct rndis_keepalive_complete {
	u32 req_id;
	u32 status;
};

/*
 * Data message. All Offset fields contain byte offsets from the beginning of
 * struct rndis_packet. All Length fields are in bytes.  VcHandle is set
 * to 0 for connectionless data, otherwise it contains the VC handle.
 */
struct rndis_packet {
	u32 data_offset;
	u32 data_len;
	u32 oob_data_offset;
	u32 oob_data_len;
	u32 num_oob_data_elements;
	u32 per_pkt_info_offset;
	u32 per_pkt_info_len;
	u32 vc_handle;
	u32 reserved;
};

/* Optional Out of Band data associated with a Data message. */
struct rndis_oobd {
	u32 size;
	u32 type;
	u32 class_info_offset;
};

/* Packet extension field contents associated with a Data message. */
struct rndis_per_packet_info {
	u32 size;
	u32 type;
	u32 per_pkt_info_offset;
};

/* Format of Information buffer passed in a SetRequest for the OID */
/* OID_GEN_RNDIS_CONFIG_PARAMETER. */
struct rndis_config_parameter_info {
	u32 parameter_name_offset;
	u32 parameter_name_length;
	u32 parameter_type;
	u32 parameter_value_offset;
	u32 parameter_value_length;
};

/* Values for ParameterType in struct rndis_config_parameter_info */
#define RNDIS_CONFIG_PARAM_TYPE_INTEGER     0
#define RNDIS_CONFIG_PARAM_TYPE_STRING      2

/* CONDIS Miniport messages for connection oriented devices */
/* that do not implement a call manager. */

/* CoNdisMiniportCreateVc message */
struct rcondis_mp_create_vc {
	u32 req_id;
	u32 ndis_vc_handle;
};

/* Response to CoNdisMiniportCreateVc */
struct rcondis_mp_create_vc_complete {
	u32 req_id;
	u32 dev_vc_handle;
	u32 status;
};

/* CoNdisMiniportDeleteVc message */
struct rcondis_mp_delete_vc {
	u32 req_id;
	u32 dev_vc_handle;
};

/* Response to CoNdisMiniportDeleteVc */
struct rcondis_mp_delete_vc_complete {
	u32 req_id;
	u32 status;
};

/* CoNdisMiniportQueryRequest message */
struct rcondis_mp_query_request {
	u32 req_id;
	u32 request_type;
	u32 oid;
	u32 dev_vc_handle;
	u32 info_buflen;
	u32 info_buf_offset;
};

/* CoNdisMiniportSetRequest message */
struct rcondis_mp_set_request {
	u32 req_id;
	u32 request_type;
	u32 oid;
	u32 dev_vc_handle;
	u32 info_buflen;
	u32 info_buf_offset;
};

/* CoNdisIndicateStatus message */
struct rcondis_indicate_status {
	u32 ndis_vc_handle;
	u32 status;
	u32 status_buflen;
	u32 status_buf_offset;
};

/* CONDIS Call/VC parameters */
struct rcondis_specific_parameters {
	u32 parameter_type;
	u32 parameter_length;
	u32 parameter_lffset;
};

struct rcondis_media_parameters {
	u32 flags;
	u32 reserved1;
	u32 reserved2;
	struct rcondis_specific_parameters media_specific;
};

struct rndis_flowspec {
	u32 token_rate;
	u32 token_bucket_size;
	u32 peak_bandwidth;
	u32 latency;
	u32 delay_variation;
	u32 service_type;
	u32 max_sdu_size;
	u32 minimum_policed_size;
};

struct rcondis_call_manager_parameters {
	struct rndis_flowspec transmit;
	struct rndis_flowspec receive;
	struct rcondis_specific_parameters call_mgr_specific;
};

/* CoNdisMiniportActivateVc message */
struct rcondis_mp_activate_vc_request {
	u32 req_id;
	u32 flags;
	u32 dev_vc_handle;
	u32 media_params_offset;
	u32 media_params_length;
	u32 call_mgr_params_offset;
	u32 call_mgr_params_length;
};

/* Response to CoNdisMiniportActivateVc */
struct rcondis_mp_activate_vc_complete {
	u32 req_id;
	u32 status;
};

/* CoNdisMiniportDeactivateVc message */
struct rcondis_mp_deactivate_vc_request {
	u32 req_id;
	u32 flags;
	u32 dev_vc_handle;
};

/* Response to CoNdisMiniportDeactivateVc */
struct rcondis_mp_deactivate_vc_complete {
	u32 req_id;
	u32 status;
};


/* union with all of the RNDIS messages */
union rndis_message_container {
	struct rndis_packet pkt;
	struct rndis_initialize_request init_req;
	struct rndis_halt_request halt_req;
	struct rndis_query_request query_req;
	struct rndis_set_request set_req;
	struct rndis_reset_request reset_req;
	struct rndis_keepalive_request keep_alive_req;
	struct rndis_indicate_status indicate_status;
	struct rndis_initialize_complete init_complete;
	struct rndis_query_complete query_complete;
	struct rndis_set_complete set_complete;
	struct rndis_reset_complete reset_complete;
	struct rndis_keepalive_complete keep_alive_complete;
	struct rcondis_mp_create_vc co_miniport_create_vc;
	struct rcondis_mp_delete_vc co_miniport_delete_vc;
	struct rcondis_indicate_status co_indicate_status;
	struct rcondis_mp_activate_vc_request co_miniport_activate_vc;
	struct rcondis_mp_deactivate_vc_request co_miniport_deactivate_vc;
	struct rcondis_mp_create_vc_complete co_miniport_create_vc_complete;
	struct rcondis_mp_delete_vc_complete co_miniport_delete_vc_complete;
	struct rcondis_mp_activate_vc_complete co_miniport_activate_vc_complete;
	struct rcondis_mp_deactivate_vc_complete
		co_miniport_deactivate_vc_complete;
};

/* Remote NDIS message format */
struct rndis_message {
	u32 ndis_msg_type;

	/* Total length of this message, from the beginning */
	/* of the sruct rndis_message, in bytes. */
	u32 msg_len;

	/* Actual message */
	union rndis_message_container msg;
};

/* Handy macros */

/* get the size of an RNDIS message. Pass in the message type, */
/* struct rndis_set_request, struct rndis_packet for example */
#define RNDIS_MESSAGE_SIZE(msg)				\
	(sizeof(msg) + (sizeof(struct rndis_message) -	\
	 sizeof(union rndis_message_container)))

/* get pointer to info buffer with message pointer */
#define MESSAGE_TO_INFO_BUFFER(msg)				\
	(((unsigned char *)(msg)) + msg->info_buf_offset)

/* get pointer to status buffer with message pointer */
#define MESSAGE_TO_STATUS_BUFFER(msg)			\
	(((unsigned char *)(msg)) + msg->status_buf_offset)

/* get pointer to OOBD buffer with message pointer */
#define MESSAGE_TO_OOBD_BUFFER(msg)				\
	(((unsigned char *)(msg)) + msg->oob_data_offset)

/* get pointer to data buffer with message pointer */
#define MESSAGE_TO_DATA_BUFFER(msg)				\
	(((unsigned char *)(msg)) + msg->per_pkt_info_offset)

/* get pointer to contained message from NDIS_MESSAGE pointer */
#define RNDIS_MESSAGE_PTR_TO_MESSAGE_PTR(rndis_msg)		\
	((void *) &rndis_msg->msg)

/* get pointer to contained message from NDIS_MESSAGE pointer */
#define RNDIS_MESSAGE_RAW_PTR_TO_MESSAGE_PTR(rndis_msg)	\
	((void *) rndis_msg)

#endif /* _RNDIS_H_ */
