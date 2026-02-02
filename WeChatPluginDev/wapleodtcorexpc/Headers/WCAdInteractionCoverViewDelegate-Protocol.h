//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCAdInteractionCoverViewDelegate <NSObject>

@optional
- (void)interactionCoverViewGotAccelerationChangedWithX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (void)interactionCoverViewDeviceMotionStateChangedToRunning:(_Bool)arg1;
- (_Bool)interactionCoverViewIsPlayerPlaying;
@end

