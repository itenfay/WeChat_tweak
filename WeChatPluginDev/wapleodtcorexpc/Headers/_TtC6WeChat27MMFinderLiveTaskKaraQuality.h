//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6WeChat27MMFinderLiveTaskKaraQuality : NSObject
{
    MISSING_TYPE *currentLiveID;
    MISSING_TYPE *switchInfo;
    MISSING_TYPE *eventCollection;
    MISSING_TYPE *statusCollection;
}

- (void).cxx_destruct;
- (void)reportThatFinishSwitchWithLive:(id)arg1 success:(_Bool)arg2;
- (void)reportThatStartSwitchWithLive:(id)arg1 startQuality:(long long)arg2 targetQuality:(long long)arg3 smooth:(_Bool)arg4 manually:(_Bool)arg5;
- (void)onStartCustomPixelTransferChange;
- (void)appEnterForeground;
- (void)appLeaveForeground;
- (void)collectStatusWithLive:(id)arg1 metricInfo:(id)arg2;
- (void)collectStatusWithLive:(id)arg1 anchorStatus:(long long)arg2;
- (void)collectEventWithLive:(id)arg1 playerEvent:(long long)arg2 parameters:(id)arg3;
- (void)collectEventWithLive:(id)arg1 oldPlayerStatus:(long long)arg2 newPlayerStatus:(long long)arg3;
- (_Bool)canProphetStep:(id)arg1;
- (_Bool)isProphetStarted;
- (void)stopProphetWithLive:(id)arg1;
- (void)stopProphet;
- (long long)stepProphetWithLive:(id)arg1 state:(id)arg2;
- (_Bool)startProphetWithLive:(id)arg1;
- (_Bool)restartProphetWithLive:(id)arg1;
- (void)dealloc;
- (id)init;

@end

