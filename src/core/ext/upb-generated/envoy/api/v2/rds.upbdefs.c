/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/rds.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/api/v2/rds.upbdefs.h"

extern upb_def_init envoy_api_v2_discovery_proto_upbdefinit;
extern upb_def_init google_api_annotations_proto_upbdefinit;
extern upb_def_init google_protobuf_wrappers_proto_upbdefinit;
extern upb_def_init envoy_annotations_resource_proto_upbdefinit;
extern upb_def_init udpa_annotations_migrate_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern upb_def_init envoy_api_v2_route_proto_upbdefinit;
extern const upb_msglayout envoy_api_v2_RdsDummy_msginit;

static const upb_msglayout *layouts[1] = {
  &envoy_api_v2_RdsDummy_msginit,
};

static const char descriptor[926] = {'\n', '\026', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'p', 'i', '/', 'v', '2', '/', 'r', 'd', 's', '.', 'p', 'r', 'o', 't', 'o', '\022', 
'\014', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '\032', '\034', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'p', 'i', '/', 
'v', '2', '/', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'p', 'r', 'o', 't', 'o', '\032', '\034', 'g', 'o', 'o', 'g', 'l', 
'e', '/', 'a', 'p', 'i', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 
'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 's', '.', 
'p', 'r', 'o', 't', 'o', '\032', ' ', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 
'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 
't', 'a', 't', 'i', 'o', 'n', 's', '/', 'm', 'i', 'g', 'r', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 
'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 
't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 
't', 'o', '\032', '\030', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'p', 'i', '/', 'v', '2', '/', 'r', 'o', 'u', 't', 'e', '.', 'p', 'r', 
'o', 't', 'o', '\"', '\n', '\n', '\010', 'R', 'd', 's', 'D', 'u', 'm', 'm', 'y', '2', '\356', '\002', '\n', '\025', 'R', 'o', 'u', 't', 'e', 
'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'S', 'e', 'r', 'v', 'i', 'c', 'e', '\022', 'U', '\n', '\014', 'S', 't', 'r', 'e', 'a', 
'm', 'R', 'o', 'u', 't', 'e', 's', '\022', '\036', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'D', 'i', 
's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '\037', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 
'i', '.', 'v', '2', '.', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', '\000', '(', 
'\001', '0', '\001', '\022', '^', '\n', '\013', 'D', 'e', 'l', 't', 'a', 'R', 'o', 'u', 't', 'e', 's', '\022', '#', '.', 'e', 'n', 'v', 'o', 
'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'D', 'e', 'l', 't', 'a', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 
'q', 'u', 'e', 's', 't', '\032', '$', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'D', 'e', 'l', 't', 
'a', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', '\000', '(', '\001', '0', '\001', '\022', 
'u', '\n', '\013', 'F', 'e', 't', 'c', 'h', 'R', 'o', 'u', 't', 'e', 's', '\022', '\036', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 
'i', '.', 'v', '2', '.', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '\037', '.', 'e', 
'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 's', 'p', 
'o', 'n', 's', 'e', '\"', '%', '\202', '\323', '\344', '\223', '\002', '\026', '\"', '\024', '/', 'v', '2', '/', 'd', 'i', 's', 'c', 'o', 'v', 'e', 
'r', 'y', ':', 'r', 'o', 'u', 't', 'e', 's', '\202', '\323', '\344', '\223', '\002', '\003', ':', '\001', '*', '\032', '\'', '\212', '\244', '\226', '\363', '\007', 
'!', '\n', '\037', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'R', 'o', 'u', 't', 'e', 'C', 'o', 'n', 'f', 
'i', 'g', 'u', 'r', 'a', 't', 'i', 'o', 'n', '2', '\253', '\001', '\n', '\033', 'V', 'i', 'r', 't', 'u', 'a', 'l', 'H', 'o', 's', 't', 
'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'S', 'e', 'r', 'v', 'i', 'c', 'e', '\022', 'd', '\n', '\021', 'D', 'e', 'l', 't', 'a', 
'V', 'i', 'r', 't', 'u', 'a', 'l', 'H', 'o', 's', 't', 's', '\022', '#', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 
'v', '2', '.', 'D', 'e', 'l', 't', 'a', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', 
'$', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'D', 'e', 'l', 't', 'a', 'D', 'i', 's', 'c', 'o', 
'v', 'e', 'r', 'y', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', '\000', '(', '\001', '0', '\001', '\032', '&', '\212', '\244', '\226', '\363', '\007', 
' ', '\n', '\036', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'r', 'o', 'u', 't', 'e', '.', 'V', 'i', 'r', 
't', 'u', 'a', 'l', 'H', 'o', 's', 't', 'B', 'Q', '\n', '\032', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', 
'.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', 'B', '\010', 'R', 'd', 's', 'P', 'r', 'o', 't', 'o', 'P', '\001', 
'\210', '\001', '\001', '\362', '\230', '\376', '\217', '\005', '\030', '\022', '\026', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 
'r', 'o', 'u', 't', 'e', '.', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\001', 'P', '\007', 'b', '\006', 'p', 'r', 'o', 't', 'o', 
'3', 
};

static upb_def_init *deps[9] = {
  &envoy_api_v2_discovery_proto_upbdefinit,
  &google_api_annotations_proto_upbdefinit,
  &google_protobuf_wrappers_proto_upbdefinit,
  &envoy_annotations_resource_proto_upbdefinit,
  &udpa_annotations_migrate_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  &envoy_api_v2_route_proto_upbdefinit,
  NULL
};

upb_def_init envoy_api_v2_rds_proto_upbdefinit = {
  deps,
  layouts,
  "envoy/api/v2/rds.proto",
  UPB_STRVIEW_INIT(descriptor, 926)
};
