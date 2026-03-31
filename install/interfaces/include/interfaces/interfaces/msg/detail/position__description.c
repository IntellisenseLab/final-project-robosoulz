// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/Position.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__Position__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0x49, 0x1b, 0x8b, 0x5b, 0x34, 0xb5, 0xbc,
      0xe3, 0xb7, 0x6b, 0x8a, 0x55, 0x6c, 0x43, 0xd4,
      0x66, 0xf8, 0xf3, 0x44, 0x0b, 0xef, 0x65, 0x75,
      0x3d, 0x79, 0xd2, 0x15, 0x08, 0x39, 0xca, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__Position__TYPE_NAME[] = "interfaces/msg/Position";

// Define type names, field names, and default values
static char interfaces__msg__Position__FIELD_NAME__x[] = "x";
static char interfaces__msg__Position__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field interfaces__msg__Position__FIELDS[] = {
  {
    {interfaces__msg__Position__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__Position__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__Position__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__Position__TYPE_NAME, 23, 23},
      {interfaces__msg__Position__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__Position__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__Position__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 19, 19},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__Position__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__Position__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
