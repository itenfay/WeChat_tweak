//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveFreeMicLocalInfo : NSObject
{
    _Bool _needSdkInfo;
    _Bool _isAllowTalkFromServer;
    _Bool _isTrtcReady;
    _Bool _isMicReady;
    _Bool _shouldHandleBreakTrtcMsg;
    unsigned long long _startTalkingTime;
}

@property(nonatomic) unsigned long long startTalkingTime; // @synthesize startTalkingTime=_startTalkingTime;
@property(nonatomic) _Bool shouldHandleBreakTrtcMsg; // @synthesize shouldHandleBreakTrtcMsg=_shouldHandleBreakTrtcMsg;
@property(nonatomic) _Bool isMicReady; // @synthesize isMicReady=_isMicReady;
@property(nonatomic) _Bool isTrtcReady; // @synthesize isTrtcReady=_isTrtcReady;
@property(nonatomic) _Bool isAllowTalkFromServer; // @synthesize isAllowTalkFromServer=_isAllowTalkFromServer;
@property(nonatomic) _Bool needSdkInfo; // @synthesize needSdkInfo=_needSdkInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

