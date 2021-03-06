// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeTouchEventProto.proto

#ifndef PROTOBUF_CarlifeTouchEventProto_2eproto__INCLUDED
#define PROTOBUF_CarlifeTouchEventProto_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CarlifeTouchEventProto_2eproto();
void protobuf_AssignDesc_CarlifeTouchEventProto_2eproto();
void protobuf_ShutdownFile_CarlifeTouchEventProto_2eproto();

class CarlifeTouchEvent;

// ===================================================================

class CarlifeTouchEvent : public ::google::protobuf::Message {
 public:
  CarlifeTouchEvent();
  virtual ~CarlifeTouchEvent();

  CarlifeTouchEvent(const CarlifeTouchEvent& from);

  inline CarlifeTouchEvent& operator=(const CarlifeTouchEvent& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CarlifeTouchEvent& default_instance();

  void Swap(CarlifeTouchEvent* other);

  // implements Message ----------------------------------------------

  CarlifeTouchEvent* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CarlifeTouchEvent& from);
  void MergeFrom(const CarlifeTouchEvent& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // required int32 code = 2;
  inline bool has_code() const;
  inline void clear_code();
  static const int kCodeFieldNumber = 2;
  inline ::google::protobuf::int32 code() const;
  inline void set_code(::google::protobuf::int32 value);

  // required int32 value = 3;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 3;
  inline ::google::protobuf::int32 value() const;
  inline void set_value(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.baidu.carlife.protobuf.CarlifeTouchEvent)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_code();
  inline void clear_has_code();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 code_;
  ::google::protobuf::int32 value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_CarlifeTouchEventProto_2eproto();
  friend void protobuf_AssignDesc_CarlifeTouchEventProto_2eproto();
  friend void protobuf_ShutdownFile_CarlifeTouchEventProto_2eproto();

  void InitAsDefaultInstance();
  static CarlifeTouchEvent* default_instance_;
};
// ===================================================================


// ===================================================================

// CarlifeTouchEvent

// required int32 type = 1;
inline bool CarlifeTouchEvent::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CarlifeTouchEvent::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CarlifeTouchEvent::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CarlifeTouchEvent::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 CarlifeTouchEvent::type() const {
  return type_;
}
inline void CarlifeTouchEvent::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// required int32 code = 2;
inline bool CarlifeTouchEvent::has_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CarlifeTouchEvent::set_has_code() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CarlifeTouchEvent::clear_has_code() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CarlifeTouchEvent::clear_code() {
  code_ = 0;
  clear_has_code();
}
inline ::google::protobuf::int32 CarlifeTouchEvent::code() const {
  return code_;
}
inline void CarlifeTouchEvent::set_code(::google::protobuf::int32 value) {
  set_has_code();
  code_ = value;
}

// required int32 value = 3;
inline bool CarlifeTouchEvent::has_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CarlifeTouchEvent::set_has_value() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CarlifeTouchEvent::clear_has_value() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CarlifeTouchEvent::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline ::google::protobuf::int32 CarlifeTouchEvent::value() const {
  return value_;
}
inline void CarlifeTouchEvent::set_value(::google::protobuf::int32 value) {
  set_has_value();
  value_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CarlifeTouchEventProto_2eproto__INCLUDED
