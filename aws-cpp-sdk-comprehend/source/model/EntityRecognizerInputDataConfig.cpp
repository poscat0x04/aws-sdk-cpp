﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityRecognizerInputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

EntityRecognizerInputDataConfig::EntityRecognizerInputDataConfig() : 
    m_entityTypesHasBeenSet(false),
    m_documentsHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_entityListHasBeenSet(false)
{
}

EntityRecognizerInputDataConfig::EntityRecognizerInputDataConfig(JsonView jsonValue) : 
    m_entityTypesHasBeenSet(false),
    m_documentsHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_entityListHasBeenSet(false)
{
  *this = jsonValue;
}

EntityRecognizerInputDataConfig& EntityRecognizerInputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EntityTypes"))
  {
    Array<JsonView> entityTypesJsonList = jsonValue.GetArray("EntityTypes");
    for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
    {
      m_entityTypes.push_back(entityTypesJsonList[entityTypesIndex].AsObject());
    }
    m_entityTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Documents"))
  {
    m_documents = jsonValue.GetObject("Documents");

    m_documentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Annotations"))
  {
    m_annotations = jsonValue.GetObject("Annotations");

    m_annotationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityList"))
  {
    m_entityList = jsonValue.GetObject("EntityList");

    m_entityListHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityRecognizerInputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_entityTypesHasBeenSet)
  {
   Array<JsonValue> entityTypesJsonList(m_entityTypes.size());
   for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
   {
     entityTypesJsonList[entityTypesIndex].AsObject(m_entityTypes[entityTypesIndex].Jsonize());
   }
   payload.WithArray("EntityTypes", std::move(entityTypesJsonList));

  }

  if(m_documentsHasBeenSet)
  {
   payload.WithObject("Documents", m_documents.Jsonize());

  }

  if(m_annotationsHasBeenSet)
  {
   payload.WithObject("Annotations", m_annotations.Jsonize());

  }

  if(m_entityListHasBeenSet)
  {
   payload.WithObject("EntityList", m_entityList.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
