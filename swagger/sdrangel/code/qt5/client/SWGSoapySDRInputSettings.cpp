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


#include "SWGSoapySDRInputSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSoapySDRInputSettings::SWGSoapySDRInputSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSoapySDRInputSettings::SWGSoapySDRInputSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    fc_pos = 0;
    m_fc_pos_isSet = false;
    soft_dc_correction = 0;
    m_soft_dc_correction_isSet = false;
    soft_iq_correction = 0;
    m_soft_iq_correction_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    file_record_name = nullptr;
    m_file_record_name_isSet = false;
    antenna = nullptr;
    m_antenna_isSet = false;
    bandwidth = 0;
    m_bandwidth_isSet = false;
    tunable_elements = nullptr;
    m_tunable_elements_isSet = false;
    global_gain = 0;
    m_global_gain_isSet = false;
    individual_gains = nullptr;
    m_individual_gains_isSet = false;
    auto_gain = 0;
    m_auto_gain_isSet = false;
    auto_dc_correction = 0;
    m_auto_dc_correction_isSet = false;
    auto_iq_correction = 0;
    m_auto_iq_correction_isSet = false;
    dc_correction = nullptr;
    m_dc_correction_isSet = false;
    iq_correction = nullptr;
    m_iq_correction_isSet = false;
    stream_arg_settings = nullptr;
    m_stream_arg_settings_isSet = false;
    device_arg_settings = nullptr;
    m_device_arg_settings_isSet = false;
}

SWGSoapySDRInputSettings::~SWGSoapySDRInputSettings() {
    this->cleanup();
}

void
SWGSoapySDRInputSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    fc_pos = 0;
    m_fc_pos_isSet = false;
    soft_dc_correction = 0;
    m_soft_dc_correction_isSet = false;
    soft_iq_correction = 0;
    m_soft_iq_correction_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    file_record_name = new QString("");
    m_file_record_name_isSet = false;
    antenna = new QString("");
    m_antenna_isSet = false;
    bandwidth = 0;
    m_bandwidth_isSet = false;
    tunable_elements = new QList<SWGArgValue*>();
    m_tunable_elements_isSet = false;
    global_gain = 0;
    m_global_gain_isSet = false;
    individual_gains = new QList<SWGArgValue*>();
    m_individual_gains_isSet = false;
    auto_gain = 0;
    m_auto_gain_isSet = false;
    auto_dc_correction = 0;
    m_auto_dc_correction_isSet = false;
    auto_iq_correction = 0;
    m_auto_iq_correction_isSet = false;
    dc_correction = new SWGComplex();
    m_dc_correction_isSet = false;
    iq_correction = new SWGComplex();
    m_iq_correction_isSet = false;
    stream_arg_settings = new QList<SWGArgValue*>();
    m_stream_arg_settings_isSet = false;
    device_arg_settings = new QList<SWGArgValue*>();
    m_device_arg_settings_isSet = false;
}

void
SWGSoapySDRInputSettings::cleanup() {









    if(file_record_name != nullptr) { 
        delete file_record_name;
    }
    if(antenna != nullptr) { 
        delete antenna;
    }

    if(tunable_elements != nullptr) { 
        auto arr = tunable_elements;
        for(auto o: *arr) { 
            delete o;
        }
        delete tunable_elements;
    }

    if(individual_gains != nullptr) { 
        auto arr = individual_gains;
        for(auto o: *arr) { 
            delete o;
        }
        delete individual_gains;
    }



    if(dc_correction != nullptr) { 
        delete dc_correction;
    }
    if(iq_correction != nullptr) { 
        delete iq_correction;
    }
    if(stream_arg_settings != nullptr) { 
        auto arr = stream_arg_settings;
        for(auto o: *arr) { 
            delete o;
        }
        delete stream_arg_settings;
    }
    if(device_arg_settings != nullptr) { 
        auto arr = device_arg_settings;
        for(auto o: *arr) { 
            delete o;
        }
        delete device_arg_settings;
    }
}

SWGSoapySDRInputSettings*
SWGSoapySDRInputSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSoapySDRInputSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&l_oppm_tenths, pJson["LOppmTenths"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dev_sample_rate, pJson["devSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_decim, pJson["log2Decim"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fc_pos, pJson["fcPos"], "qint32", "");
    
    ::SWGSDRangel::setValue(&soft_dc_correction, pJson["softDCCorrection"], "qint32", "");
    
    ::SWGSDRangel::setValue(&soft_iq_correction, pJson["softIQCorrection"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_mode, pJson["transverterMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_delta_frequency, pJson["transverterDeltaFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&file_record_name, pJson["fileRecordName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&antenna, pJson["antenna"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&bandwidth, pJson["bandwidth"], "qint32", "");
    
    
    ::SWGSDRangel::setValue(&tunable_elements, pJson["tunableElements"], "QList", "SWGArgValue");
    ::SWGSDRangel::setValue(&global_gain, pJson["globalGain"], "qint32", "");
    
    
    ::SWGSDRangel::setValue(&individual_gains, pJson["individualGains"], "QList", "SWGArgValue");
    ::SWGSDRangel::setValue(&auto_gain, pJson["autoGain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&auto_dc_correction, pJson["autoDCCorrection"], "qint32", "");
    
    ::SWGSDRangel::setValue(&auto_iq_correction, pJson["autoIQCorrection"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dc_correction, pJson["dcCorrection"], "SWGComplex", "SWGComplex");
    
    ::SWGSDRangel::setValue(&iq_correction, pJson["iqCorrection"], "SWGComplex", "SWGComplex");
    
    
    ::SWGSDRangel::setValue(&stream_arg_settings, pJson["streamArgSettings"], "QList", "SWGArgValue");
    
    ::SWGSDRangel::setValue(&device_arg_settings, pJson["deviceArgSettings"], "QList", "SWGArgValue");
}

QString
SWGSoapySDRInputSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSoapySDRInputSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_l_oppm_tenths_isSet){
        obj->insert("LOppmTenths", QJsonValue(l_oppm_tenths));
    }
    if(m_dev_sample_rate_isSet){
        obj->insert("devSampleRate", QJsonValue(dev_sample_rate));
    }
    if(m_log2_decim_isSet){
        obj->insert("log2Decim", QJsonValue(log2_decim));
    }
    if(m_fc_pos_isSet){
        obj->insert("fcPos", QJsonValue(fc_pos));
    }
    if(m_soft_dc_correction_isSet){
        obj->insert("softDCCorrection", QJsonValue(soft_dc_correction));
    }
    if(m_soft_iq_correction_isSet){
        obj->insert("softIQCorrection", QJsonValue(soft_iq_correction));
    }
    if(m_transverter_mode_isSet){
        obj->insert("transverterMode", QJsonValue(transverter_mode));
    }
    if(m_transverter_delta_frequency_isSet){
        obj->insert("transverterDeltaFrequency", QJsonValue(transverter_delta_frequency));
    }
    if(file_record_name != nullptr && *file_record_name != QString("")){
        toJsonValue(QString("fileRecordName"), file_record_name, obj, QString("QString"));
    }
    if(antenna != nullptr && *antenna != QString("")){
        toJsonValue(QString("antenna"), antenna, obj, QString("QString"));
    }
    if(m_bandwidth_isSet){
        obj->insert("bandwidth", QJsonValue(bandwidth));
    }
    if(tunable_elements->size() > 0){
        toJsonArray((QList<void*>*)tunable_elements, obj, "tunableElements", "SWGArgValue");
    }
    if(m_global_gain_isSet){
        obj->insert("globalGain", QJsonValue(global_gain));
    }
    if(individual_gains->size() > 0){
        toJsonArray((QList<void*>*)individual_gains, obj, "individualGains", "SWGArgValue");
    }
    if(m_auto_gain_isSet){
        obj->insert("autoGain", QJsonValue(auto_gain));
    }
    if(m_auto_dc_correction_isSet){
        obj->insert("autoDCCorrection", QJsonValue(auto_dc_correction));
    }
    if(m_auto_iq_correction_isSet){
        obj->insert("autoIQCorrection", QJsonValue(auto_iq_correction));
    }
    if((dc_correction != nullptr) && (dc_correction->isSet())){
        toJsonValue(QString("dcCorrection"), dc_correction, obj, QString("SWGComplex"));
    }
    if((iq_correction != nullptr) && (iq_correction->isSet())){
        toJsonValue(QString("iqCorrection"), iq_correction, obj, QString("SWGComplex"));
    }
    if(stream_arg_settings->size() > 0){
        toJsonArray((QList<void*>*)stream_arg_settings, obj, "streamArgSettings", "SWGArgValue");
    }
    if(device_arg_settings->size() > 0){
        toJsonArray((QList<void*>*)device_arg_settings, obj, "deviceArgSettings", "SWGArgValue");
    }

    return obj;
}

qint64
SWGSoapySDRInputSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGSoapySDRInputSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGSoapySDRInputSettings::getLOppmTenths() {
    return l_oppm_tenths;
}
void
SWGSoapySDRInputSettings::setLOppmTenths(qint32 l_oppm_tenths) {
    this->l_oppm_tenths = l_oppm_tenths;
    this->m_l_oppm_tenths_isSet = true;
}

qint32
SWGSoapySDRInputSettings::getDevSampleRate() {
    return dev_sample_rate;
}
void
SWGSoapySDRInputSettings::setDevSampleRate(qint32 dev_sample_rate) {
    this->dev_sample_rate = dev_sample_rate;
    this->m_dev_sample_rate_isSet = true;
}

qint32
SWGSoapySDRInputSettings::getLog2Decim() {
    return log2_decim;
}
void
SWGSoapySDRInputSettings::setLog2Decim(qint32 log2_decim) {
    this->log2_decim = log2_decim;
    this->m_log2_decim_isSet = true;
}

qint32
SWGSoapySDRInputSettings::getFcPos() {
    return fc_pos;
}
void
SWGSoapySDRInputSettings::setFcPos(qint32 fc_pos) {
    this->fc_pos = fc_pos;
    this->m_fc_pos_isSet = true;
}

qint32
SWGSoapySDRInputSettings::getSoftDcCorrection() {
    return soft_dc_correction;
}
void
SWGSoapySDRInputSettings::setSoftDcCorrection(qint32 soft_dc_correction) {
    this->soft_dc_correction = soft_dc_correction;
    this->m_soft_dc_correction_isSet = true;
}

qint32
SWGSoapySDRInputSettings::getSoftIqCorrection() {
    return soft_iq_correction;
}
void
SWGSoapySDRInputSettings::setSoftIqCorrection(qint32 soft_iq_correction) {
    this->soft_iq_correction = soft_iq_correction;
    this->m_soft_iq_correction_isSet = true;
}

qint32
SWGSoapySDRInputSettings::getTransverterMode() {
    return transverter_mode;
}
void
SWGSoapySDRInputSettings::setTransverterMode(qint32 transverter_mode) {
    this->transverter_mode = transverter_mode;
    this->m_transverter_mode_isSet = true;
}

qint64
SWGSoapySDRInputSettings::getTransverterDeltaFrequency() {
    return transverter_delta_frequency;
}
void
SWGSoapySDRInputSettings::setTransverterDeltaFrequency(qint64 transverter_delta_frequency) {
    this->transverter_delta_frequency = transverter_delta_frequency;
    this->m_transverter_delta_frequency_isSet = true;
}

QString*
SWGSoapySDRInputSettings::getFileRecordName() {
    return file_record_name;
}
void
SWGSoapySDRInputSettings::setFileRecordName(QString* file_record_name) {
    this->file_record_name = file_record_name;
    this->m_file_record_name_isSet = true;
}

QString*
SWGSoapySDRInputSettings::getAntenna() {
    return antenna;
}
void
SWGSoapySDRInputSettings::setAntenna(QString* antenna) {
    this->antenna = antenna;
    this->m_antenna_isSet = true;
}

qint32
SWGSoapySDRInputSettings::getBandwidth() {
    return bandwidth;
}
void
SWGSoapySDRInputSettings::setBandwidth(qint32 bandwidth) {
    this->bandwidth = bandwidth;
    this->m_bandwidth_isSet = true;
}

QList<SWGArgValue*>*
SWGSoapySDRInputSettings::getTunableElements() {
    return tunable_elements;
}
void
SWGSoapySDRInputSettings::setTunableElements(QList<SWGArgValue*>* tunable_elements) {
    this->tunable_elements = tunable_elements;
    this->m_tunable_elements_isSet = true;
}

qint32
SWGSoapySDRInputSettings::getGlobalGain() {
    return global_gain;
}
void
SWGSoapySDRInputSettings::setGlobalGain(qint32 global_gain) {
    this->global_gain = global_gain;
    this->m_global_gain_isSet = true;
}

QList<SWGArgValue*>*
SWGSoapySDRInputSettings::getIndividualGains() {
    return individual_gains;
}
void
SWGSoapySDRInputSettings::setIndividualGains(QList<SWGArgValue*>* individual_gains) {
    this->individual_gains = individual_gains;
    this->m_individual_gains_isSet = true;
}

qint32
SWGSoapySDRInputSettings::getAutoGain() {
    return auto_gain;
}
void
SWGSoapySDRInputSettings::setAutoGain(qint32 auto_gain) {
    this->auto_gain = auto_gain;
    this->m_auto_gain_isSet = true;
}

qint32
SWGSoapySDRInputSettings::getAutoDcCorrection() {
    return auto_dc_correction;
}
void
SWGSoapySDRInputSettings::setAutoDcCorrection(qint32 auto_dc_correction) {
    this->auto_dc_correction = auto_dc_correction;
    this->m_auto_dc_correction_isSet = true;
}

qint32
SWGSoapySDRInputSettings::getAutoIqCorrection() {
    return auto_iq_correction;
}
void
SWGSoapySDRInputSettings::setAutoIqCorrection(qint32 auto_iq_correction) {
    this->auto_iq_correction = auto_iq_correction;
    this->m_auto_iq_correction_isSet = true;
}

SWGComplex*
SWGSoapySDRInputSettings::getDcCorrection() {
    return dc_correction;
}
void
SWGSoapySDRInputSettings::setDcCorrection(SWGComplex* dc_correction) {
    this->dc_correction = dc_correction;
    this->m_dc_correction_isSet = true;
}

SWGComplex*
SWGSoapySDRInputSettings::getIqCorrection() {
    return iq_correction;
}
void
SWGSoapySDRInputSettings::setIqCorrection(SWGComplex* iq_correction) {
    this->iq_correction = iq_correction;
    this->m_iq_correction_isSet = true;
}

QList<SWGArgValue*>*
SWGSoapySDRInputSettings::getStreamArgSettings() {
    return stream_arg_settings;
}
void
SWGSoapySDRInputSettings::setStreamArgSettings(QList<SWGArgValue*>* stream_arg_settings) {
    this->stream_arg_settings = stream_arg_settings;
    this->m_stream_arg_settings_isSet = true;
}

QList<SWGArgValue*>*
SWGSoapySDRInputSettings::getDeviceArgSettings() {
    return device_arg_settings;
}
void
SWGSoapySDRInputSettings::setDeviceArgSettings(QList<SWGArgValue*>* device_arg_settings) {
    this->device_arg_settings = device_arg_settings;
    this->m_device_arg_settings_isSet = true;
}


bool
SWGSoapySDRInputSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_l_oppm_tenths_isSet){ isObjectUpdated = true; break;}
        if(m_dev_sample_rate_isSet){ isObjectUpdated = true; break;}
        if(m_log2_decim_isSet){ isObjectUpdated = true; break;}
        if(m_fc_pos_isSet){ isObjectUpdated = true; break;}
        if(m_soft_dc_correction_isSet){ isObjectUpdated = true; break;}
        if(m_soft_iq_correction_isSet){ isObjectUpdated = true; break;}
        if(m_transverter_mode_isSet){ isObjectUpdated = true; break;}
        if(m_transverter_delta_frequency_isSet){ isObjectUpdated = true; break;}
        if(file_record_name != nullptr && *file_record_name != QString("")){ isObjectUpdated = true; break;}
        if(antenna != nullptr && *antenna != QString("")){ isObjectUpdated = true; break;}
        if(m_bandwidth_isSet){ isObjectUpdated = true; break;}
        if(tunable_elements->size() > 0){ isObjectUpdated = true; break;}
        if(m_global_gain_isSet){ isObjectUpdated = true; break;}
        if(individual_gains->size() > 0){ isObjectUpdated = true; break;}
        if(m_auto_gain_isSet){ isObjectUpdated = true; break;}
        if(m_auto_dc_correction_isSet){ isObjectUpdated = true; break;}
        if(m_auto_iq_correction_isSet){ isObjectUpdated = true; break;}
        if(dc_correction != nullptr && dc_correction->isSet()){ isObjectUpdated = true; break;}
        if(iq_correction != nullptr && iq_correction->isSet()){ isObjectUpdated = true; break;}
        if(stream_arg_settings->size() > 0){ isObjectUpdated = true; break;}
        if(device_arg_settings->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

