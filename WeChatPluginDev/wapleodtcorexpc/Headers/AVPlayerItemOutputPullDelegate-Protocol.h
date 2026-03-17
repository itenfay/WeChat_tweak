//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVPlayerItemOutput;

@protocol AVPlayerItemOutputPullDelegate <NSObject>

@optional
- (void)outputSequenceWasFlushed:(AVPlayerItemOutput *)arg1;
- (void)outputMediaDataWillChange:(AVPlayerItemOutput *)arg1;
@end

