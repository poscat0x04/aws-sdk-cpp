﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/GetBootstrapBrokersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBootstrapBrokersResult::GetBootstrapBrokersResult()
{
}

GetBootstrapBrokersResult::GetBootstrapBrokersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBootstrapBrokersResult& GetBootstrapBrokersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("bootstrapBrokerString"))
  {
    m_bootstrapBrokerString = jsonValue.GetString("bootstrapBrokerString");

  }

  if(jsonValue.ValueExists("bootstrapBrokerStringTls"))
  {
    m_bootstrapBrokerStringTls = jsonValue.GetString("bootstrapBrokerStringTls");

  }



  return *this;
}
