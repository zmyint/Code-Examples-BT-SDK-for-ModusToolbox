/***************************************************************************//**
* File Name: cycfg_bt.h
* Version: 1.1
*
* Description:
* Bluetooth Configurator configuration.
* This file should not be modified. It was automatically generated by
* Bluetooth Configurator 1.1.0 build 216
*
********************************************************************************
* Copyright 2019 Cypress Semiconductor Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#if !defined(CYCFG_BT_H)
#define CYCFG_BT_H

/*
BLE_CONFIG_START
<?xml version="1.0"?>
<Configuration major="1" minor="1" device="20xxx">
    <Profiles>
        <Profile name="GATT">
            <ProfileRoles>
                <ProfileRole type="Server">
                    <ProfileRoleProperties>
                        <Property id="Name" value="Server"/>
                    </ProfileRoleProperties>
                    <Services>
                        <Service type="org.bluetooth.service.generic_access">
                            <ServiceProperties>
                                <Property id="EntityID" value="{6d420c3b-f77e-4e05-b486-1ee4ae9920dd}"/>
                                <Property id="ServiceDeclaration" value="Primary"/>
                            </ServiceProperties>
                            <Characteristics>
                                <Characteristic type="org.bluetooth.characteristic.gap.device_name">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Name"/>
                                                <Property id="Value" value="Thermistor"/>
                                                <Property id="Format" value="f_utf8s"/>
                                                <Property id="ByteLength" value="10"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Read"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Write"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="true"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="false"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors/>
                                </Characteristic>
                                <Characteristic type="org.bluetooth.characteristic.gap.appearance">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Category"/>
                                                <Property id="EnumValue" value="768"/>
                                                <Property id="Format" value="f_16bit"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Read"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="true"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="false"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors/>
                                </Characteristic>
                            </Characteristics>
                        </Service>
                        <Service type="org.bluetooth.service.generic_attribute">
                            <ServiceProperties>
                                <Property id="EntityID" value="{b0b95f31-1d3b-45bb-b1b8-589db71aff76}"/>
                                <Property id="ServiceDeclaration" value="Primary"/>
                            </ServiceProperties>
                            <Characteristics/>
                        </Service>
                        <Service type="org.bluetooth.service.environmental_sensing">
                            <ServiceProperties>
                                <Property id="EntityID" value="{9e207d0c-5258-4dfe-945e-4f0c7ac269e6}"/>
                                <Property id="ServiceDeclaration" value="Primary"/>
                            </ServiceProperties>
                            <Characteristics>
                                <Characteristic type="org.bluetooth.characteristic.temperature">
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="Temperature"/>
                                                <Property id="Value" value=""/>
                                                <Property id="Format" value="f_sint16"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Read"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="true"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Notify"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="WritableAuxiliaries"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="ExtendedProperties"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="true"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="false"/>
                                        <Property id="Write" value="false"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors>
                                        <Descriptor type="org.bluetooth.descriptor.gatt.client_characteristic_configuration">
                                            <Fields>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Properties"/>
                                                        <Property id="Value" value=""/>
                                                        <Property id="Format" value="f_16bit"/>
                                                    </FieldProperties>
                                                    <BitField>
                                                        <Property id="BitValue" value="0"/>
                                                        <Property id="BitValue" value="0"/>
                                                    </BitField>
                                                </Field>
                                            </Fields>
                                            <Properties>
                                                <BleProperty>
                                                    <Property id="PropertyType" value="Read"/>
                                                    <Property id="Present" value="true"/>
                                                    <Property id="Mandatory" value="true"/>
                                                </BleProperty>
                                                <BleProperty>
                                                    <Property id="PropertyType" value="Write"/>
                                                    <Property id="Present" value="true"/>
                                                    <Property id="Mandatory" value="true"/>
                                                </BleProperty>
                                            </Properties>
                                            <Permission>
                                                <Property id="Read" value="true"/>
                                                <Property id="ReadAuthenticated" value="false"/>
                                                <Property id="VariableLength" value="false"/>
                                                <Property id="Write" value="true"/>
                                                <Property id="WriteNoResponse" value="false"/>
                                                <Property id="WriteAuthenticated" value="false"/>
                                                <Property id="WriteReliable" value="false"/>
                                            </Permission>
                                        </Descriptor>
                                        <Descriptor type="org.bluetooth.descriptor.es_measurement">
                                            <Fields>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Flags"/>
                                                        <Property id="EnumValue" value="0"/>
                                                        <Property id="Format" value="f_16bit"/>
                                                    </FieldProperties>
                                                </Field>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Sampling Function"/>
                                                        <Property id="EnumValue" value="1"/>
                                                        <Property id="Format" value="f_uint8"/>
                                                    </FieldProperties>
                                                </Field>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Measurement Period"/>
                                                        <Property id="Value" value="0"/>
                                                        <Property id="Format" value="f_uint24"/>
                                                    </FieldProperties>
                                                </Field>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Update Interval"/>
                                                        <Property id="Value" value="5"/>
                                                        <Property id="Format" value="f_uint24"/>
                                                    </FieldProperties>
                                                </Field>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Application"/>
                                                        <Property id="EnumValue" value="0"/>
                                                        <Property id="Format" value="f_uint8"/>
                                                    </FieldProperties>
                                                </Field>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Measurement Uncertainty"/>
                                                        <Property id="Value" value="10"/>
                                                        <Property id="Format" value="f_uint8"/>
                                                    </FieldProperties>
                                                </Field>
                                            </Fields>
                                            <Properties>
                                                <BleProperty>
                                                    <Property id="PropertyType" value="Read"/>
                                                    <Property id="Present" value="true"/>
                                                    <Property id="Mandatory" value="true"/>
                                                </BleProperty>
                                            </Properties>
                                            <Permission>
                                                <Property id="Read" value="true"/>
                                                <Property id="ReadAuthenticated" value="false"/>
                                                <Property id="VariableLength" value="false"/>
                                                <Property id="Write" value="false"/>
                                                <Property id="WriteNoResponse" value="false"/>
                                                <Property id="WriteAuthenticated" value="false"/>
                                                <Property id="WriteReliable" value="false"/>
                                            </Permission>
                                        </Descriptor>
                                        <Descriptor type="org.bluetooth.descriptor.valid_range">
                                            <Fields>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Lower inclusive value"/>
                                                        <Property id="Value" value="-40"/>
                                                        <Property id="Format" value="f_sint16"/>
                                                    </FieldProperties>
                                                </Field>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Upper inclusive value"/>
                                                        <Property id="Value" value="125"/>
                                                        <Property id="Format" value="f_sint16"/>
                                                    </FieldProperties>
                                                </Field>
                                            </Fields>
                                            <Properties>
                                                <BleProperty>
                                                    <Property id="PropertyType" value="Read"/>
                                                    <Property id="Present" value="true"/>
                                                    <Property id="Mandatory" value="true"/>
                                                </BleProperty>
                                            </Properties>
                                            <Permission>
                                                <Property id="Read" value="true"/>
                                                <Property id="ReadAuthenticated" value="false"/>
                                                <Property id="VariableLength" value="false"/>
                                                <Property id="Write" value="false"/>
                                                <Property id="WriteNoResponse" value="false"/>
                                                <Property id="WriteAuthenticated" value="false"/>
                                                <Property id="WriteReliable" value="false"/>
                                            </Permission>
                                        </Descriptor>
                                    </Descriptors>
                                </Characteristic>
                            </Characteristics>
                        </Service>
                        <Service type="org.bluetooth.service.custom">
                            <ServiceProperties>
                                <Property id="EntityID" value="{86e10793-34f2-4f54-a72c-ef8faba96699}"/>
                                <Property id="DisplayName" value="FWUpgradeService"/>
                                <Property id="UUID" value="aE5D1E47-5C13-43A0-8635-82AD38A1381F"/>
                                <Property id="ServiceDeclaration" value="Primary"/>
                            </ServiceProperties>
                            <Characteristics>
                                <Characteristic type="org.bluetooth.characteristic.custom">
                                    <CharacteristicProperties>
                                        <Property id="DisplayName" value="FWUpgradeContolPoint"/>
                                        <Property id="UUID" value="a3DD50BF-F7A7-4E99-838E-570A086C661B"/>
                                    </CharacteristicProperties>
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="New field"/>
                                                <Property id="Value" value=""/>
                                                <Property id="Format" value="f_utf8s"/>
                                                <Property id="ByteLength" value="0"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Read"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Write"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="WriteWithoutResponse"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="AuthenticatedSignedWrites"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="ReliableWrite"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Notify"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Indicate"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="WritableAuxiliaries"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Broadcast"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="false"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="true"/>
                                        <Property id="Write" value="true"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors>
                                        <Descriptor type="org.bluetooth.descriptor.gatt.client_characteristic_configuration">
                                            <Fields>
                                                <Field>
                                                    <FieldProperties>
                                                        <Property id="Name" value="Properties"/>
                                                        <Property id="Value" value=""/>
                                                        <Property id="Format" value="f_16bit"/>
                                                    </FieldProperties>
                                                    <BitField>
                                                        <Property id="BitValue" value="0"/>
                                                        <Property id="BitValue" value="0"/>
                                                    </BitField>
                                                </Field>
                                            </Fields>
                                            <Properties>
                                                <BleProperty>
                                                    <Property id="PropertyType" value="Read"/>
                                                    <Property id="Present" value="true"/>
                                                    <Property id="Mandatory" value="false"/>
                                                </BleProperty>
                                                <BleProperty>
                                                    <Property id="PropertyType" value="Write"/>
                                                    <Property id="Present" value="true"/>
                                                    <Property id="Mandatory" value="false"/>
                                                </BleProperty>
                                            </Properties>
                                            <Permission>
                                                <Property id="Read" value="true"/>
                                                <Property id="ReadAuthenticated" value="false"/>
                                                <Property id="VariableLength" value="false"/>
                                                <Property id="Write" value="true"/>
                                                <Property id="WriteNoResponse" value="false"/>
                                                <Property id="WriteAuthenticated" value="false"/>
                                                <Property id="WriteReliable" value="false"/>
                                            </Permission>
                                        </Descriptor>
                                    </Descriptors>
                                </Characteristic>
                                <Characteristic type="org.bluetooth.characteristic.custom">
                                    <CharacteristicProperties>
                                        <Property id="DisplayName" value="FWUpgradeData"/>
                                        <Property id="UUID" value="a2E86C7A-D961-4091-B74F-2409E72EFE26"/>
                                    </CharacteristicProperties>
                                    <Fields>
                                        <Field>
                                            <FieldProperties>
                                                <Property id="Name" value="New field"/>
                                                <Property id="Value" value=""/>
                                                <Property id="Format" value="f_utf8s"/>
                                                <Property id="ByteLength" value="0"/>
                                            </FieldProperties>
                                        </Field>
                                    </Fields>
                                    <Properties>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Read"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Write"/>
                                            <Property id="Present" value="true"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="WriteWithoutResponse"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="AuthenticatedSignedWrites"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="ReliableWrite"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Notify"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Indicate"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="WritableAuxiliaries"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                        <BleProperty>
                                            <Property id="PropertyType" value="Broadcast"/>
                                            <Property id="Present" value="false"/>
                                            <Property id="Mandatory" value="false"/>
                                        </BleProperty>
                                    </Properties>
                                    <Permission>
                                        <Property id="Read" value="false"/>
                                        <Property id="ReadAuthenticated" value="false"/>
                                        <Property id="VariableLength" value="true"/>
                                        <Property id="Write" value="true"/>
                                        <Property id="WriteNoResponse" value="false"/>
                                        <Property id="WriteAuthenticated" value="false"/>
                                        <Property id="WriteReliable" value="false"/>
                                    </Permission>
                                    <Descriptors/>
                                </Characteristic>
                            </Characteristics>
                        </Service>
                    </Services>
                </ProfileRole>
            </ProfileRoles>
        </Profile>
    </Profiles>
</Configuration>
BLE_CONFIG_END
*/

#endif /* CYCFG_BT_H */

/* [] END OF FILE */
