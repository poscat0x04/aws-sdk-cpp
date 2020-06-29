﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to get a distribution configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/GetDistributionConfigRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API GetDistributionConfig2019_03_26Request : public CloudFrontRequest
  {
  public:
    GetDistributionConfig2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDistributionConfig"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The distribution's ID. If the ID is empty, an empty distribution
     * configuration is returned.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The distribution's ID. If the ID is empty, an empty distribution
     * configuration is returned.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The distribution's ID. If the ID is empty, an empty distribution
     * configuration is returned.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The distribution's ID. If the ID is empty, an empty distribution
     * configuration is returned.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The distribution's ID. If the ID is empty, an empty distribution
     * configuration is returned.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The distribution's ID. If the ID is empty, an empty distribution
     * configuration is returned.</p>
     */
    inline GetDistributionConfig2019_03_26Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The distribution's ID. If the ID is empty, an empty distribution
     * configuration is returned.</p>
     */
    inline GetDistributionConfig2019_03_26Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The distribution's ID. If the ID is empty, an empty distribution
     * configuration is returned.</p>
     */
    inline GetDistributionConfig2019_03_26Request& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
