//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, TPVideoFrameBuffer, TingItem, TingPlayerCore, TingPlayerDisplayElement;

@protocol TingPlayerCoreExtension <NSObject>
- (void)tingPlayerCore:(TingPlayerCore *)arg1 onDisplayViewMTKViewCreated:(TingItem *)arg2;
- (void)tingPlayerCore:(TingPlayerCore *)arg1 tingItem:(TingItem *)arg2 onDisplayElementFrameOut:(TPVideoFrameBuffer *)arg3;
- (void)tingPlayerCore:(TingPlayerCore *)arg1 tingItem:(TingItem *)arg2 onDisplayElementAvailable:(TingPlayerDisplayElement *)arg3;
- (void)tingPlayerCore:(TingPlayerCore *)arg1 tingItem:(TingItem *)arg2 onInfoEvent:(int)arg3 error:(NSError *)arg4;
- (void)tingPlayerCore:(TingPlayerCore *)arg1 tingItem:(TingItem *)arg2 onEvent:(int)arg3 error:(NSError *)arg4;
- (void)tingPlayerCore:(TingPlayerCore *)arg1 tingItem:(TingItem *)arg2 onStatusChanged:(int)arg3;
- (void)tingPlayerCore:(TingPlayerCore *)arg1 tingItem:(TingItem *)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
@end

