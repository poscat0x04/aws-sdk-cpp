﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AvailabilityZoneState.h>
#include <aws/ec2/model/AvailabilityZoneOptInStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AvailabilityZoneMessage.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an Availability Zone or Local Zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AvailabilityZone
  {
  public:
    AvailabilityZone();
    AvailabilityZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    AvailabilityZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state of the Availability Zone or Local Zone.</p>
     */
    inline const AvailabilityZoneState& GetState() const{ return m_state; }

    /**
     * <p>The state of the Availability Zone or Local Zone.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the Availability Zone or Local Zone.</p>
     */
    inline void SetState(const AvailabilityZoneState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Availability Zone or Local Zone.</p>
     */
    inline void SetState(AvailabilityZoneState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the Availability Zone or Local Zone.</p>
     */
    inline AvailabilityZone& WithState(const AvailabilityZoneState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the Availability Zone or Local Zone.</p>
     */
    inline AvailabilityZone& WithState(AvailabilityZoneState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p> For Availability Zones, this parameter always has the value of
     * <code>opt-in-not-required</code>.</p> <p>For Local Zones, this parameter is the
     * opt in status. The possible values are <code>opted-in</code>, and
     * <code>not-opted-in</code>.</p>
     */
    inline const AvailabilityZoneOptInStatus& GetOptInStatus() const{ return m_optInStatus; }

    /**
     * <p> For Availability Zones, this parameter always has the value of
     * <code>opt-in-not-required</code>.</p> <p>For Local Zones, this parameter is the
     * opt in status. The possible values are <code>opted-in</code>, and
     * <code>not-opted-in</code>.</p>
     */
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }

    /**
     * <p> For Availability Zones, this parameter always has the value of
     * <code>opt-in-not-required</code>.</p> <p>For Local Zones, this parameter is the
     * opt in status. The possible values are <code>opted-in</code>, and
     * <code>not-opted-in</code>.</p>
     */
    inline void SetOptInStatus(const AvailabilityZoneOptInStatus& value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }

    /**
     * <p> For Availability Zones, this parameter always has the value of
     * <code>opt-in-not-required</code>.</p> <p>For Local Zones, this parameter is the
     * opt in status. The possible values are <code>opted-in</code>, and
     * <code>not-opted-in</code>.</p>
     */
    inline void SetOptInStatus(AvailabilityZoneOptInStatus&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::move(value); }

    /**
     * <p> For Availability Zones, this parameter always has the value of
     * <code>opt-in-not-required</code>.</p> <p>For Local Zones, this parameter is the
     * opt in status. The possible values are <code>opted-in</code>, and
     * <code>not-opted-in</code>.</p>
     */
    inline AvailabilityZone& WithOptInStatus(const AvailabilityZoneOptInStatus& value) { SetOptInStatus(value); return *this;}

    /**
     * <p> For Availability Zones, this parameter always has the value of
     * <code>opt-in-not-required</code>.</p> <p>For Local Zones, this parameter is the
     * opt in status. The possible values are <code>opted-in</code>, and
     * <code>not-opted-in</code>.</p>
     */
    inline AvailabilityZone& WithOptInStatus(AvailabilityZoneOptInStatus&& value) { SetOptInStatus(std::move(value)); return *this;}


    /**
     * <p>Any messages about the Availability Zone or Local Zone.</p>
     */
    inline const Aws::Vector<AvailabilityZoneMessage>& GetMessages() const{ return m_messages; }

    /**
     * <p>Any messages about the Availability Zone or Local Zone.</p>
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * <p>Any messages about the Availability Zone or Local Zone.</p>
     */
    inline void SetMessages(const Aws::Vector<AvailabilityZoneMessage>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>Any messages about the Availability Zone or Local Zone.</p>
     */
    inline void SetMessages(Aws::Vector<AvailabilityZoneMessage>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>Any messages about the Availability Zone or Local Zone.</p>
     */
    inline AvailabilityZone& WithMessages(const Aws::Vector<AvailabilityZoneMessage>& value) { SetMessages(value); return *this;}

    /**
     * <p>Any messages about the Availability Zone or Local Zone.</p>
     */
    inline AvailabilityZone& WithMessages(Aws::Vector<AvailabilityZoneMessage>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>Any messages about the Availability Zone or Local Zone.</p>
     */
    inline AvailabilityZone& AddMessages(const AvailabilityZoneMessage& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>Any messages about the Availability Zone or Local Zone.</p>
     */
    inline AvailabilityZone& AddMessages(AvailabilityZoneMessage&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the Region.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The name of the Region.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The name of the Region.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The name of the Region.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The name of the Region.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The name of the Region.</p>
     */
    inline AvailabilityZone& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The name of the Region.</p>
     */
    inline AvailabilityZone& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Region.</p>
     */
    inline AvailabilityZone& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>The name of the Availability Zone or Local Zone.</p>
     */
    inline const Aws::String& GetZoneName() const{ return m_zoneName; }

    /**
     * <p>The name of the Availability Zone or Local Zone.</p>
     */
    inline bool ZoneNameHasBeenSet() const { return m_zoneNameHasBeenSet; }

    /**
     * <p>The name of the Availability Zone or Local Zone.</p>
     */
    inline void SetZoneName(const Aws::String& value) { m_zoneNameHasBeenSet = true; m_zoneName = value; }

    /**
     * <p>The name of the Availability Zone or Local Zone.</p>
     */
    inline void SetZoneName(Aws::String&& value) { m_zoneNameHasBeenSet = true; m_zoneName = std::move(value); }

    /**
     * <p>The name of the Availability Zone or Local Zone.</p>
     */
    inline void SetZoneName(const char* value) { m_zoneNameHasBeenSet = true; m_zoneName.assign(value); }

    /**
     * <p>The name of the Availability Zone or Local Zone.</p>
     */
    inline AvailabilityZone& WithZoneName(const Aws::String& value) { SetZoneName(value); return *this;}

    /**
     * <p>The name of the Availability Zone or Local Zone.</p>
     */
    inline AvailabilityZone& WithZoneName(Aws::String&& value) { SetZoneName(std::move(value)); return *this;}

    /**
     * <p>The name of the Availability Zone or Local Zone.</p>
     */
    inline AvailabilityZone& WithZoneName(const char* value) { SetZoneName(value); return *this;}


    /**
     * <p>The ID of the Availability Zone or Local Zone.</p>
     */
    inline const Aws::String& GetZoneId() const{ return m_zoneId; }

    /**
     * <p>The ID of the Availability Zone or Local Zone.</p>
     */
    inline bool ZoneIdHasBeenSet() const { return m_zoneIdHasBeenSet; }

    /**
     * <p>The ID of the Availability Zone or Local Zone.</p>
     */
    inline void SetZoneId(const Aws::String& value) { m_zoneIdHasBeenSet = true; m_zoneId = value; }

    /**
     * <p>The ID of the Availability Zone or Local Zone.</p>
     */
    inline void SetZoneId(Aws::String&& value) { m_zoneIdHasBeenSet = true; m_zoneId = std::move(value); }

    /**
     * <p>The ID of the Availability Zone or Local Zone.</p>
     */
    inline void SetZoneId(const char* value) { m_zoneIdHasBeenSet = true; m_zoneId.assign(value); }

    /**
     * <p>The ID of the Availability Zone or Local Zone.</p>
     */
    inline AvailabilityZone& WithZoneId(const Aws::String& value) { SetZoneId(value); return *this;}

    /**
     * <p>The ID of the Availability Zone or Local Zone.</p>
     */
    inline AvailabilityZone& WithZoneId(Aws::String&& value) { SetZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Availability Zone or Local Zone.</p>
     */
    inline AvailabilityZone& WithZoneId(const char* value) { SetZoneId(value); return *this;}


    /**
     * <p> For Availability Zones, this parameter has the same value as the Region
     * name.</p> <p>For Local Zones, the name of the associated group, for example
     * <code>us-west-2-lax-1</code>.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p> For Availability Zones, this parameter has the same value as the Region
     * name.</p> <p>For Local Zones, the name of the associated group, for example
     * <code>us-west-2-lax-1</code>.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p> For Availability Zones, this parameter has the same value as the Region
     * name.</p> <p>For Local Zones, the name of the associated group, for example
     * <code>us-west-2-lax-1</code>.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p> For Availability Zones, this parameter has the same value as the Region
     * name.</p> <p>For Local Zones, the name of the associated group, for example
     * <code>us-west-2-lax-1</code>.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p> For Availability Zones, this parameter has the same value as the Region
     * name.</p> <p>For Local Zones, the name of the associated group, for example
     * <code>us-west-2-lax-1</code>.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p> For Availability Zones, this parameter has the same value as the Region
     * name.</p> <p>For Local Zones, the name of the associated group, for example
     * <code>us-west-2-lax-1</code>.</p>
     */
    inline AvailabilityZone& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p> For Availability Zones, this parameter has the same value as the Region
     * name.</p> <p>For Local Zones, the name of the associated group, for example
     * <code>us-west-2-lax-1</code>.</p>
     */
    inline AvailabilityZone& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p> For Availability Zones, this parameter has the same value as the Region
     * name.</p> <p>For Local Zones, the name of the associated group, for example
     * <code>us-west-2-lax-1</code>.</p>
     */
    inline AvailabilityZone& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The name of the location from which the address is advertised.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }

    /**
     * <p>The name of the location from which the address is advertised.</p>
     */
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }

    /**
     * <p>The name of the location from which the address is advertised.</p>
     */
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = value; }

    /**
     * <p>The name of the location from which the address is advertised.</p>
     */
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::move(value); }

    /**
     * <p>The name of the location from which the address is advertised.</p>
     */
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup.assign(value); }

    /**
     * <p>The name of the location from which the address is advertised.</p>
     */
    inline AvailabilityZone& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}

    /**
     * <p>The name of the location from which the address is advertised.</p>
     */
    inline AvailabilityZone& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the location from which the address is advertised.</p>
     */
    inline AvailabilityZone& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}

  private:

    AvailabilityZoneState m_state;
    bool m_stateHasBeenSet;

    AvailabilityZoneOptInStatus m_optInStatus;
    bool m_optInStatusHasBeenSet;

    Aws::Vector<AvailabilityZoneMessage> m_messages;
    bool m_messagesHasBeenSet;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet;

    Aws::String m_zoneName;
    bool m_zoneNameHasBeenSet;

    Aws::String m_zoneId;
    bool m_zoneIdHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
