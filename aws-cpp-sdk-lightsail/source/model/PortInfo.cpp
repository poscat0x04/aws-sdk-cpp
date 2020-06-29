﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/PortInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

PortInfo::PortInfo() : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_protocol(NetworkProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_cidrsHasBeenSet(false),
    m_cidrListAliasesHasBeenSet(false)
{
}

PortInfo::PortInfo(JsonView jsonValue) : 
    m_fromPort(0),
    m_fromPortHasBeenSet(false),
    m_toPort(0),
    m_toPortHasBeenSet(false),
    m_protocol(NetworkProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_cidrsHasBeenSet(false),
    m_cidrListAliasesHasBeenSet(false)
{
  *this = jsonValue;
}

PortInfo& PortInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fromPort"))
  {
    m_fromPort = jsonValue.GetInteger("fromPort");

    m_fromPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("toPort"))
  {
    m_toPort = jsonValue.GetInteger("toPort");

    m_toPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = NetworkProtocolMapper::GetNetworkProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cidrs"))
  {
    Array<JsonView> cidrsJsonList = jsonValue.GetArray("cidrs");
    for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
    {
      m_cidrs.push_back(cidrsJsonList[cidrsIndex].AsString());
    }
    m_cidrsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cidrListAliases"))
  {
    Array<JsonView> cidrListAliasesJsonList = jsonValue.GetArray("cidrListAliases");
    for(unsigned cidrListAliasesIndex = 0; cidrListAliasesIndex < cidrListAliasesJsonList.GetLength(); ++cidrListAliasesIndex)
    {
      m_cidrListAliases.push_back(cidrListAliasesJsonList[cidrListAliasesIndex].AsString());
    }
    m_cidrListAliasesHasBeenSet = true;
  }

  return *this;
}

JsonValue PortInfo::Jsonize() const
{
  JsonValue payload;

  if(m_fromPortHasBeenSet)
  {
   payload.WithInteger("fromPort", m_fromPort);

  }

  if(m_toPortHasBeenSet)
  {
   payload.WithInteger("toPort", m_toPort);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", NetworkProtocolMapper::GetNameForNetworkProtocol(m_protocol));
  }

  if(m_cidrsHasBeenSet)
  {
   Array<JsonValue> cidrsJsonList(m_cidrs.size());
   for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
   {
     cidrsJsonList[cidrsIndex].AsString(m_cidrs[cidrsIndex]);
   }
   payload.WithArray("cidrs", std::move(cidrsJsonList));

  }

  if(m_cidrListAliasesHasBeenSet)
  {
   Array<JsonValue> cidrListAliasesJsonList(m_cidrListAliases.size());
   for(unsigned cidrListAliasesIndex = 0; cidrListAliasesIndex < cidrListAliasesJsonList.GetLength(); ++cidrListAliasesIndex)
   {
     cidrListAliasesJsonList[cidrListAliasesIndex].AsString(m_cidrListAliases[cidrListAliasesIndex]);
   }
   payload.WithArray("cidrListAliases", std::move(cidrListAliasesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
