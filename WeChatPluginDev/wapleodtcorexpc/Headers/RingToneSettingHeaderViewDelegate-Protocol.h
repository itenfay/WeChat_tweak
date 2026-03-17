//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RingToneDetail;

@protocol RingToneSettingHeaderViewDelegate <NSObject>
- (void)onHeaderViewJumpFinder:(RingToneDetail *)arg1;
- (void)onHeaderViewPlayButtonTap:(_Bool)arg1;
- (void)onHeaderViewSwitchButtonTap;
- (void)onHeaderViewAddExclusiveRingTap;

@optional
- (void)resetRingToDefault;
- (void)onHeaderViewJumpPlayer:(RingToneDetail *)arg1;
@end

