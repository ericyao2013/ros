/*
 * Copyright (c) 2009, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Willow Garage, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/* Author: Josh Faust */

/*
 * Test generated messages
 */

#include <gtest/gtest.h>
#include "test_roscpp_serialization/helpers.h"
#include "test_roscpp_serialization/ArrayOfFixedLength.h"
#include "test_roscpp_serialization/ArrayOfVariableLength.h"
#include "test_roscpp_serialization/EmbeddedFixedLength.h"
#include "test_roscpp_serialization/EmbeddedVariableLength.h"
#include "test_roscpp_serialization/FixedLength.h"
#include "test_roscpp_serialization/VariableLength.h"
#include "test_roscpp_serialization/WithHeader.h"

using namespace test_roscpp_serialization;

ROSCPP_TYPEDEF_MESSAGE_WITH_ALLOCATOR(test_roscpp_serialization, ArrayOfFixedLength, MyArrayOfFixedLength, Allocator);
ROSCPP_TYPEDEF_MESSAGE_WITH_ALLOCATOR(test_roscpp_serialization, ArrayOfVariableLength, MyArrayOfVariableLength, Allocator);
ROSCPP_TYPEDEF_MESSAGE_WITH_ALLOCATOR(test_roscpp_serialization, EmbeddedFixedLength, MyEmbeddedFixedLength, Allocator);
ROSCPP_TYPEDEF_MESSAGE_WITH_ALLOCATOR(test_roscpp_serialization, EmbeddedVariableLength, MyEmbeddedVariableLength, Allocator);
ROSCPP_TYPEDEF_MESSAGE_WITH_ALLOCATOR(test_roscpp_serialization, FixedLength, MyFixedLength, Allocator);
ROSCPP_TYPEDEF_MESSAGE_WITH_ALLOCATOR(test_roscpp_serialization, VariableLength, MyVariableLength, Allocator);
ROSCPP_TYPEDEF_MESSAGE_WITH_ALLOCATOR(test_roscpp_serialization, WithHeader, MyWithHeader, Allocator);

TEST(GeneratedMessages, traitsWithStandardMessages)
{
  EXPECT_TRUE(mt::isFixedSize<ArrayOfFixedLength>());
  EXPECT_FALSE(mt::isFixedSize<ArrayOfVariableLength>());
  EXPECT_TRUE(mt::isFixedSize<EmbeddedFixedLength>());
  EXPECT_FALSE(mt::isFixedSize<EmbeddedVariableLength>());
  EXPECT_TRUE(mt::isFixedSize<FixedLength>());
  EXPECT_FALSE(mt::isFixedSize<VariableLength>());
  EXPECT_FALSE(mt::isFixedSize<WithHeader>());

  EXPECT_FALSE(mt::hasHeader<ArrayOfFixedLength>());
  EXPECT_FALSE(mt::hasHeader<ArrayOfVariableLength>());
  EXPECT_FALSE(mt::hasHeader<EmbeddedFixedLength>());
  EXPECT_FALSE(mt::hasHeader<EmbeddedVariableLength>());
  EXPECT_FALSE(mt::hasHeader<FixedLength>());
  EXPECT_FALSE(mt::hasHeader<VariableLength>());
  EXPECT_TRUE(mt::hasHeader<WithHeader>());

  EXPECT_FALSE(mt::isSimple<ArrayOfFixedLength>());
  EXPECT_FALSE(mt::isSimple<ArrayOfVariableLength>());
  EXPECT_FALSE(mt::isSimple<EmbeddedFixedLength>());
  EXPECT_FALSE(mt::isSimple<EmbeddedVariableLength>());
  EXPECT_FALSE(mt::isSimple<FixedLength>());
  EXPECT_FALSE(mt::isSimple<VariableLength>());
  EXPECT_FALSE(mt::isSimple<WithHeader>());
}

TEST(GeneratedMessages, traitsWithCustomAllocator)
{
  EXPECT_TRUE(mt::isFixedSize<MyArrayOfFixedLength>());
  EXPECT_FALSE(mt::isFixedSize<MyArrayOfVariableLength>());
  EXPECT_TRUE(mt::isFixedSize<MyEmbeddedFixedLength>());
  EXPECT_FALSE(mt::isFixedSize<MyEmbeddedVariableLength>());
  EXPECT_TRUE(mt::isFixedSize<MyFixedLength>());
  EXPECT_FALSE(mt::isFixedSize<MyVariableLength>());
  EXPECT_FALSE(mt::isFixedSize<MyWithHeader>());

  EXPECT_FALSE(mt::hasHeader<MyArrayOfFixedLength>());
  EXPECT_FALSE(mt::hasHeader<MyArrayOfVariableLength>());
  EXPECT_FALSE(mt::hasHeader<MyEmbeddedFixedLength>());
  EXPECT_FALSE(mt::hasHeader<MyEmbeddedVariableLength>());
  EXPECT_FALSE(mt::hasHeader<MyFixedLength>());
  EXPECT_FALSE(mt::hasHeader<MyVariableLength>());
  EXPECT_TRUE(mt::hasHeader<MyWithHeader>());

  EXPECT_FALSE(mt::isSimple<MyArrayOfFixedLength>());
  EXPECT_FALSE(mt::isSimple<MyArrayOfVariableLength>());
  EXPECT_FALSE(mt::isSimple<MyEmbeddedFixedLength>());
  EXPECT_FALSE(mt::isSimple<MyEmbeddedVariableLength>());
  EXPECT_FALSE(mt::isSimple<MyFixedLength>());
  EXPECT_FALSE(mt::isSimple<MyVariableLength>());
  EXPECT_FALSE(mt::isSimple<MyWithHeader>());
}

#define SERIALIZATION_COMPILATION_TEST(Type) \
  TEST(GeneratedMessages, serialization_##Type) \
  { \
    Type ser_val, deser_val; \
    serializeAndDeserialize(ser_val, deser_val); \
  }

SERIALIZATION_COMPILATION_TEST(MyArrayOfFixedLength);
SERIALIZATION_COMPILATION_TEST(MyArrayOfVariableLength);
SERIALIZATION_COMPILATION_TEST(MyEmbeddedFixedLength);
SERIALIZATION_COMPILATION_TEST(MyEmbeddedVariableLength);
SERIALIZATION_COMPILATION_TEST(MyFixedLength);
SERIALIZATION_COMPILATION_TEST(MyVariableLength);
SERIALIZATION_COMPILATION_TEST(MyWithHeader);

int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}



