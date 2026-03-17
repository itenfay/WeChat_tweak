//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveRewardGiftItem, MMLiveRewardGiftPreviewWindow;

@protocol MMLiveRewardGiftPreviewWindowDelegate <NSObject>

@optional
- (void)onClickActivityUnlockGiftJumpAction:(MMLiveRewardGiftPreviewWindow *)arg1 giftItem:(MMFinderLiveRewardGiftItem *)arg2;
- (void)onSendButtonClickedForGiftItem:(MMFinderLiveRewardGiftItem *)arg1;
@end

