//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;

@protocol MailAttachmentControlViewDelegate <NSObject>
- (UIViewController *)getViewController;

@optional
- (void)onFirstResponderResigned;
- (void)onMailReceiverEditViewHeightChanged:(UIView *)arg1;
@end

