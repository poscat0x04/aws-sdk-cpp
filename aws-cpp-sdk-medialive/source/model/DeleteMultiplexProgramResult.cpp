﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DeleteMultiplexProgramResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteMultiplexProgramResult::DeleteMultiplexProgramResult()
{
}

DeleteMultiplexProgramResult::DeleteMultiplexProgramResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteMultiplexProgramResult& DeleteMultiplexProgramResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");

  }

  if(jsonValue.ValueExists("multiplexProgramSettings"))
  {
    m_multiplexProgramSettings = jsonValue.GetObject("multiplexProgramSettings");

  }

  if(jsonValue.ValueExists("packetIdentifiersMap"))
  {
    m_packetIdentifiersMap = jsonValue.GetObject("packetIdentifiersMap");

  }

  if(jsonValue.ValueExists("programName"))
  {
    m_programName = jsonValue.GetString("programName");

  }



  return *this;
}
