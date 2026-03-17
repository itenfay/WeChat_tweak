//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveStreamTypeInfo : NSObject
{
    _Bool _isPureAudioMode;
    _Bool _hasAudioMicUser;
    _Bool _isConnectingMic;
    unsigned long long _updateTime;
}

@property(nonatomic) unsigned long long updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) _Bool isConnectingMic; // @synthesize isConnectingMic=_isConnectingMic;
@property(nonatomic) _Bool hasAudioMicUser; // @synthesize hasAudioMicUser=_hasAudioMicUser;
@property(nonatomic) _Bool isPureAudioMode; // @synthesize isPureAudioMode=_isPureAudioMode;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

