//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, TPVideoFrameBuffer, TingBizPlayer, TingPlayerDisplayElement;

@protocol TingBizPlayerDelegate <NSObject>

@optional
- (void)tingBizPlayerOnDisplayViewMTKViewCreated:(TingBizPlayer *)arg1;
- (void)tingBizPlayer:(TingBizPlayer *)arg1 onDisplayFrameBufferOut:(TPVideoFrameBuffer *)arg2;
- (void)tingBizPlayer:(TingBizPlayer *)arg1 onDisplayElementAvailable:(TingPlayerDisplayElement *)arg2;
- (void)tingBizPlayer:(TingBizPlayer *)arg1 playRateChanged:(float)arg2;
- (void)tingBizPlayer:(TingBizPlayer *)arg1 onInfoEvent:(int)arg2 error:(NSError *)arg3;
- (void)tingBizPlayer:(TingBizPlayer *)arg1 onEvent:(int)arg2 error:(NSError *)arg3;
- (void)tingBizPlayer:(TingBizPlayer *)arg1 statusChanged:(int)arg2;
- (void)tingBizPlayer:(TingBizPlayer *)arg1 updateCurrentTime:(double)arg2 displayTime:(double)arg3 duration:(double)arg4;
@end

