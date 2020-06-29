﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ShardIteratorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Kinesis
{
namespace Model
{

  class AWS_KINESIS_API StartingPosition
  {
  public:
    StartingPosition();
    StartingPosition(Aws::Utils::Json::JsonView jsonValue);
    StartingPosition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ShardIteratorType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const ShardIteratorType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(ShardIteratorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline StartingPosition& WithType(const ShardIteratorType& value) { SetType(value); return *this;}

    
    inline StartingPosition& WithType(ShardIteratorType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetSequenceNumber() const{ return m_sequenceNumber; }

    
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }

    
    inline void SetSequenceNumber(const Aws::String& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = value; }

    
    inline void SetSequenceNumber(Aws::String&& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = std::move(value); }

    
    inline void SetSequenceNumber(const char* value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber.assign(value); }

    
    inline StartingPosition& WithSequenceNumber(const Aws::String& value) { SetSequenceNumber(value); return *this;}

    
    inline StartingPosition& WithSequenceNumber(Aws::String&& value) { SetSequenceNumber(std::move(value)); return *this;}

    
    inline StartingPosition& WithSequenceNumber(const char* value) { SetSequenceNumber(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    
    inline StartingPosition& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    
    inline StartingPosition& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    ShardIteratorType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
