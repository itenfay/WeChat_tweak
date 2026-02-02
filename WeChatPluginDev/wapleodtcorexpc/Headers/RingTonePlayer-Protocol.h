//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RingToneDetail;

@protocol RingTonePlayer <NSObject>
@property(nonatomic) _Bool customVibrateEnabled;
- (void)stopPlay;
- (void)playRing:(RingToneDetail *)arg1;
- (double)currentPlayTime;
@end

