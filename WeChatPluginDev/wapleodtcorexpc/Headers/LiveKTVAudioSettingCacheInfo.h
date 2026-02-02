//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiveKTVAudioSettingCacheInfo : NSObject
{
    _Bool _voiceEarEnabled;
    int _volumeBGM;
    int _volumeVoice;
    int _pitchBGM;
    int _bgmChnlId;
    unsigned int _reverbType;
}

+ (void)initialize;
+ (void)PBArrayAdd_voiceEarEnabled;
+ (void)PBArrayAdd_reverbType;
+ (void)PBArrayAdd_bgmChnlId;
+ (void)PBArrayAdd_pitchBGM;
+ (void)PBArrayAdd_volumeVoice;
+ (void)PBArrayAdd_volumeBGM;
@property(nonatomic) _Bool voiceEarEnabled; // @synthesize voiceEarEnabled=_voiceEarEnabled;
@property(nonatomic) unsigned int reverbType; // @synthesize reverbType=_reverbType;
@property(nonatomic) int bgmChnlId; // @synthesize bgmChnlId=_bgmChnlId;
@property(nonatomic) int pitchBGM; // @synthesize pitchBGM=_pitchBGM;
@property(nonatomic) int volumeVoice; // @synthesize volumeVoice=_volumeVoice;
@property(nonatomic) int volumeBGM; // @synthesize volumeBGM=_volumeBGM;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

