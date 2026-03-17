//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AudioSettingInfo : NSObject
{
    _Bool _voiceEarMonitorEnable;
    int _voiceVolume;
    int _earMonitorVoiceVolume;
}

@property(nonatomic) int earMonitorVoiceVolume; // @synthesize earMonitorVoiceVolume=_earMonitorVoiceVolume;
@property(nonatomic) _Bool voiceEarMonitorEnable; // @synthesize voiceEarMonitorEnable=_voiceEarMonitorEnable;
@property(nonatomic) int voiceVolume; // @synthesize voiceVolume=_voiceVolume;
- (id)description;

@end

