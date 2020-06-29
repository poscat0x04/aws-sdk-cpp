﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ExecutionSucceededEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

ExecutionSucceededEventDetails::ExecutionSucceededEventDetails() : 
    m_outputHasBeenSet(false)
{
}

ExecutionSucceededEventDetails::ExecutionSucceededEventDetails(JsonView jsonValue) : 
    m_outputHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionSucceededEventDetails& ExecutionSucceededEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetString("output");

    m_outputHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionSucceededEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_outputHasBeenSet)
  {
   payload.WithString("output", m_output);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
