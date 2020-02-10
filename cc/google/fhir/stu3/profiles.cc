// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/fhir/stu3/profiles.h"

#include "google/protobuf/message.h"
#include "google/fhir/profiles_lib.h"
#include "google/fhir/status/status.h"
#include "google/fhir/stu3/primitive_handler.h"

namespace google {
namespace fhir {

using ::google::protobuf::Message;

Status ConvertToProfileStu3(const ::google::protobuf::Message& source,
                            ::google::protobuf::Message* target) {
  return profiles_internal::ConvertToProfileInternal<
      stu3::Stu3PrimitiveHandler>(source, target);
}

// Identical to ConvertToProfile, except does not run the validation step.
Status ConvertToProfileLenientStu3(const ::google::protobuf::Message& source,
                                   ::google::protobuf::Message* target) {
  return profiles_internal::ConvertToProfileLenientInternal<
      stu3::Stu3PrimitiveHandler>(source, target);
}

}  // namespace fhir
}  // namespace google
