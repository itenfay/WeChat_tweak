//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MemoryMappedKV, NSString;

@interface VideoRingDataBase : NSObject
{
    MemoryMappedKV *_soundsFileKVMap;
    MemoryMappedKV *_defaultKVMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *defaultKVMap; // @synthesize defaultKVMap=_defaultKVMap;
@property(retain, nonatomic) MemoryMappedKV *soundsFileKVMap; // @synthesize soundsFileKVMap=_soundsFileKVMap;
@property(nonatomic) unsigned int vibrateFileVersion;
@property(nonatomic) float ringBackVolume;
@property(nonatomic) float ringToneVolume;
@property(nonatomic) _Bool cachedShouldShowRingBackSwitch;
@property(nonatomic) unsigned long long lastGlobalRingNotificationFileIdentifer;
@property(nonatomic) _Bool firstSetRingTone;
- (_Bool)hasAnyExclusiveRing;
@property(copy, nonatomic) NSString *globalRingName;
- (void)setLatestListendRingBackID:(id)arg1 forUser:(id)arg2;
- (id)getLatestListendRingBackIDForFriend:(id)arg1;
- (void)setSoundsFile:(id)arg1 forUser:(id)arg2;
- (id)getSoundsFileForFriend:(id)arg1;

@end

