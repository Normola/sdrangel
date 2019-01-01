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


#include "SWGAudioOutputDevice.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGAudioOutputDevice::SWGAudioOutputDevice(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAudioOutputDevice::SWGAudioOutputDevice() {
    name = nullptr;
    m_name_isSet = false;
    index = 0;
    m_index_isSet = false;
    sample_rate = 0;
    m_sample_rate_isSet = false;
    is_system_default = 0;
    m_is_system_default_isSet = false;
    default_unregistered = 0;
    m_default_unregistered_isSet = false;
    copy_to_udp = 0;
    m_copy_to_udp_isSet = false;
    udp_uses_rtp = 0;
    m_udp_uses_rtp_isSet = false;
    udp_channel_mode = 0;
    m_udp_channel_mode_isSet = false;
    udp_address = nullptr;
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
}

SWGAudioOutputDevice::~SWGAudioOutputDevice() {
    this->cleanup();
}

void
SWGAudioOutputDevice::init() {
    name = new QString("");
    m_name_isSet = false;
    index = 0;
    m_index_isSet = false;
    sample_rate = 0;
    m_sample_rate_isSet = false;
    is_system_default = 0;
    m_is_system_default_isSet = false;
    default_unregistered = 0;
    m_default_unregistered_isSet = false;
    copy_to_udp = 0;
    m_copy_to_udp_isSet = false;
    udp_uses_rtp = 0;
    m_udp_uses_rtp_isSet = false;
    udp_channel_mode = 0;
    m_udp_channel_mode_isSet = false;
    udp_address = new QString("");
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
}

void
SWGAudioOutputDevice::cleanup() {
    if(name != nullptr) { 
        delete name;
    }







    if(udp_address != nullptr) { 
        delete udp_address;
    }

}

SWGAudioOutputDevice*
SWGAudioOutputDevice::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAudioOutputDevice::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&name, pJson["name"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&index, pJson["index"], "qint32", "");
    
    ::SWGSDRangel::setValue(&sample_rate, pJson["sampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&is_system_default, pJson["isSystemDefault"], "qint32", "");
    
    ::SWGSDRangel::setValue(&default_unregistered, pJson["defaultUnregistered"], "qint32", "");
    
    ::SWGSDRangel::setValue(&copy_to_udp, pJson["copyToUDP"], "qint32", "");
    
    ::SWGSDRangel::setValue(&udp_uses_rtp, pJson["udpUsesRTP"], "qint32", "");
    
    ::SWGSDRangel::setValue(&udp_channel_mode, pJson["udpChannelMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&udp_address, pJson["udpAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&udp_port, pJson["udpPort"], "qint32", "");
    
}

QString
SWGAudioOutputDevice::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGAudioOutputDevice::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(m_index_isSet){
        obj->insert("index", QJsonValue(index));
    }
    if(m_sample_rate_isSet){
        obj->insert("sampleRate", QJsonValue(sample_rate));
    }
    if(m_is_system_default_isSet){
        obj->insert("isSystemDefault", QJsonValue(is_system_default));
    }
    if(m_default_unregistered_isSet){
        obj->insert("defaultUnregistered", QJsonValue(default_unregistered));
    }
    if(m_copy_to_udp_isSet){
        obj->insert("copyToUDP", QJsonValue(copy_to_udp));
    }
    if(m_udp_uses_rtp_isSet){
        obj->insert("udpUsesRTP", QJsonValue(udp_uses_rtp));
    }
    if(m_udp_channel_mode_isSet){
        obj->insert("udpChannelMode", QJsonValue(udp_channel_mode));
    }
    if(udp_address != nullptr && *udp_address != QString("")){
        toJsonValue(QString("udpAddress"), udp_address, obj, QString("QString"));
    }
    if(m_udp_port_isSet){
        obj->insert("udpPort", QJsonValue(udp_port));
    }

    return obj;
}

QString*
SWGAudioOutputDevice::getName() {
    return name;
}
void
SWGAudioOutputDevice::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

qint32
SWGAudioOutputDevice::getIndex() {
    return index;
}
void
SWGAudioOutputDevice::setIndex(qint32 index) {
    this->index = index;
    this->m_index_isSet = true;
}

qint32
SWGAudioOutputDevice::getSampleRate() {
    return sample_rate;
}
void
SWGAudioOutputDevice::setSampleRate(qint32 sample_rate) {
    this->sample_rate = sample_rate;
    this->m_sample_rate_isSet = true;
}

qint32
SWGAudioOutputDevice::getIsSystemDefault() {
    return is_system_default;
}
void
SWGAudioOutputDevice::setIsSystemDefault(qint32 is_system_default) {
    this->is_system_default = is_system_default;
    this->m_is_system_default_isSet = true;
}

qint32
SWGAudioOutputDevice::getDefaultUnregistered() {
    return default_unregistered;
}
void
SWGAudioOutputDevice::setDefaultUnregistered(qint32 default_unregistered) {
    this->default_unregistered = default_unregistered;
    this->m_default_unregistered_isSet = true;
}

qint32
SWGAudioOutputDevice::getCopyToUdp() {
    return copy_to_udp;
}
void
SWGAudioOutputDevice::setCopyToUdp(qint32 copy_to_udp) {
    this->copy_to_udp = copy_to_udp;
    this->m_copy_to_udp_isSet = true;
}

qint32
SWGAudioOutputDevice::getUdpUsesRtp() {
    return udp_uses_rtp;
}
void
SWGAudioOutputDevice::setUdpUsesRtp(qint32 udp_uses_rtp) {
    this->udp_uses_rtp = udp_uses_rtp;
    this->m_udp_uses_rtp_isSet = true;
}

qint32
SWGAudioOutputDevice::getUdpChannelMode() {
    return udp_channel_mode;
}
void
SWGAudioOutputDevice::setUdpChannelMode(qint32 udp_channel_mode) {
    this->udp_channel_mode = udp_channel_mode;
    this->m_udp_channel_mode_isSet = true;
}

QString*
SWGAudioOutputDevice::getUdpAddress() {
    return udp_address;
}
void
SWGAudioOutputDevice::setUdpAddress(QString* udp_address) {
    this->udp_address = udp_address;
    this->m_udp_address_isSet = true;
}

qint32
SWGAudioOutputDevice::getUdpPort() {
    return udp_port;
}
void
SWGAudioOutputDevice::setUdpPort(qint32 udp_port) {
    this->udp_port = udp_port;
    this->m_udp_port_isSet = true;
}


bool
SWGAudioOutputDevice::isSet(){
    bool isObjectUpdated = false;
    do{
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(m_index_isSet){ isObjectUpdated = true; break;}
        if(m_sample_rate_isSet){ isObjectUpdated = true; break;}
        if(m_is_system_default_isSet){ isObjectUpdated = true; break;}
        if(m_default_unregistered_isSet){ isObjectUpdated = true; break;}
        if(m_copy_to_udp_isSet){ isObjectUpdated = true; break;}
        if(m_udp_uses_rtp_isSet){ isObjectUpdated = true; break;}
        if(m_udp_channel_mode_isSet){ isObjectUpdated = true; break;}
        if(udp_address != nullptr && *udp_address != QString("")){ isObjectUpdated = true; break;}
        if(m_udp_port_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

