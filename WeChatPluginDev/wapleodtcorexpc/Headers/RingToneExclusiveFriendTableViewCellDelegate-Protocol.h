//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RingToneDetail, RingToneExclusiveFriendTableViewCell;

@protocol RingToneExclusiveFriendTableViewCellDelegate <NSObject>
- (void)onExclusiveRingJumpFinder:(RingToneDetail *)arg1;
- (void)onExclusiveRingPlay:(RingToneExclusiveFriendTableViewCell *)arg1 isToPlay:(_Bool)arg2;
- (void)onExclusiveRingSwitch:(RingToneDetail *)arg1;
- (void)onExclusiveRingCrop:(RingToneDetail *)arg1;
@end

