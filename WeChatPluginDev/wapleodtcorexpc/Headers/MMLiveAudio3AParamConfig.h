//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveAudio3AParamConfig : NSObject
{
    int _got_wave_3a_parm_flag;
    int _wx3AEnable;
    int _system_volume_type_voip;
    int _aecEnable_vpio;
    int _aecEnable_rmio;
    int _aecMode_bgm;
    int _aecMode_vpio;
    int _aecMode_rmio;
    int _agcGain_speaker;
    int _agcGain_receiver;
    int _agcGain_wire_earphone;
    int _agcGain_wireless_earphone;
    int _nsEnable_voip;
    int _nsEnable_live;
    int _agcEnable_live;
    int _agcEnable_voip;
    int _nsMode_voip;
    int _nsMode_live;
    int _agcMode;
    int _wx3AChannels;
    int _wx3AEnable_headset;
    int _wx3AALLEnable_headset;
    int _trtc3Aenable;
    int _wx3AMicChannels;
    int _device_vpio_flag;
    int _rmio_enable_by_iosversion;
}

@property(nonatomic) int rmio_enable_by_iosversion; // @synthesize rmio_enable_by_iosversion=_rmio_enable_by_iosversion;
@property(nonatomic) int device_vpio_flag; // @synthesize device_vpio_flag=_device_vpio_flag;
@property(nonatomic) int wx3AMicChannels; // @synthesize wx3AMicChannels=_wx3AMicChannels;
@property(nonatomic) int trtc3Aenable; // @synthesize trtc3Aenable=_trtc3Aenable;
@property(nonatomic) int wx3AALLEnable_headset; // @synthesize wx3AALLEnable_headset=_wx3AALLEnable_headset;
@property(nonatomic) int wx3AEnable_headset; // @synthesize wx3AEnable_headset=_wx3AEnable_headset;
@property(nonatomic) int wx3AChannels; // @synthesize wx3AChannels=_wx3AChannels;
@property(nonatomic) int agcMode; // @synthesize agcMode=_agcMode;
@property(nonatomic) int nsMode_live; // @synthesize nsMode_live=_nsMode_live;
@property(nonatomic) int nsMode_voip; // @synthesize nsMode_voip=_nsMode_voip;
@property(nonatomic) int agcEnable_voip; // @synthesize agcEnable_voip=_agcEnable_voip;
@property(nonatomic) int agcEnable_live; // @synthesize agcEnable_live=_agcEnable_live;
@property(nonatomic) int nsEnable_live; // @synthesize nsEnable_live=_nsEnable_live;
@property(nonatomic) int nsEnable_voip; // @synthesize nsEnable_voip=_nsEnable_voip;
@property(nonatomic) int agcGain_wireless_earphone; // @synthesize agcGain_wireless_earphone=_agcGain_wireless_earphone;
@property(nonatomic) int agcGain_wire_earphone; // @synthesize agcGain_wire_earphone=_agcGain_wire_earphone;
@property(nonatomic) int agcGain_receiver; // @synthesize agcGain_receiver=_agcGain_receiver;
@property(nonatomic) int agcGain_speaker; // @synthesize agcGain_speaker=_agcGain_speaker;
@property(nonatomic) int aecMode_rmio; // @synthesize aecMode_rmio=_aecMode_rmio;
@property(nonatomic) int aecMode_vpio; // @synthesize aecMode_vpio=_aecMode_vpio;
@property(nonatomic) int aecMode_bgm; // @synthesize aecMode_bgm=_aecMode_bgm;
@property(nonatomic) int aecEnable_rmio; // @synthesize aecEnable_rmio=_aecEnable_rmio;
@property(nonatomic) int aecEnable_vpio; // @synthesize aecEnable_vpio=_aecEnable_vpio;
@property(nonatomic) int system_volume_type_voip; // @synthesize system_volume_type_voip=_system_volume_type_voip;
@property(nonatomic) int wx3AEnable; // @synthesize wx3AEnable=_wx3AEnable;
@property(nonatomic) int got_wave_3a_parm_flag; // @synthesize got_wave_3a_parm_flag=_got_wave_3a_parm_flag;
- (void)updateAudio3AParamWithTRTCInstance:(id)arg1 isVoiceRoom:(_Bool)arg2;
- (id)init;

@end

