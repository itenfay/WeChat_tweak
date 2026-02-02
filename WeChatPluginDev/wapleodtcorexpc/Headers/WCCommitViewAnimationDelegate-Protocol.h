//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WCDataItem;

@protocol WCCommitViewAnimationDelegate <NSObject>

@optional
- (void)onFinishSendWithoutAnim:(WCDataItem *)arg1;
- (void)onStartSendWithoutAnim:(WCDataItem *)arg1;
- (void)commitAnimationWillStart:(WCDataItem *)arg1;
- (void)animationDidEndRemainView:(UIView *)arg1 hintDataItem:(WCDataItem *)arg2;
@end

