﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>The criteria to initiate the increase in rate of rollout for a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AwsJobRateIncreaseCriteria">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API AwsJobRateIncreaseCriteria
  {
  public:
    AwsJobRateIncreaseCriteria();
    AwsJobRateIncreaseCriteria(Aws::Utils::Json::JsonView jsonValue);
    AwsJobRateIncreaseCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When this number of things have been notified, it will initiate an increase
     * in the rollout rate.</p>
     */
    inline int GetNumberOfNotifiedThings() const{ return m_numberOfNotifiedThings; }

    /**
     * <p>When this number of things have been notified, it will initiate an increase
     * in the rollout rate.</p>
     */
    inline bool NumberOfNotifiedThingsHasBeenSet() const { return m_numberOfNotifiedThingsHasBeenSet; }

    /**
     * <p>When this number of things have been notified, it will initiate an increase
     * in the rollout rate.</p>
     */
    inline void SetNumberOfNotifiedThings(int value) { m_numberOfNotifiedThingsHasBeenSet = true; m_numberOfNotifiedThings = value; }

    /**
     * <p>When this number of things have been notified, it will initiate an increase
     * in the rollout rate.</p>
     */
    inline AwsJobRateIncreaseCriteria& WithNumberOfNotifiedThings(int value) { SetNumberOfNotifiedThings(value); return *this;}


    /**
     * <p>When this number of things have succeeded in their job execution, it will
     * initiate an increase in the rollout rate.</p>
     */
    inline int GetNumberOfSucceededThings() const{ return m_numberOfSucceededThings; }

    /**
     * <p>When this number of things have succeeded in their job execution, it will
     * initiate an increase in the rollout rate.</p>
     */
    inline bool NumberOfSucceededThingsHasBeenSet() const { return m_numberOfSucceededThingsHasBeenSet; }

    /**
     * <p>When this number of things have succeeded in their job execution, it will
     * initiate an increase in the rollout rate.</p>
     */
    inline void SetNumberOfSucceededThings(int value) { m_numberOfSucceededThingsHasBeenSet = true; m_numberOfSucceededThings = value; }

    /**
     * <p>When this number of things have succeeded in their job execution, it will
     * initiate an increase in the rollout rate.</p>
     */
    inline AwsJobRateIncreaseCriteria& WithNumberOfSucceededThings(int value) { SetNumberOfSucceededThings(value); return *this;}

  private:

    int m_numberOfNotifiedThings;
    bool m_numberOfNotifiedThingsHasBeenSet;

    int m_numberOfSucceededThings;
    bool m_numberOfSucceededThingsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
