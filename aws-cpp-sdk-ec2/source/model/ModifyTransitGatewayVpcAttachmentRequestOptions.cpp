﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyTransitGatewayVpcAttachmentRequestOptions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ModifyTransitGatewayVpcAttachmentRequestOptions::ModifyTransitGatewayVpcAttachmentRequestOptions() : 
    m_dnsSupport(DnsSupportValue::NOT_SET),
    m_dnsSupportHasBeenSet(false),
    m_ipv6Support(Ipv6SupportValue::NOT_SET),
    m_ipv6SupportHasBeenSet(false)
{
}

ModifyTransitGatewayVpcAttachmentRequestOptions::ModifyTransitGatewayVpcAttachmentRequestOptions(const XmlNode& xmlNode) : 
    m_dnsSupport(DnsSupportValue::NOT_SET),
    m_dnsSupportHasBeenSet(false),
    m_ipv6Support(Ipv6SupportValue::NOT_SET),
    m_ipv6SupportHasBeenSet(false)
{
  *this = xmlNode;
}

ModifyTransitGatewayVpcAttachmentRequestOptions& ModifyTransitGatewayVpcAttachmentRequestOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dnsSupportNode = resultNode.FirstChild("DnsSupport");
    if(!dnsSupportNode.IsNull())
    {
      m_dnsSupport = DnsSupportValueMapper::GetDnsSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dnsSupportNode.GetText()).c_str()).c_str());
      m_dnsSupportHasBeenSet = true;
    }
    XmlNode ipv6SupportNode = resultNode.FirstChild("Ipv6Support");
    if(!ipv6SupportNode.IsNull())
    {
      m_ipv6Support = Ipv6SupportValueMapper::GetIpv6SupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipv6SupportNode.GetText()).c_str()).c_str());
      m_ipv6SupportHasBeenSet = true;
    }
  }

  return *this;
}

void ModifyTransitGatewayVpcAttachmentRequestOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dnsSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsSupport=" << DnsSupportValueMapper::GetNameForDnsSupportValue(m_dnsSupport) << "&";
  }

  if(m_ipv6SupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6Support=" << Ipv6SupportValueMapper::GetNameForIpv6SupportValue(m_ipv6Support) << "&";
  }

}

void ModifyTransitGatewayVpcAttachmentRequestOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dnsSupportHasBeenSet)
  {
      oStream << location << ".DnsSupport=" << DnsSupportValueMapper::GetNameForDnsSupportValue(m_dnsSupport) << "&";
  }
  if(m_ipv6SupportHasBeenSet)
  {
      oStream << location << ".Ipv6Support=" << Ipv6SupportValueMapper::GetNameForIpv6SupportValue(m_ipv6Support) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
