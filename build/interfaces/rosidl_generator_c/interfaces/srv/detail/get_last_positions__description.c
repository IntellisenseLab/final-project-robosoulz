// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:srv/GetLastPositions.idl
// generated code does not contain a copyright notice

#include "interfaces/srv/detail/get_last_positions__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__GetLastPositions__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x99, 0x5e, 0xd7, 0x20, 0xe0, 0x83, 0x95,
      0x57, 0x32, 0xbe, 0x3c, 0xd3, 0x14, 0x15, 0x9f,
      0xdd, 0xfa, 0x35, 0xed, 0xc3, 0xfe, 0x8c, 0xc6,
      0x59, 0x58, 0x79, 0x43, 0x5c, 0xa9, 0xea, 0xf9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__GetLastPositions_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x62, 0x9b, 0x4d, 0xd5, 0x1d, 0x55, 0x42, 0xd1,
      0x87, 0xf9, 0x78, 0x35, 0xd2, 0x9f, 0x25, 0xf4,
      0x61, 0x34, 0x8e, 0xcb, 0xcd, 0x2d, 0x34, 0xdf,
      0xad, 0x24, 0x90, 0xec, 0x7b, 0xe5, 0x89, 0x0e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__GetLastPositions_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0x5d, 0x3f, 0x66, 0xc3, 0x39, 0xb3, 0x46,
      0x96, 0x1a, 0x66, 0xd7, 0x23, 0xa7, 0x4d, 0xf5,
      0x2b, 0x06, 0x66, 0xb8, 0x91, 0xfc, 0xbe, 0xa7,
      0xb4, 0xd0, 0x1d, 0x50, 0x71, 0x2f, 0x1f, 0xbc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__srv__GetLastPositions_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0x7f, 0x27, 0x5a, 0xa3, 0x18, 0xad, 0xaa,
      0x2b, 0x2b, 0x86, 0x8b, 0x76, 0xe4, 0xfb, 0x54,
      0x2d, 0x0e, 0x09, 0xa5, 0x74, 0xa3, 0x3f, 0x97,
      0x23, 0x96, 0x55, 0x1f, 0x00, 0x95, 0xab, 0x57,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "interfaces/msg/detail/position__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t interfaces__msg__Position__EXPECTED_HASH = {1, {
    0x78, 0x49, 0x1b, 0x8b, 0x5b, 0x34, 0xb5, 0xbc,
    0xe3, 0xb7, 0x6b, 0x8a, 0x55, 0x6c, 0x43, 0xd4,
    0x66, 0xf8, 0xf3, 0x44, 0x0b, 0xef, 0x65, 0x75,
    0x3d, 0x79, 0xd2, 0x15, 0x08, 0x39, 0xca, 0x55,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char interfaces__srv__GetLastPositions__TYPE_NAME[] = "interfaces/srv/GetLastPositions";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char interfaces__msg__Position__TYPE_NAME[] = "interfaces/msg/Position";
static char interfaces__srv__GetLastPositions_Event__TYPE_NAME[] = "interfaces/srv/GetLastPositions_Event";
static char interfaces__srv__GetLastPositions_Request__TYPE_NAME[] = "interfaces/srv/GetLastPositions_Request";
static char interfaces__srv__GetLastPositions_Response__TYPE_NAME[] = "interfaces/srv/GetLastPositions_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char interfaces__srv__GetLastPositions__FIELD_NAME__request_message[] = "request_message";
static char interfaces__srv__GetLastPositions__FIELD_NAME__response_message[] = "response_message";
static char interfaces__srv__GetLastPositions__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field interfaces__srv__GetLastPositions__FIELDS[] = {
  {
    {interfaces__srv__GetLastPositions__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__GetLastPositions_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetLastPositions__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__GetLastPositions_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetLastPositions__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces__srv__GetLastPositions_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__GetLastPositions__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__Position__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetLastPositions_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetLastPositions_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetLastPositions_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__GetLastPositions__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__GetLastPositions__TYPE_NAME, 31, 31},
      {interfaces__srv__GetLastPositions__FIELDS, 3, 3},
    },
    {interfaces__srv__GetLastPositions__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&interfaces__msg__Position__EXPECTED_HASH, interfaces__msg__Position__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = interfaces__msg__Position__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interfaces__srv__GetLastPositions_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = interfaces__srv__GetLastPositions_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = interfaces__srv__GetLastPositions_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__GetLastPositions_Request__FIELD_NAME__num_positions[] = "num_positions";

static rosidl_runtime_c__type_description__Field interfaces__srv__GetLastPositions_Request__FIELDS[] = {
  {
    {interfaces__srv__GetLastPositions_Request__FIELD_NAME__num_positions, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__GetLastPositions_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__GetLastPositions_Request__TYPE_NAME, 39, 39},
      {interfaces__srv__GetLastPositions_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__GetLastPositions_Response__FIELD_NAME__positions[] = "positions";

static rosidl_runtime_c__type_description__Field interfaces__srv__GetLastPositions_Response__FIELDS[] = {
  {
    {interfaces__srv__GetLastPositions_Response__FIELD_NAME__positions, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {interfaces__msg__Position__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__GetLastPositions_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {interfaces__msg__Position__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__GetLastPositions_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__GetLastPositions_Response__TYPE_NAME, 40, 40},
      {interfaces__srv__GetLastPositions_Response__FIELDS, 1, 1},
    },
    {interfaces__srv__GetLastPositions_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&interfaces__msg__Position__EXPECTED_HASH, interfaces__msg__Position__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = interfaces__msg__Position__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces__srv__GetLastPositions_Event__FIELD_NAME__info[] = "info";
static char interfaces__srv__GetLastPositions_Event__FIELD_NAME__request[] = "request";
static char interfaces__srv__GetLastPositions_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field interfaces__srv__GetLastPositions_Event__FIELDS[] = {
  {
    {interfaces__srv__GetLastPositions_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetLastPositions_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interfaces__srv__GetLastPositions_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetLastPositions_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interfaces__srv__GetLastPositions_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__srv__GetLastPositions_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__Position__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetLastPositions_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {interfaces__srv__GetLastPositions_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__srv__GetLastPositions_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__srv__GetLastPositions_Event__TYPE_NAME, 37, 37},
      {interfaces__srv__GetLastPositions_Event__FIELDS, 3, 3},
    },
    {interfaces__srv__GetLastPositions_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&interfaces__msg__Position__EXPECTED_HASH, interfaces__msg__Position__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = interfaces__msg__Position__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interfaces__srv__GetLastPositions_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = interfaces__srv__GetLastPositions_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 num_positions\n"
  "---\n"
  "Position[] positions";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__GetLastPositions__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__GetLastPositions__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__GetLastPositions_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__GetLastPositions_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__GetLastPositions_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__GetLastPositions_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces__srv__GetLastPositions_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__srv__GetLastPositions_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__GetLastPositions__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__GetLastPositions__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interfaces__msg__Position__get_individual_type_description_source(NULL);
    sources[3] = *interfaces__srv__GetLastPositions_Event__get_individual_type_description_source(NULL);
    sources[4] = *interfaces__srv__GetLastPositions_Request__get_individual_type_description_source(NULL);
    sources[5] = *interfaces__srv__GetLastPositions_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__GetLastPositions_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__GetLastPositions_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__GetLastPositions_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__GetLastPositions_Response__get_individual_type_description_source(NULL),
    sources[1] = *interfaces__msg__Position__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__srv__GetLastPositions_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__srv__GetLastPositions_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interfaces__msg__Position__get_individual_type_description_source(NULL);
    sources[3] = *interfaces__srv__GetLastPositions_Request__get_individual_type_description_source(NULL);
    sources[4] = *interfaces__srv__GetLastPositions_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
