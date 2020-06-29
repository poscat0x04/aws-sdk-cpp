﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/DimensionGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

DimensionGroup::DimensionGroup() : 
    m_groupHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

DimensionGroup::DimensionGroup(JsonView jsonValue) : 
    m_groupHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
  *this = jsonValue;
}

DimensionGroup& DimensionGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Group"))
  {
    m_group = jsonValue.GetString("Group");

    m_groupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimensions"))
  {
    Array<JsonView> dimensionsJsonList = jsonValue.GetArray("Dimensions");
    for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
    {
      m_dimensions.push_back(dimensionsJsonList[dimensionsIndex].AsString());
    }
    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = jsonValue.GetInteger("Limit");

    m_limitHasBeenSet = true;
  }

  return *this;
}

JsonValue DimensionGroup::Jsonize() const
{
  JsonValue payload;

  if(m_groupHasBeenSet)
  {
   payload.WithString("Group", m_group);

  }

  if(m_dimensionsHasBeenSet)
  {
   Array<JsonValue> dimensionsJsonList(m_dimensions.size());
   for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
   {
     dimensionsJsonList[dimensionsIndex].AsString(m_dimensions[dimensionsIndex]);
   }
   payload.WithArray("Dimensions", std::move(dimensionsJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
