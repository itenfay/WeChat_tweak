//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, TPVideoFrameBuffer, TingBizPlayer, TingPlayerDisplayElement, TingPlayingInfo;

@protocol TingPlayingInfoDelegate <NSObject>

@optional
- (void)tingPlayingInfo:(TingPlayingInfo *)arg1 onDisplayViewMTKViewCreated:(TingBizPlayer *)arg2;
- (void)tingPlayingInfo:(TingPlayingInfo *)arg1 bizPlayer:(TingBizPlayer *)arg2 onDisplayElementFrameOut:(TPVideoFrameBuffer *)arg3;
- (void)tingPlayingInfo:(TingPlayingInfo *)arg1 bizPlayer:(TingBizPlayer *)arg2 onDisplayElementAvailable:(TingPlayerDisplayElement *)arg3;
- (_Bool)tingPlayingInfoHasMinimizedWindow:(TingPlayingInfo *)arg1;
- (void)tingPlayingInfo:(TingPlayingInfo *)arg1 bizPlayer:(TingBizPlayer *)arg2 playRateChanged:(float)arg3;
- (void)tingPlayingInfo:(TingPlayingInfo *)arg1 bizPlayer:(TingBizPlayer *)arg2 onInfoEvent:(int)arg3 error:(NSError *)arg4;
- (void)tingPlayingInfo:(TingPlayingInfo *)arg1 bizPlayer:(TingBizPlayer *)arg2 onEvent:(int)arg3 error:(NSError *)arg4;
- (void)tingPlayingInfo:(TingPlayingInfo *)arg1 bizPlayer:(TingBizPlayer *)arg2 statusChanged:(int)arg3;
- (void)tingPlayingInfo:(TingPlayingInfo *)arg1 bizPlayer:(TingBizPlayer *)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
@end

