﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CloudFrontOriginAccessIdentityList.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  /**
   * <p>The returned result of the corresponding request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListCloudFrontOriginAccessIdentitiesResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ListCloudFrontOriginAccessIdentities2019_03_26Result
  {
  public:
    ListCloudFrontOriginAccessIdentities2019_03_26Result();
    ListCloudFrontOriginAccessIdentities2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListCloudFrontOriginAccessIdentities2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The <code>CloudFrontOriginAccessIdentityList</code> type. </p>
     */
    inline const CloudFrontOriginAccessIdentityList& GetCloudFrontOriginAccessIdentityList() const{ return m_cloudFrontOriginAccessIdentityList; }

    /**
     * <p>The <code>CloudFrontOriginAccessIdentityList</code> type. </p>
     */
    inline void SetCloudFrontOriginAccessIdentityList(const CloudFrontOriginAccessIdentityList& value) { m_cloudFrontOriginAccessIdentityList = value; }

    /**
     * <p>The <code>CloudFrontOriginAccessIdentityList</code> type. </p>
     */
    inline void SetCloudFrontOriginAccessIdentityList(CloudFrontOriginAccessIdentityList&& value) { m_cloudFrontOriginAccessIdentityList = std::move(value); }

    /**
     * <p>The <code>CloudFrontOriginAccessIdentityList</code> type. </p>
     */
    inline ListCloudFrontOriginAccessIdentities2019_03_26Result& WithCloudFrontOriginAccessIdentityList(const CloudFrontOriginAccessIdentityList& value) { SetCloudFrontOriginAccessIdentityList(value); return *this;}

    /**
     * <p>The <code>CloudFrontOriginAccessIdentityList</code> type. </p>
     */
    inline ListCloudFrontOriginAccessIdentities2019_03_26Result& WithCloudFrontOriginAccessIdentityList(CloudFrontOriginAccessIdentityList&& value) { SetCloudFrontOriginAccessIdentityList(std::move(value)); return *this;}

  private:

    CloudFrontOriginAccessIdentityList m_cloudFrontOriginAccessIdentityList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
