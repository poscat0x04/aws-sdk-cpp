﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityRecognizerAnnotations.h>
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

EntityRecognizerAnnotations::EntityRecognizerAnnotations() : 
    m_s3UriHasBeenSet(false)
{
}

EntityRecognizerAnnotations::EntityRecognizerAnnotations(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false)
{
  *this = jsonValue;
}

EntityRecognizerAnnotations& EntityRecognizerAnnotations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityRecognizerAnnotations::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
