/**
 * Copyright (c) 2016-present, Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "../core/GLImageAllocator.h"
#include "../core/arm_neon_support.h"

template <typename T>
GLImageAllocator<T>* GLImageAllocator<T>::newGLImageAllocator() {
  return new GLImageAllocator<T>();
}

template GLImageAllocator<float16_t>* GLImageAllocator<float16_t>::newGLImageAllocator();
template GLImageAllocator<uint8_t>* GLImageAllocator<uint8_t>::newGLImageAllocator();
