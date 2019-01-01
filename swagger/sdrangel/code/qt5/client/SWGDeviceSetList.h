/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.4.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGDeviceSetList.h
 *
 * List of device sets opened in this instance
 */

#ifndef SWGDeviceSetList_H_
#define SWGDeviceSetList_H_

#include <QJsonObject>


#include "SWGDeviceSet.h"
#include <QList>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGDeviceSetList: public SWGObject {
public:
    SWGDeviceSetList();
    SWGDeviceSetList(QString* json);
    virtual ~SWGDeviceSetList();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGDeviceSetList* fromJson(QString &jsonString) override;

    qint32 getDevicesetcount();
    void setDevicesetcount(qint32 devicesetcount);

    qint32 getDevicesetfocus();
    void setDevicesetfocus(qint32 devicesetfocus);

    QList<SWGDeviceSet*>* getDeviceSets();
    void setDeviceSets(QList<SWGDeviceSet*>* device_sets);


    virtual bool isSet() override;

private:
    qint32 devicesetcount;
    bool m_devicesetcount_isSet;

    qint32 devicesetfocus;
    bool m_devicesetfocus_isSet;

    QList<SWGDeviceSet*>* device_sets;
    bool m_device_sets_isSet;

};

}

#endif /* SWGDeviceSetList_H_ */
