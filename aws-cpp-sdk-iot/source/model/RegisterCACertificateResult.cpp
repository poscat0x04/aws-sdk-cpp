﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/RegisterCACertificateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterCACertificateResult::RegisterCACertificateResult()
{
}

RegisterCACertificateResult::RegisterCACertificateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RegisterCACertificateResult& RegisterCACertificateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

  }

  if(jsonValue.ValueExists("certificateId"))
  {
    m_certificateId = jsonValue.GetString("certificateId");

  }



  return *this;
}
