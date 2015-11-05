// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef PROTOBUF_message_2eproto__INCLUDED
#define PROTOBUF_message_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace gim {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_message_2eproto();
void protobuf_AssignDesc_message_2eproto();
void protobuf_ShutdownFile_message_2eproto();

class Message;

// ===================================================================

class Message : public ::google::protobuf::MessageLite {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }

  static const Message& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Message* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(Message* other);

  // implements Message ----------------------------------------------

  Message* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string to = 1;
  inline bool has_to() const;
  inline void clear_to();
  static const int kToFieldNumber = 1;
  inline const ::std::string& to() const;
  inline void set_to(const ::std::string& value);
  inline void set_to(const char* value);
  inline void set_to(const char* value, size_t size);
  inline ::std::string* mutable_to();
  inline ::std::string* release_to();
  inline void set_allocated_to(::std::string* to);

  // optional int64 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::int64 id() const;
  inline void set_id(::google::protobuf::int64 value);

  // optional int64 time = 3;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 3;
  inline ::google::protobuf::int64 time() const;
  inline void set_time(::google::protobuf::int64 value);

  // optional string from = 4;
  inline bool has_from() const;
  inline void clear_from();
  static const int kFromFieldNumber = 4;
  inline const ::std::string& from() const;
  inline void set_from(const ::std::string& value);
  inline void set_from(const char* value);
  inline void set_from(const char* value, size_t size);
  inline ::std::string* mutable_from();
  inline ::std::string* release_from();
  inline void set_allocated_from(::std::string* from);

  // optional int32 type = 5;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 5;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional string sn = 6;
  inline bool has_sn() const;
  inline void clear_sn();
  static const int kSnFieldNumber = 6;
  inline const ::std::string& sn() const;
  inline void set_sn(const ::std::string& value);
  inline void set_sn(const char* value);
  inline void set_sn(const char* value, size_t size);
  inline ::std::string* mutable_sn();
  inline ::std::string* release_sn();
  inline void set_allocated_sn(::std::string* sn);

  // optional bytes data = 7;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 7;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // optional int64 expire = 8;
  inline bool has_expire() const;
  inline void clear_expire();
  static const int kExpireFieldNumber = 8;
  inline ::google::protobuf::int64 expire() const;
  inline void set_expire(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:gim.Message)
 private:
  inline void set_has_to();
  inline void clear_has_to();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_from();
  inline void clear_has_from();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_sn();
  inline void clear_has_sn();
  inline void set_has_data();
  inline void clear_has_data();
  inline void set_has_expire();
  inline void clear_has_expire();

  ::std::string* to_;
  ::google::protobuf::int64 id_;
  ::google::protobuf::int64 time_;
  ::std::string* from_;
  ::std::string* sn_;
  ::std::string* data_;
  ::google::protobuf::int64 expire_;
  ::google::protobuf::int32 type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_message_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_message_2eproto();
  #endif
  friend void protobuf_AssignDesc_message_2eproto();
  friend void protobuf_ShutdownFile_message_2eproto();

  void InitAsDefaultInstance();
  static Message* default_instance_;
};
// ===================================================================


// ===================================================================

// Message

// optional string to = 1;
inline bool Message::has_to() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Message::set_has_to() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Message::clear_has_to() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Message::clear_to() {
  if (to_ != &::google::protobuf::internal::kEmptyString) {
    to_->clear();
  }
  clear_has_to();
}
inline const ::std::string& Message::to() const {
  return *to_;
}
inline void Message::set_to(const ::std::string& value) {
  set_has_to();
  if (to_ == &::google::protobuf::internal::kEmptyString) {
    to_ = new ::std::string;
  }
  to_->assign(value);
}
inline void Message::set_to(const char* value) {
  set_has_to();
  if (to_ == &::google::protobuf::internal::kEmptyString) {
    to_ = new ::std::string;
  }
  to_->assign(value);
}
inline void Message::set_to(const char* value, size_t size) {
  set_has_to();
  if (to_ == &::google::protobuf::internal::kEmptyString) {
    to_ = new ::std::string;
  }
  to_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Message::mutable_to() {
  set_has_to();
  if (to_ == &::google::protobuf::internal::kEmptyString) {
    to_ = new ::std::string;
  }
  return to_;
}
inline ::std::string* Message::release_to() {
  clear_has_to();
  if (to_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = to_;
    to_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Message::set_allocated_to(::std::string* to) {
  if (to_ != &::google::protobuf::internal::kEmptyString) {
    delete to_;
  }
  if (to) {
    set_has_to();
    to_ = to;
  } else {
    clear_has_to();
    to_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int64 id = 2;
inline bool Message::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Message::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Message::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Message::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 Message::id() const {
  return id_;
}
inline void Message::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// optional int64 time = 3;
inline bool Message::has_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Message::set_has_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Message::clear_has_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Message::clear_time() {
  time_ = GOOGLE_LONGLONG(0);
  clear_has_time();
}
inline ::google::protobuf::int64 Message::time() const {
  return time_;
}
inline void Message::set_time(::google::protobuf::int64 value) {
  set_has_time();
  time_ = value;
}

// optional string from = 4;
inline bool Message::has_from() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Message::set_has_from() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Message::clear_has_from() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Message::clear_from() {
  if (from_ != &::google::protobuf::internal::kEmptyString) {
    from_->clear();
  }
  clear_has_from();
}
inline const ::std::string& Message::from() const {
  return *from_;
}
inline void Message::set_from(const ::std::string& value) {
  set_has_from();
  if (from_ == &::google::protobuf::internal::kEmptyString) {
    from_ = new ::std::string;
  }
  from_->assign(value);
}
inline void Message::set_from(const char* value) {
  set_has_from();
  if (from_ == &::google::protobuf::internal::kEmptyString) {
    from_ = new ::std::string;
  }
  from_->assign(value);
}
inline void Message::set_from(const char* value, size_t size) {
  set_has_from();
  if (from_ == &::google::protobuf::internal::kEmptyString) {
    from_ = new ::std::string;
  }
  from_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Message::mutable_from() {
  set_has_from();
  if (from_ == &::google::protobuf::internal::kEmptyString) {
    from_ = new ::std::string;
  }
  return from_;
}
inline ::std::string* Message::release_from() {
  clear_has_from();
  if (from_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = from_;
    from_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Message::set_allocated_from(::std::string* from) {
  if (from_ != &::google::protobuf::internal::kEmptyString) {
    delete from_;
  }
  if (from) {
    set_has_from();
    from_ = from;
  } else {
    clear_has_from();
    from_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 type = 5;
inline bool Message::has_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Message::set_has_type() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Message::clear_has_type() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Message::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 Message::type() const {
  return type_;
}
inline void Message::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional string sn = 6;
inline bool Message::has_sn() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Message::set_has_sn() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Message::clear_has_sn() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Message::clear_sn() {
  if (sn_ != &::google::protobuf::internal::kEmptyString) {
    sn_->clear();
  }
  clear_has_sn();
}
inline const ::std::string& Message::sn() const {
  return *sn_;
}
inline void Message::set_sn(const ::std::string& value) {
  set_has_sn();
  if (sn_ == &::google::protobuf::internal::kEmptyString) {
    sn_ = new ::std::string;
  }
  sn_->assign(value);
}
inline void Message::set_sn(const char* value) {
  set_has_sn();
  if (sn_ == &::google::protobuf::internal::kEmptyString) {
    sn_ = new ::std::string;
  }
  sn_->assign(value);
}
inline void Message::set_sn(const char* value, size_t size) {
  set_has_sn();
  if (sn_ == &::google::protobuf::internal::kEmptyString) {
    sn_ = new ::std::string;
  }
  sn_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Message::mutable_sn() {
  set_has_sn();
  if (sn_ == &::google::protobuf::internal::kEmptyString) {
    sn_ = new ::std::string;
  }
  return sn_;
}
inline ::std::string* Message::release_sn() {
  clear_has_sn();
  if (sn_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sn_;
    sn_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Message::set_allocated_sn(::std::string* sn) {
  if (sn_ != &::google::protobuf::internal::kEmptyString) {
    delete sn_;
  }
  if (sn) {
    set_has_sn();
    sn_ = sn;
  } else {
    clear_has_sn();
    sn_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bytes data = 7;
inline bool Message::has_data() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Message::set_has_data() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Message::clear_has_data() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Message::clear_data() {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& Message::data() const {
  return *data_;
}
inline void Message::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void Message::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void Message::set_data(const void* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Message::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  return data_;
}
inline ::std::string* Message::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Message::set_allocated_data(::std::string* data) {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    delete data_;
  }
  if (data) {
    set_has_data();
    data_ = data;
  } else {
    clear_has_data();
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int64 expire = 8;
inline bool Message::has_expire() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Message::set_has_expire() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Message::clear_has_expire() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Message::clear_expire() {
  expire_ = GOOGLE_LONGLONG(0);
  clear_has_expire();
}
inline ::google::protobuf::int64 Message::expire() const {
  return expire_;
}
inline void Message::set_expire(::google::protobuf::int64 value) {
  set_has_expire();
  expire_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace gim

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_2eproto__INCLUDED
