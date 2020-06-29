﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/Fleet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

Fleet::Fleet() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageArnHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_fleetType(FleetType::NOT_SET),
    m_fleetTypeHasBeenSet(false),
    m_computeCapacityStatusHasBeenSet(false),
    m_maxUserDurationInSeconds(0),
    m_maxUserDurationInSecondsHasBeenSet(false),
    m_disconnectTimeoutInSeconds(0),
    m_disconnectTimeoutInSecondsHasBeenSet(false),
    m_state(FleetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_fleetErrorsHasBeenSet(false),
    m_enableDefaultInternetAccess(false),
    m_enableDefaultInternetAccessHasBeenSet(false),
    m_domainJoinInfoHasBeenSet(false),
    m_idleDisconnectTimeoutInSeconds(0),
    m_idleDisconnectTimeoutInSecondsHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
}

Fleet::Fleet(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageArnHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_fleetType(FleetType::NOT_SET),
    m_fleetTypeHasBeenSet(false),
    m_computeCapacityStatusHasBeenSet(false),
    m_maxUserDurationInSeconds(0),
    m_maxUserDurationInSecondsHasBeenSet(false),
    m_disconnectTimeoutInSeconds(0),
    m_disconnectTimeoutInSecondsHasBeenSet(false),
    m_state(FleetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_fleetErrorsHasBeenSet(false),
    m_enableDefaultInternetAccess(false),
    m_enableDefaultInternetAccessHasBeenSet(false),
    m_domainJoinInfoHasBeenSet(false),
    m_idleDisconnectTimeoutInSeconds(0),
    m_idleDisconnectTimeoutInSecondsHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

Fleet& Fleet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageName"))
  {
    m_imageName = jsonValue.GetString("ImageName");

    m_imageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageArn"))
  {
    m_imageArn = jsonValue.GetString("ImageArn");

    m_imageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FleetType"))
  {
    m_fleetType = FleetTypeMapper::GetFleetTypeForName(jsonValue.GetString("FleetType"));

    m_fleetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputeCapacityStatus"))
  {
    m_computeCapacityStatus = jsonValue.GetObject("ComputeCapacityStatus");

    m_computeCapacityStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxUserDurationInSeconds"))
  {
    m_maxUserDurationInSeconds = jsonValue.GetInteger("MaxUserDurationInSeconds");

    m_maxUserDurationInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisconnectTimeoutInSeconds"))
  {
    m_disconnectTimeoutInSeconds = jsonValue.GetInteger("DisconnectTimeoutInSeconds");

    m_disconnectTimeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = FleetStateMapper::GetFleetStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FleetErrors"))
  {
    Array<JsonView> fleetErrorsJsonList = jsonValue.GetArray("FleetErrors");
    for(unsigned fleetErrorsIndex = 0; fleetErrorsIndex < fleetErrorsJsonList.GetLength(); ++fleetErrorsIndex)
    {
      m_fleetErrors.push_back(fleetErrorsJsonList[fleetErrorsIndex].AsObject());
    }
    m_fleetErrorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableDefaultInternetAccess"))
  {
    m_enableDefaultInternetAccess = jsonValue.GetBool("EnableDefaultInternetAccess");

    m_enableDefaultInternetAccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainJoinInfo"))
  {
    m_domainJoinInfo = jsonValue.GetObject("DomainJoinInfo");

    m_domainJoinInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdleDisconnectTimeoutInSeconds"))
  {
    m_idleDisconnectTimeoutInSeconds = jsonValue.GetInteger("IdleDisconnectTimeoutInSeconds");

    m_idleDisconnectTimeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Fleet::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_imageArnHasBeenSet)
  {
   payload.WithString("ImageArn", m_imageArn);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_fleetTypeHasBeenSet)
  {
   payload.WithString("FleetType", FleetTypeMapper::GetNameForFleetType(m_fleetType));
  }

  if(m_computeCapacityStatusHasBeenSet)
  {
   payload.WithObject("ComputeCapacityStatus", m_computeCapacityStatus.Jsonize());

  }

  if(m_maxUserDurationInSecondsHasBeenSet)
  {
   payload.WithInteger("MaxUserDurationInSeconds", m_maxUserDurationInSeconds);

  }

  if(m_disconnectTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("DisconnectTimeoutInSeconds", m_disconnectTimeoutInSeconds);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", FleetStateMapper::GetNameForFleetState(m_state));
  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_fleetErrorsHasBeenSet)
  {
   Array<JsonValue> fleetErrorsJsonList(m_fleetErrors.size());
   for(unsigned fleetErrorsIndex = 0; fleetErrorsIndex < fleetErrorsJsonList.GetLength(); ++fleetErrorsIndex)
   {
     fleetErrorsJsonList[fleetErrorsIndex].AsObject(m_fleetErrors[fleetErrorsIndex].Jsonize());
   }
   payload.WithArray("FleetErrors", std::move(fleetErrorsJsonList));

  }

  if(m_enableDefaultInternetAccessHasBeenSet)
  {
   payload.WithBool("EnableDefaultInternetAccess", m_enableDefaultInternetAccess);

  }

  if(m_domainJoinInfoHasBeenSet)
  {
   payload.WithObject("DomainJoinInfo", m_domainJoinInfo.Jsonize());

  }

  if(m_idleDisconnectTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("IdleDisconnectTimeoutInSeconds", m_idleDisconnectTimeoutInSeconds);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
