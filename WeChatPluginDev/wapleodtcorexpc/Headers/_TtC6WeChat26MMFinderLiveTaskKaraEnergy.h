//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6WeChat26MMFinderLiveTaskKaraEnergy : NSObject
{
    MISSING_TYPE *currentLiveID;
    MISSING_TYPE *eventCollection;
    MISSING_TYPE *statusCollection;
}

- (void).cxx_destruct;
- (void)giftDidPlay;
- (void)onStartCustomPixelTransferChange;
- (void)appEnterForeground;
- (void)appLeaveForeground;
- (void)collectQoSWithLive:(id)arg1 QoS:(id)arg2 videoQualityLevel:(int)arg3 isH265:(_Bool)arg4 isEnhanceEnabled:(_Bool)arg5;
- (void)collectStatusWithLive:(id)arg1 anchorStatus:(long long)arg2;
- (void)collectEventWithLive:(id)arg1 oldPlayerStatus:(long long)arg2 newPlayerStatus:(long long)arg3;
- (_Bool)canProphetStep:(id)arg1;
- (_Bool)isProphetStarted;
- (void)stopProphetWithLive:(id)arg1;
- (void)stopProphet;
- (id)stepProphetWithLive:(id)arg1 metricsInfo:(id)arg2;
- (_Bool)startProphetWithLive:(id)arg1;
- (_Bool)restartProphetWithLive:(id)arg1;
- (void)dealloc;
- (id)init;

@end

