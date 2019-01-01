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
 * SWGSSBDemodSettings.h
 *
 * SSBDemod
 */

#ifndef SWGSSBDemodSettings_H_
#define SWGSSBDemodSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGSSBDemodSettings: public SWGObject {
public:
    SWGSSBDemodSettings();
    SWGSSBDemodSettings(QString* json);
    virtual ~SWGSSBDemodSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGSSBDemodSettings* fromJson(QString &jsonString) override;

    qint64 getInputFrequencyOffset();
    void setInputFrequencyOffset(qint64 input_frequency_offset);

    float getRfBandwidth();
    void setRfBandwidth(float rf_bandwidth);

    float getLowCutoff();
    void setLowCutoff(float low_cutoff);

    float getVolume();
    void setVolume(float volume);

    qint32 getSpanLog2();
    void setSpanLog2(qint32 span_log2);

    qint32 getAudioBinaural();
    void setAudioBinaural(qint32 audio_binaural);

    qint32 getAudioFlipChannels();
    void setAudioFlipChannels(qint32 audio_flip_channels);

    qint32 getDsb();
    void setDsb(qint32 dsb);

    qint32 getAudioMute();
    void setAudioMute(qint32 audio_mute);

    qint32 getAgc();
    void setAgc(qint32 agc);

    qint32 getAgcClamping();
    void setAgcClamping(qint32 agc_clamping);

    qint32 getAgcTimeLog2();
    void setAgcTimeLog2(qint32 agc_time_log2);

    qint32 getAgcPowerThreshold();
    void setAgcPowerThreshold(qint32 agc_power_threshold);

    qint32 getAgcThresholdGate();
    void setAgcThresholdGate(qint32 agc_threshold_gate);

    qint32 getRgbColor();
    void setRgbColor(qint32 rgb_color);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getAudioDeviceName();
    void setAudioDeviceName(QString* audio_device_name);


    virtual bool isSet() override;

private:
    qint64 input_frequency_offset;
    bool m_input_frequency_offset_isSet;

    float rf_bandwidth;
    bool m_rf_bandwidth_isSet;

    float low_cutoff;
    bool m_low_cutoff_isSet;

    float volume;
    bool m_volume_isSet;

    qint32 span_log2;
    bool m_span_log2_isSet;

    qint32 audio_binaural;
    bool m_audio_binaural_isSet;

    qint32 audio_flip_channels;
    bool m_audio_flip_channels_isSet;

    qint32 dsb;
    bool m_dsb_isSet;

    qint32 audio_mute;
    bool m_audio_mute_isSet;

    qint32 agc;
    bool m_agc_isSet;

    qint32 agc_clamping;
    bool m_agc_clamping_isSet;

    qint32 agc_time_log2;
    bool m_agc_time_log2_isSet;

    qint32 agc_power_threshold;
    bool m_agc_power_threshold_isSet;

    qint32 agc_threshold_gate;
    bool m_agc_threshold_gate_isSet;

    qint32 rgb_color;
    bool m_rgb_color_isSet;

    QString* title;
    bool m_title_isSet;

    QString* audio_device_name;
    bool m_audio_device_name_isSet;

};

}

#endif /* SWGSSBDemodSettings_H_ */
