//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RingToneDetail;

@protocol RingTonePickTableViewCellDelegate <NSObject>

@optional
- (void)stopPlayRing;
- (void)onTapPlayRingTone:(RingToneDetail *)arg1 isToPlay:(_Bool)arg2;
- (void)onTapUseRingtone:(RingToneDetail *)arg1;
- (void)onTapJumpFinder:(RingToneDetail *)arg1;
@end

