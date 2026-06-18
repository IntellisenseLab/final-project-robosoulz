
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_Goal() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__Navigation_Goal__init(msg: *mut Navigation_Goal) -> bool;
    fn interfaces__action__Navigation_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Navigation_Goal>, size: usize) -> bool;
    fn interfaces__action__Navigation_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Navigation_Goal>);
    fn interfaces__action__Navigation_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Navigation_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Navigation_Goal>) -> bool;
}

// Corresponds to interfaces__action__Navigation_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Navigation_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub end_position: super::super::msg::rmw::Position,

}



impl Default for Navigation_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__Navigation_Goal__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__Navigation_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Navigation_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Navigation_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Navigation_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/Navigation_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_Goal() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_Result() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__Navigation_Result__init(msg: *mut Navigation_Result) -> bool;
    fn interfaces__action__Navigation_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Navigation_Result>, size: usize) -> bool;
    fn interfaces__action__Navigation_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Navigation_Result>);
    fn interfaces__action__Navigation_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Navigation_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Navigation_Result>) -> bool;
}

// Corresponds to interfaces__action__Navigation_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Navigation_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for Navigation_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__Navigation_Result__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__Navigation_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Navigation_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Navigation_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Navigation_Result where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/Navigation_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_Result() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__Navigation_Feedback__init(msg: *mut Navigation_Feedback) -> bool;
    fn interfaces__action__Navigation_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Navigation_Feedback>, size: usize) -> bool;
    fn interfaces__action__Navigation_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Navigation_Feedback>);
    fn interfaces__action__Navigation_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Navigation_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Navigation_Feedback>) -> bool;
}

// Corresponds to interfaces__action__Navigation_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Navigation_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub direction: f32,

}



impl Default for Navigation_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__Navigation_Feedback__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__Navigation_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Navigation_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Navigation_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Navigation_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/Navigation_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_Feedback() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__Navigation_FeedbackMessage__init(msg: *mut Navigation_FeedbackMessage) -> bool;
    fn interfaces__action__Navigation_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Navigation_FeedbackMessage>, size: usize) -> bool;
    fn interfaces__action__Navigation_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Navigation_FeedbackMessage>);
    fn interfaces__action__Navigation_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Navigation_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Navigation_FeedbackMessage>) -> bool;
}

// Corresponds to interfaces__action__Navigation_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Navigation_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Navigation_Feedback,

}



impl Default for Navigation_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__Navigation_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__Navigation_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Navigation_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Navigation_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Navigation_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/Navigation_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_FeedbackMessage() }
  }
}




#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__Navigation_SendGoal_Request__init(msg: *mut Navigation_SendGoal_Request) -> bool;
    fn interfaces__action__Navigation_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Navigation_SendGoal_Request>, size: usize) -> bool;
    fn interfaces__action__Navigation_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Navigation_SendGoal_Request>);
    fn interfaces__action__Navigation_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Navigation_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Navigation_SendGoal_Request>) -> bool;
}

// Corresponds to interfaces__action__Navigation_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Navigation_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Navigation_Goal,

}



impl Default for Navigation_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__Navigation_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__Navigation_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Navigation_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Navigation_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Navigation_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/Navigation_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_SendGoal_Request() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__Navigation_SendGoal_Response__init(msg: *mut Navigation_SendGoal_Response) -> bool;
    fn interfaces__action__Navigation_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Navigation_SendGoal_Response>, size: usize) -> bool;
    fn interfaces__action__Navigation_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Navigation_SendGoal_Response>);
    fn interfaces__action__Navigation_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Navigation_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Navigation_SendGoal_Response>) -> bool;
}

// Corresponds to interfaces__action__Navigation_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Navigation_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Navigation_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__Navigation_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__Navigation_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Navigation_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Navigation_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Navigation_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/Navigation_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_SendGoal_Response() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__Navigation_GetResult_Request__init(msg: *mut Navigation_GetResult_Request) -> bool;
    fn interfaces__action__Navigation_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Navigation_GetResult_Request>, size: usize) -> bool;
    fn interfaces__action__Navigation_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Navigation_GetResult_Request>);
    fn interfaces__action__Navigation_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Navigation_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Navigation_GetResult_Request>) -> bool;
}

// Corresponds to interfaces__action__Navigation_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Navigation_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Navigation_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__Navigation_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__Navigation_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Navigation_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Navigation_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Navigation_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/Navigation_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_GetResult_Request() }
  }
}


#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "interfaces__rosidl_generator_c")]
extern "C" {
    fn interfaces__action__Navigation_GetResult_Response__init(msg: *mut Navigation_GetResult_Response) -> bool;
    fn interfaces__action__Navigation_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Navigation_GetResult_Response>, size: usize) -> bool;
    fn interfaces__action__Navigation_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Navigation_GetResult_Response>);
    fn interfaces__action__Navigation_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Navigation_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Navigation_GetResult_Response>) -> bool;
}

// Corresponds to interfaces__action__Navigation_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Navigation_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Navigation_Result,

}



impl Default for Navigation_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !interfaces__action__Navigation_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to interfaces__action__Navigation_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Navigation_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { interfaces__action__Navigation_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Navigation_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Navigation_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "interfaces/action/Navigation_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__interfaces__action__Navigation_GetResult_Response() }
  }
}






#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__interfaces__action__Navigation_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to interfaces__action__Navigation_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Navigation_SendGoal;

impl rosidl_runtime_rs::Service for Navigation_SendGoal {
    type Request = Navigation_SendGoal_Request;
    type Response = Navigation_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__interfaces__action__Navigation_SendGoal() }
    }
}




#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__interfaces__action__Navigation_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to interfaces__action__Navigation_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Navigation_GetResult;

impl rosidl_runtime_rs::Service for Navigation_GetResult {
    type Request = Navigation_GetResult_Request;
    type Response = Navigation_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__interfaces__action__Navigation_GetResult() }
    }
}


