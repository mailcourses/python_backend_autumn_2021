// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: person.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_person_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_person_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_person_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_person_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_person_2eproto;
namespace tutorial {
class Person;
struct PersonDefaultTypeInternal;
extern PersonDefaultTypeInternal _Person_default_instance_;
}  // namespace tutorial
PROTOBUF_NAMESPACE_OPEN
template<> ::tutorial::Person* Arena::CreateMaybeMessage<::tutorial::Person>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tutorial {

// ===================================================================

class Person final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tutorial.Person) */ {
 public:
  inline Person() : Person(nullptr) {}
  ~Person() override;
  explicit constexpr Person(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Person(const Person& from);
  Person(Person&& from) noexcept
    : Person() {
    *this = ::std::move(from);
  }

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }
  inline Person& operator=(Person&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Person& default_instance() {
    return *internal_default_instance();
  }
  static inline const Person* internal_default_instance() {
    return reinterpret_cast<const Person*>(
               &_Person_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Person& a, Person& b) {
    a.Swap(&b);
  }
  inline void Swap(Person* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Person* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Person* New() const final {
    return new Person();
  }

  Person* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Person>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Person& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Person& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Person* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tutorial.Person";
  }
  protected:
  explicit Person(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInterestsFieldNumber = 3,
    kUserNameFieldNumber = 1,
    kFavoriteNumberFieldNumber = 2,
  };
  // repeated string interests = 3;
  int interests_size() const;
  private:
  int _internal_interests_size() const;
  public:
  void clear_interests();
  const std::string& interests(int index) const;
  std::string* mutable_interests(int index);
  void set_interests(int index, const std::string& value);
  void set_interests(int index, std::string&& value);
  void set_interests(int index, const char* value);
  void set_interests(int index, const char* value, size_t size);
  std::string* add_interests();
  void add_interests(const std::string& value);
  void add_interests(std::string&& value);
  void add_interests(const char* value);
  void add_interests(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& interests() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_interests();
  private:
  const std::string& _internal_interests(int index) const;
  std::string* _internal_add_interests();
  public:

  // string user_name = 1;
  void clear_user_name();
  const std::string& user_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_user_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_user_name();
  PROTOBUF_MUST_USE_RESULT std::string* release_user_name();
  void set_allocated_user_name(std::string* user_name);
  private:
  const std::string& _internal_user_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_user_name(const std::string& value);
  std::string* _internal_mutable_user_name();
  public:

  // int64 favorite_number = 2;
  void clear_favorite_number();
  ::PROTOBUF_NAMESPACE_ID::int64 favorite_number() const;
  void set_favorite_number(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_favorite_number() const;
  void _internal_set_favorite_number(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:tutorial.Person)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> interests_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_name_;
  ::PROTOBUF_NAMESPACE_ID::int64 favorite_number_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_person_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Person

// string user_name = 1;
inline void Person::clear_user_name() {
  user_name_.ClearToEmpty();
}
inline const std::string& Person::user_name() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.user_name)
  return _internal_user_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Person::set_user_name(ArgT0&& arg0, ArgT... args) {
 
 user_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:tutorial.Person.user_name)
}
inline std::string* Person::mutable_user_name() {
  std::string* _s = _internal_mutable_user_name();
  // @@protoc_insertion_point(field_mutable:tutorial.Person.user_name)
  return _s;
}
inline const std::string& Person::_internal_user_name() const {
  return user_name_.Get();
}
inline void Person::_internal_set_user_name(const std::string& value) {
  
  user_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Person::_internal_mutable_user_name() {
  
  return user_name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Person::release_user_name() {
  // @@protoc_insertion_point(field_release:tutorial.Person.user_name)
  return user_name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Person::set_allocated_user_name(std::string* user_name) {
  if (user_name != nullptr) {
    
  } else {
    
  }
  user_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), user_name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:tutorial.Person.user_name)
}

// int64 favorite_number = 2;
inline void Person::clear_favorite_number() {
  favorite_number_ = int64_t{0};
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Person::_internal_favorite_number() const {
  return favorite_number_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Person::favorite_number() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.favorite_number)
  return _internal_favorite_number();
}
inline void Person::_internal_set_favorite_number(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  favorite_number_ = value;
}
inline void Person::set_favorite_number(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_favorite_number(value);
  // @@protoc_insertion_point(field_set:tutorial.Person.favorite_number)
}

// repeated string interests = 3;
inline int Person::_internal_interests_size() const {
  return interests_.size();
}
inline int Person::interests_size() const {
  return _internal_interests_size();
}
inline void Person::clear_interests() {
  interests_.Clear();
}
inline std::string* Person::add_interests() {
  std::string* _s = _internal_add_interests();
  // @@protoc_insertion_point(field_add_mutable:tutorial.Person.interests)
  return _s;
}
inline const std::string& Person::_internal_interests(int index) const {
  return interests_.Get(index);
}
inline const std::string& Person::interests(int index) const {
  // @@protoc_insertion_point(field_get:tutorial.Person.interests)
  return _internal_interests(index);
}
inline std::string* Person::mutable_interests(int index) {
  // @@protoc_insertion_point(field_mutable:tutorial.Person.interests)
  return interests_.Mutable(index);
}
inline void Person::set_interests(int index, const std::string& value) {
  interests_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:tutorial.Person.interests)
}
inline void Person::set_interests(int index, std::string&& value) {
  interests_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:tutorial.Person.interests)
}
inline void Person::set_interests(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  interests_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tutorial.Person.interests)
}
inline void Person::set_interests(int index, const char* value, size_t size) {
  interests_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tutorial.Person.interests)
}
inline std::string* Person::_internal_add_interests() {
  return interests_.Add();
}
inline void Person::add_interests(const std::string& value) {
  interests_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tutorial.Person.interests)
}
inline void Person::add_interests(std::string&& value) {
  interests_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:tutorial.Person.interests)
}
inline void Person::add_interests(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  interests_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tutorial.Person.interests)
}
inline void Person::add_interests(const char* value, size_t size) {
  interests_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tutorial.Person.interests)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Person::interests() const {
  // @@protoc_insertion_point(field_list:tutorial.Person.interests)
  return interests_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Person::mutable_interests() {
  // @@protoc_insertion_point(field_mutable_list:tutorial.Person.interests)
  return &interests_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_person_2eproto
