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


#include "SWGDSDDemodSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDSDDemodSettings::SWGDSDDemodSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDSDDemodSettings::SWGDSDDemodSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    fm_deviation = 0.0f;
    m_fm_deviation_isSet = false;
    demod_gain = 0.0f;
    m_demod_gain_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
    baud_rate = 0;
    m_baud_rate_isSet = false;
    squelch_gate = 0;
    m_squelch_gate_isSet = false;
    squelch = 0.0f;
    m_squelch_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    enable_cosine_filtering = 0;
    m_enable_cosine_filtering_isSet = false;
    sync_or_constellation = 0;
    m_sync_or_constellation_isSet = false;
    slot1_on = 0;
    m_slot1_on_isSet = false;
    slot2_on = 0;
    m_slot2_on_isSet = false;
    tdma_stereo = 0;
    m_tdma_stereo_isSet = false;
    pll_lock = 0;
    m_pll_lock_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    audio_device_name = nullptr;
    m_audio_device_name_isSet = false;
    high_pass_filter = 0;
    m_high_pass_filter_isSet = false;
    trace_length_mutliplier = 0;
    m_trace_length_mutliplier_isSet = false;
    trace_stroke = 0;
    m_trace_stroke_isSet = false;
    trace_decay = 0;
    m_trace_decay_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
}

SWGDSDDemodSettings::~SWGDSDDemodSettings() {
    this->cleanup();
}

void
SWGDSDDemodSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    fm_deviation = 0.0f;
    m_fm_deviation_isSet = false;
    demod_gain = 0.0f;
    m_demod_gain_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
    baud_rate = 0;
    m_baud_rate_isSet = false;
    squelch_gate = 0;
    m_squelch_gate_isSet = false;
    squelch = 0.0f;
    m_squelch_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    enable_cosine_filtering = 0;
    m_enable_cosine_filtering_isSet = false;
    sync_or_constellation = 0;
    m_sync_or_constellation_isSet = false;
    slot1_on = 0;
    m_slot1_on_isSet = false;
    slot2_on = 0;
    m_slot2_on_isSet = false;
    tdma_stereo = 0;
    m_tdma_stereo_isSet = false;
    pll_lock = 0;
    m_pll_lock_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    audio_device_name = new QString("");
    m_audio_device_name_isSet = false;
    high_pass_filter = 0;
    m_high_pass_filter_isSet = false;
    trace_length_mutliplier = 0;
    m_trace_length_mutliplier_isSet = false;
    trace_stroke = 0;
    m_trace_stroke_isSet = false;
    trace_decay = 0;
    m_trace_decay_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
}

void
SWGDSDDemodSettings::cleanup() {
















    if(title != nullptr) { 
        delete title;
    }
    if(audio_device_name != nullptr) { 
        delete audio_device_name;
    }





    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



}

SWGDSDDemodSettings*
SWGDSDDemodSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDSDDemodSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&fm_deviation, pJson["fmDeviation"], "float", "");
    
    ::SWGSDRangel::setValue(&demod_gain, pJson["demodGain"], "float", "");
    
    ::SWGSDRangel::setValue(&volume, pJson["volume"], "float", "");
    
    ::SWGSDRangel::setValue(&baud_rate, pJson["baudRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&squelch_gate, pJson["squelchGate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&squelch, pJson["squelch"], "float", "");
    
    ::SWGSDRangel::setValue(&audio_mute, pJson["audioMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&enable_cosine_filtering, pJson["enableCosineFiltering"], "qint32", "");
    
    ::SWGSDRangel::setValue(&sync_or_constellation, pJson["syncOrConstellation"], "qint32", "");
    
    ::SWGSDRangel::setValue(&slot1_on, pJson["slot1On"], "qint32", "");
    
    ::SWGSDRangel::setValue(&slot2_on, pJson["slot2On"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tdma_stereo, pJson["tdmaStereo"], "qint32", "");
    
    ::SWGSDRangel::setValue(&pll_lock, pJson["pllLock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&audio_device_name, pJson["audioDeviceName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&high_pass_filter, pJson["highPassFilter"], "qint32", "");
    
    ::SWGSDRangel::setValue(&trace_length_mutliplier, pJson["traceLengthMutliplier"], "qint32", "");
    
    ::SWGSDRangel::setValue(&trace_stroke, pJson["traceStroke"], "qint32", "");
    
    ::SWGSDRangel::setValue(&trace_decay, pJson["traceDecay"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
}

QString
SWGDSDDemodSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGDSDDemodSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_fm_deviation_isSet){
        obj->insert("fmDeviation", QJsonValue(fm_deviation));
    }
    if(m_demod_gain_isSet){
        obj->insert("demodGain", QJsonValue(demod_gain));
    }
    if(m_volume_isSet){
        obj->insert("volume", QJsonValue(volume));
    }
    if(m_baud_rate_isSet){
        obj->insert("baudRate", QJsonValue(baud_rate));
    }
    if(m_squelch_gate_isSet){
        obj->insert("squelchGate", QJsonValue(squelch_gate));
    }
    if(m_squelch_isSet){
        obj->insert("squelch", QJsonValue(squelch));
    }
    if(m_audio_mute_isSet){
        obj->insert("audioMute", QJsonValue(audio_mute));
    }
    if(m_enable_cosine_filtering_isSet){
        obj->insert("enableCosineFiltering", QJsonValue(enable_cosine_filtering));
    }
    if(m_sync_or_constellation_isSet){
        obj->insert("syncOrConstellation", QJsonValue(sync_or_constellation));
    }
    if(m_slot1_on_isSet){
        obj->insert("slot1On", QJsonValue(slot1_on));
    }
    if(m_slot2_on_isSet){
        obj->insert("slot2On", QJsonValue(slot2_on));
    }
    if(m_tdma_stereo_isSet){
        obj->insert("tdmaStereo", QJsonValue(tdma_stereo));
    }
    if(m_pll_lock_isSet){
        obj->insert("pllLock", QJsonValue(pll_lock));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(audio_device_name != nullptr && *audio_device_name != QString("")){
        toJsonValue(QString("audioDeviceName"), audio_device_name, obj, QString("QString"));
    }
    if(m_high_pass_filter_isSet){
        obj->insert("highPassFilter", QJsonValue(high_pass_filter));
    }
    if(m_trace_length_mutliplier_isSet){
        obj->insert("traceLengthMutliplier", QJsonValue(trace_length_mutliplier));
    }
    if(m_trace_stroke_isSet){
        obj->insert("traceStroke", QJsonValue(trace_stroke));
    }
    if(m_trace_decay_isSet){
        obj->insert("traceDecay", QJsonValue(trace_decay));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }
    if(m_reverse_api_channel_index_isSet){
        obj->insert("reverseAPIChannelIndex", QJsonValue(reverse_api_channel_index));
    }

    return obj;
}

qint64
SWGDSDDemodSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGDSDDemodSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGDSDDemodSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGDSDDemodSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

float
SWGDSDDemodSettings::getFmDeviation() {
    return fm_deviation;
}
void
SWGDSDDemodSettings::setFmDeviation(float fm_deviation) {
    this->fm_deviation = fm_deviation;
    this->m_fm_deviation_isSet = true;
}

float
SWGDSDDemodSettings::getDemodGain() {
    return demod_gain;
}
void
SWGDSDDemodSettings::setDemodGain(float demod_gain) {
    this->demod_gain = demod_gain;
    this->m_demod_gain_isSet = true;
}

float
SWGDSDDemodSettings::getVolume() {
    return volume;
}
void
SWGDSDDemodSettings::setVolume(float volume) {
    this->volume = volume;
    this->m_volume_isSet = true;
}

qint32
SWGDSDDemodSettings::getBaudRate() {
    return baud_rate;
}
void
SWGDSDDemodSettings::setBaudRate(qint32 baud_rate) {
    this->baud_rate = baud_rate;
    this->m_baud_rate_isSet = true;
}

qint32
SWGDSDDemodSettings::getSquelchGate() {
    return squelch_gate;
}
void
SWGDSDDemodSettings::setSquelchGate(qint32 squelch_gate) {
    this->squelch_gate = squelch_gate;
    this->m_squelch_gate_isSet = true;
}

float
SWGDSDDemodSettings::getSquelch() {
    return squelch;
}
void
SWGDSDDemodSettings::setSquelch(float squelch) {
    this->squelch = squelch;
    this->m_squelch_isSet = true;
}

qint32
SWGDSDDemodSettings::getAudioMute() {
    return audio_mute;
}
void
SWGDSDDemodSettings::setAudioMute(qint32 audio_mute) {
    this->audio_mute = audio_mute;
    this->m_audio_mute_isSet = true;
}

qint32
SWGDSDDemodSettings::getEnableCosineFiltering() {
    return enable_cosine_filtering;
}
void
SWGDSDDemodSettings::setEnableCosineFiltering(qint32 enable_cosine_filtering) {
    this->enable_cosine_filtering = enable_cosine_filtering;
    this->m_enable_cosine_filtering_isSet = true;
}

qint32
SWGDSDDemodSettings::getSyncOrConstellation() {
    return sync_or_constellation;
}
void
SWGDSDDemodSettings::setSyncOrConstellation(qint32 sync_or_constellation) {
    this->sync_or_constellation = sync_or_constellation;
    this->m_sync_or_constellation_isSet = true;
}

qint32
SWGDSDDemodSettings::getSlot1On() {
    return slot1_on;
}
void
SWGDSDDemodSettings::setSlot1On(qint32 slot1_on) {
    this->slot1_on = slot1_on;
    this->m_slot1_on_isSet = true;
}

qint32
SWGDSDDemodSettings::getSlot2On() {
    return slot2_on;
}
void
SWGDSDDemodSettings::setSlot2On(qint32 slot2_on) {
    this->slot2_on = slot2_on;
    this->m_slot2_on_isSet = true;
}

qint32
SWGDSDDemodSettings::getTdmaStereo() {
    return tdma_stereo;
}
void
SWGDSDDemodSettings::setTdmaStereo(qint32 tdma_stereo) {
    this->tdma_stereo = tdma_stereo;
    this->m_tdma_stereo_isSet = true;
}

qint32
SWGDSDDemodSettings::getPllLock() {
    return pll_lock;
}
void
SWGDSDDemodSettings::setPllLock(qint32 pll_lock) {
    this->pll_lock = pll_lock;
    this->m_pll_lock_isSet = true;
}

qint32
SWGDSDDemodSettings::getRgbColor() {
    return rgb_color;
}
void
SWGDSDDemodSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGDSDDemodSettings::getTitle() {
    return title;
}
void
SWGDSDDemodSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
SWGDSDDemodSettings::getAudioDeviceName() {
    return audio_device_name;
}
void
SWGDSDDemodSettings::setAudioDeviceName(QString* audio_device_name) {
    this->audio_device_name = audio_device_name;
    this->m_audio_device_name_isSet = true;
}

qint32
SWGDSDDemodSettings::getHighPassFilter() {
    return high_pass_filter;
}
void
SWGDSDDemodSettings::setHighPassFilter(qint32 high_pass_filter) {
    this->high_pass_filter = high_pass_filter;
    this->m_high_pass_filter_isSet = true;
}

qint32
SWGDSDDemodSettings::getTraceLengthMutliplier() {
    return trace_length_mutliplier;
}
void
SWGDSDDemodSettings::setTraceLengthMutliplier(qint32 trace_length_mutliplier) {
    this->trace_length_mutliplier = trace_length_mutliplier;
    this->m_trace_length_mutliplier_isSet = true;
}

qint32
SWGDSDDemodSettings::getTraceStroke() {
    return trace_stroke;
}
void
SWGDSDDemodSettings::setTraceStroke(qint32 trace_stroke) {
    this->trace_stroke = trace_stroke;
    this->m_trace_stroke_isSet = true;
}

qint32
SWGDSDDemodSettings::getTraceDecay() {
    return trace_decay;
}
void
SWGDSDDemodSettings::setTraceDecay(qint32 trace_decay) {
    this->trace_decay = trace_decay;
    this->m_trace_decay_isSet = true;
}

qint32
SWGDSDDemodSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGDSDDemodSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGDSDDemodSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGDSDDemodSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGDSDDemodSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGDSDDemodSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGDSDDemodSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGDSDDemodSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGDSDDemodSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGDSDDemodSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}


bool
SWGDSDDemodSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){ isObjectUpdated = true; break;}
        if(m_rf_bandwidth_isSet){ isObjectUpdated = true; break;}
        if(m_fm_deviation_isSet){ isObjectUpdated = true; break;}
        if(m_demod_gain_isSet){ isObjectUpdated = true; break;}
        if(m_volume_isSet){ isObjectUpdated = true; break;}
        if(m_baud_rate_isSet){ isObjectUpdated = true; break;}
        if(m_squelch_gate_isSet){ isObjectUpdated = true; break;}
        if(m_squelch_isSet){ isObjectUpdated = true; break;}
        if(m_audio_mute_isSet){ isObjectUpdated = true; break;}
        if(m_enable_cosine_filtering_isSet){ isObjectUpdated = true; break;}
        if(m_sync_or_constellation_isSet){ isObjectUpdated = true; break;}
        if(m_slot1_on_isSet){ isObjectUpdated = true; break;}
        if(m_slot2_on_isSet){ isObjectUpdated = true; break;}
        if(m_tdma_stereo_isSet){ isObjectUpdated = true; break;}
        if(m_pll_lock_isSet){ isObjectUpdated = true; break;}
        if(m_rgb_color_isSet){ isObjectUpdated = true; break;}
        if(title != nullptr && *title != QString("")){ isObjectUpdated = true; break;}
        if(audio_device_name != nullptr && *audio_device_name != QString("")){ isObjectUpdated = true; break;}
        if(m_high_pass_filter_isSet){ isObjectUpdated = true; break;}
        if(m_trace_length_mutliplier_isSet){ isObjectUpdated = true; break;}
        if(m_trace_stroke_isSet){ isObjectUpdated = true; break;}
        if(m_trace_decay_isSet){ isObjectUpdated = true; break;}
        if(m_use_reverse_api_isSet){ isObjectUpdated = true; break;}
        if(reverse_api_address != nullptr && *reverse_api_address != QString("")){ isObjectUpdated = true; break;}
        if(m_reverse_api_port_isSet){ isObjectUpdated = true; break;}
        if(m_reverse_api_device_index_isSet){ isObjectUpdated = true; break;}
        if(m_reverse_api_channel_index_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

