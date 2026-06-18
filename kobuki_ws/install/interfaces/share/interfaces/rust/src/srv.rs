#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to interfaces__srv__GetLastPositions_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetLastPositions_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub num_positions: i32,

}



impl Default for GetLastPositions_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetLastPositions_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetLastPositions_Request {
  type RmwMsg = super::srv::rmw::GetLastPositions_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        num_positions: msg.num_positions,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      num_positions: msg.num_positions,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      num_positions: msg.num_positions,
    }
  }
}


// Corresponds to interfaces__srv__GetLastPositions_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetLastPositions_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub positions: Vec<super::msg::Position>,

}



impl Default for GetLastPositions_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetLastPositions_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetLastPositions_Response {
  type RmwMsg = super::srv::rmw::GetLastPositions_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        positions: msg.positions
          .into_iter()
          .map(|elem| super::msg::Position::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        positions: msg.positions
          .iter()
          .map(|elem| super::msg::Position::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      positions: msg.positions
          .into_iter()
          .map(super::msg::Position::from_rmw_message)
          .collect(),
    }
  }
}






#[link(name = "interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__interfaces__srv__GetLastPositions() -> *const std::ffi::c_void;
}

// Corresponds to interfaces__srv__GetLastPositions
#[allow(missing_docs, non_camel_case_types)]
pub struct GetLastPositions;

impl rosidl_runtime_rs::Service for GetLastPositions {
    type Request = GetLastPositions_Request;
    type Response = GetLastPositions_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__interfaces__srv__GetLastPositions() }
    }
}


